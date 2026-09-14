/**
 * psdk_wrapper.c
 *
 * Thin C shim around DJI's Payload SDK (PSDK) that exposes the plain C ABI
 * already expected by dji_psdk_bridge/psdk_adapter.py (psdk_connect, psdk_arm,
 * psdk_takeoff, psdk_land, psdk_setpoint, psdk_command) plus a telemetry
 * getter, so the ROS2 bridge can drive/observe a real PSDK-capable aircraft
 * instead of running in stub mode.
 *
 * Requires, at runtime:
 *   - A UART link to the aircraft's payload port (E-Port/X-Port/SkyPort),
 *     configured via PSDK_UART_DEV1 (default /dev/ttyUSB0).
 *   - A DJI Developer app registered at https://developer.dji.com/user/apps
 *     supplied via PSDK_APP_NAME / PSDK_APP_ID / PSDK_APP_KEY /
 *     PSDK_APP_LICENSE / PSDK_DEV_ACCOUNT.
 *   - An aircraft that actually supports PSDK (M30/M30T, M300/M350 RTK,
 *     Matrice 4 series, Mavic 3 Enterprise, ...). Consumer airframes such as
 *     the Mini series do not expose a payload port and cannot run PSDK.
 */

#include <dji_core.h>
#include <dji_logger.h>
#include <dji_platform.h>
#include <dji_aircraft_info.h>
#include <dji_flight_controller.h>
#include <dji_fc_subscription.h>
#include <dji_liveview.h>

#include "osal/osal.h"
#include "osal/osal_fs.h"
#include "osal/osal_socket.h"
#include "hal/hal_uart.h"
#include "hal/hal_network.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <pthread.h>

static bool s_platformRegistered = false;
static bool s_connected = false;

/* ------------------------------------------------------------------------ */
/* Telemetry cache (callback-populated, NOT polling)                        */
/* ------------------------------------------------------------------------ */

/* DjiFcSubscription_GetLatestValueOfTopic() - the documented polling API -
 * reliably segfaults inside DJI's own closed-source library on this PSDK build
 * (confirmed via gdb backtrace: crashes inside an internal, undocumented
 * function, DjiDataSubscriptionDds_v2_GetLastValueOfTopic, reached from the
 * public API with correct arguments, a successfully-subscribed topic, and a
 * stable connection - not something fixable on our side). The callback-push
 * subscription model exercises different internal code paths in the library
 * and works correctly. So: subscribe with real callbacks, cache each topic's
 * latest value here as it arrives, and have psdk_get_telemetry() read the
 * cache instead of ever calling GetLatestValueOfTopic. */
static pthread_mutex_t s_telemetryLock = PTHREAD_MUTEX_INITIALIZER;
static bool s_haveQuaternion = false;
static bool s_haveVelocity = false;
static bool s_havePositionFused = false;
static bool s_haveHeightFusion = false;
static bool s_haveBatteryInfo = false;
static T_DjiFcSubscriptionQuaternion s_quaternion = {0};
static T_DjiFcSubscriptionVelocity s_velocity = {0};
static T_DjiFcSubscriptionPositionFused s_positionFused = {0};
static T_DjiFcSubscriptionHeightFusion s_heightFusion = 0;
static T_DjiFcSubscriptionSingleBatteryInfo s_batteryInfo = {0};
static bool s_haveControlDevice = false;
static T_DjiFcSubscriptionControlDevice s_controlDevice = {0};
static bool s_haveRcWithFlag = false;
static T_DjiFcSubscriptionRCWithFlagData s_rcWithFlag = {0};

/* Set by the joystick-authority event callback below. Distinct from s_controlDevice,
 * which is the aircraft's periodic report: this is the push notification of a change,
 * and carries DJI's reason code for why authority moved. */
static volatile int s_lastAuthorityEvent = -1;

#define TELEMETRY_CALLBACK(NAME, VAR, HAVE_FLAG) \
    static T_DjiReturnCode NAME(const uint8_t *data, uint16_t dataSize, \
                                const T_DjiDataTimestamp *timestamp) \
    { \
        (void) timestamp; \
        if (dataSize < sizeof(VAR)) { \
            return DJI_ERROR_SYSTEM_MODULE_CODE_INVALID_PARAMETER; \
        } \
        pthread_mutex_lock(&s_telemetryLock); \
        memcpy(&VAR, data, sizeof(VAR)); \
        HAVE_FLAG = true; \
        pthread_mutex_unlock(&s_telemetryLock); \
        return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS; \
    }

TELEMETRY_CALLBACK(QuaternionCallback, s_quaternion, s_haveQuaternion)
TELEMETRY_CALLBACK(VelocityCallback, s_velocity, s_haveVelocity)
TELEMETRY_CALLBACK(PositionFusedCallback, s_positionFused, s_havePositionFused)
TELEMETRY_CALLBACK(HeightFusionCallback, s_heightFusion, s_haveHeightFusion)
TELEMETRY_CALLBACK(BatteryInfoCallback, s_batteryInfo, s_haveBatteryInfo)
TELEMETRY_CALLBACK(ControlDeviceCallback, s_controlDevice, s_haveControlDevice)
TELEMETRY_CALLBACK(RcWithFlagCallback, s_rcWithFlag, s_haveRcWithFlag)

/* ------------------------------------------------------------------------ */
/* Liveview H.264 ring buffer                                               */
/* ------------------------------------------------------------------------ */

/* DJI delivers liveview as an H.264 elementary stream over the high-speed data
 * channel (the E-Port's USB RNDIS link, not the UART). The decoded-frame API,
 * DjiLiveview_StartImageStream, is Manifold-3 only per dji_liveview.h, so on a Pi
 * the only option is the raw H.264 callback and someone else does the decoding.
 *
 * The callback runs on a PSDK thread. It does the minimum: memcpy into this ring
 * and return. No ROS, no allocation, no blocking - the same discipline as the
 * telemetry callbacks above. */
#define LIVEVIEW_RING_BYTES (1u << 20)  /* 1 MiB ~= 2 s at 4 Mbps */

static pthread_mutex_t s_liveviewLock = PTHREAD_MUTEX_INITIALIZER;
static uint8_t s_liveviewRing[LIVEVIEW_RING_BYTES];
static uint32_t s_liveviewHead = 0;      /* write cursor */
static uint32_t s_liveviewTail = 0;      /* read cursor  */
static uint32_t s_liveviewUsed = 0;
static uint64_t s_liveviewBytesIn = 0;   /* total received, for rate logging */
static uint64_t s_liveviewDropped = 0;   /* bytes discarded on overflow */
static bool s_liveviewRunning = false;
static E_DjiLiveViewCameraPosition s_liveviewPosition = DJI_LIVEVIEW_CAMERA_POSITION_NO_1;
static E_DjiLiveViewCameraSource s_liveviewSource = DJI_LIVEVIEW_CAMERA_SOURCE_M3E_VIS;

static void PsdkWrapper_LiveviewH264Callback(E_DjiLiveViewCameraPosition position,
                                              const uint8_t *buf, uint32_t len)
{
    (void) position;
    if (buf == NULL || len == 0) {
        return;
    }

    pthread_mutex_lock(&s_liveviewLock);
    s_liveviewBytesIn += len;

    /* Drop oldest on overflow. Losing the tail of a stream the decoder can resync from
     * beats blocking a PSDK callback thread. Drops are counted so the ROS layer can
     * report them and request a keyframe. */
    if (len >= LIVEVIEW_RING_BYTES) {
        s_liveviewDropped += len;
        pthread_mutex_unlock(&s_liveviewLock);
        return;
    }
    while (s_liveviewUsed + len > LIVEVIEW_RING_BYTES) {
        uint32_t discard = (LIVEVIEW_RING_BYTES / 8u);
        if (discard > s_liveviewUsed) {
            discard = s_liveviewUsed;
        }
        s_liveviewTail = (s_liveviewTail + discard) % LIVEVIEW_RING_BYTES;
        s_liveviewUsed -= discard;
        s_liveviewDropped += discard;
    }

    uint32_t firstChunk = LIVEVIEW_RING_BYTES - s_liveviewHead;
    if (firstChunk > len) {
        firstChunk = len;
    }
    memcpy(&s_liveviewRing[s_liveviewHead], buf, firstChunk);
    if (len > firstChunk) {
        memcpy(&s_liveviewRing[0], buf + firstChunk, len - firstChunk);
    }
    s_liveviewHead = (s_liveviewHead + len) % LIVEVIEW_RING_BYTES;
    s_liveviewUsed += len;
    pthread_mutex_unlock(&s_liveviewLock);
}

/* ------------------------------------------------------------------------ */
/* Console logging                                                          */
/* ------------------------------------------------------------------------ */

static T_DjiReturnCode PsdkWrapper_ConsolePrint(const uint8_t *data, uint16_t dataLen)
{
    fwrite(data, 1, dataLen, stderr);
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}

/* ------------------------------------------------------------------------ */
/* Platform registration (OSAL / UART / filesystem / socket)                */
/* ------------------------------------------------------------------------ */

static T_DjiReturnCode PsdkWrapper_RegisterPlatform(void)
{
    T_DjiReturnCode rc;

    static T_DjiLoggerConsole console = {
        .func = PsdkWrapper_ConsolePrint,
        .consoleLevel = DJI_LOGGER_CONSOLE_LOG_LEVEL_INFO,
        .isSupportColor = false,
    };
    DjiLogger_AddConsole(&console);

    static T_DjiOsalHandler osalHandler = {
        .TaskCreate = Osal_TaskCreate,
        .TaskDestroy = Osal_TaskDestroy,
        .TaskSleepMs = Osal_TaskSleepMs,
        .MutexCreate = Osal_MutexCreate,
        .MutexDestroy = Osal_MutexDestroy,
        .MutexLock = Osal_MutexLock,
        .MutexUnlock = Osal_MutexUnlock,
        .SemaphoreCreate = Osal_SemaphoreCreate,
        .SemaphoreDestroy = Osal_SemaphoreDestroy,
        .SemaphoreWait = Osal_SemaphoreWait,
        .SemaphoreTimedWait = Osal_SemaphoreTimedWait,
        .SemaphorePost = Osal_SemaphorePost,
        .GetTimeMs = Osal_GetTimeMs,
        .GetTimeUs = Osal_GetTimeUs,
        .GetRandomNum = Osal_GetRandomNum,
        .Malloc = Osal_Malloc,
        .Free = Osal_Free,
    };
    rc = DjiPlatform_RegOsalHandler(&osalHandler);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        return rc;
    }

    static T_DjiHalUartHandler uartHandler = {
        .UartInit = HalUart_Init,
        .UartDeInit = HalUart_DeInit,
        .UartWriteData = HalUart_WriteData,
        .UartReadData = HalUart_ReadData,
        .UartGetStatus = HalUart_GetStatus,
    };
    rc = DjiPlatform_RegHalUartHandler(&uartHandler);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        return rc;
    }

    static T_DjiFileSystemHandler fsHandler = {
        .FileOpen = Osal_FileOpen,
        .FileClose = Osal_FileClose,
        .FileWrite = Osal_FileWrite,
        .FileRead = Osal_FileRead,
        .FileSeek = Osal_FileSeek,
        .FileSync = Osal_FileSync,
        .DirOpen = Osal_DirOpen,
        .DirClose = Osal_DirClose,
        .DirRead = Osal_DirRead,
        .Mkdir = Osal_Mkdir,
        .Unlink = Osal_Unlink,
        .Rename = Osal_Rename,
        .Stat = Osal_Stat,
    };
    rc = DjiPlatform_RegFileSystemHandler(&fsHandler);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        return rc;
    }

    /* Registration order follows DJI's own Raspberry Pi sample
     * (samples/sample_c/platform/linux/raspberry_pi/application/main.c), which under
     * DJI_USE_UART_AND_NETWORK_DEVICE registers UART, then the network handler, then the
     * socket handler. We previously registered the socket handler first. Swapped so this
     * matches the reference exactly - one fewer difference to explain when the link
     * misbehaves.
     */
    /* OFF by default: with this rig's current cabling, registering this costs the flight
     * link and buys nothing. That is a wiring problem, not a PSDK one - see below.
     *
     * What liveview needs. Its H.264 does not travel over this UART; it rides a
     * high-speed USB channel. DJI's PSDK HAL documentation, "USB Device" section, gives
     * the M3E/M3T mapping as "RNDIS virtual network card/USB to Ethernet card -> Push
     * Liveview, Subscribe FPV/main camera stream", and states the roles plainly:
     * "M3E/M3T: SDK device side is USB Device, the drone side is USB Host". So the Pi
     * must present itself to the aircraft as a USB *device* (an RNDIS gadget). DJI pins
     * the identity for E-Port V2: RNDIS is 2CA3:F003 (BULK 2CA3:F001, VCOM 2CA3:F002).
     *
     * How this rig is actually wired (14 Sep 2026): every USB peripheral, including the
     * aircraft's 2ca3:001f, sits on the Pi's USB-A ports with the Pi as HOST. The USB-C
     * port - the only one with a device controller - is empty and pinned to
     * dtoverlay=dwc2,dr_mode=host. So the channel PSDK wants has no physical path.
     *
     * That single fact explains both failures measured against the live aircraft:
     *   - handler OFF: DjiCore_Init succeeds, but DjiLiveview_Init returns 0xE0
     *     (NONSUPPORT) - there is no high-speed channel to carry video.
     *   - handler ON:  DjiCore_Init returns 0xE1 (TIMEOUT). PSDK calls our
     *     NetworkGetDeviceInfo (confirmed by its log line), tells the aircraft to bring
     *     up the high-speed channel, and waits for a peer that cannot appear.
     *     NetworkInit is never reached, which is why the interface stays down.
     *
     * Two plausible software causes were tested against the live aircraft and DISPROVED.
     * Do not spend time on them again:
     *   - the VID/PID from NetworkGetDeviceInfo. Swept 2CA3:F003, 0955:7020 (DJI's own
     *     Pi sample), 0B95:1790 (their x86 sample, an AX88179) and 1D6B:0104. All four
     *     produced an identical 0xE1.
     *   - handler registration order. DJI's reference sample registers UART, then
     *     network, then socket; this file had socket before network. Reordered to match
     *     exactly (the order you see now) - no change.
     *
     * The remaining step is physical: put the Pi in peripheral mode and connect its
     * USB-C to the aircraft's E-Port USB, then bring up an RNDIS gadget at 2CA3:F003.
     * agilica/scripts/setup_usb_gadget.sh does the software half and --check reports
     * what is still missing. Until that is done, leave this OFF: switching it on for a
     * flight forfeits telemetry and control for no benefit.
     */
    const char *regNetHandler = getenv("PSDK_REGISTER_NETWORK_HANDLER");
    if (regNetHandler && (regNetHandler[0] == '1' || regNetHandler[0] == 't' ||
                          regNetHandler[0] == 'T' || regNetHandler[0] == 'y' ||
                          regNetHandler[0] == 'Y')) {
        static T_DjiHalNetworkHandler networkHandler = {
            .NetworkInit = HalNetwork_Init,
            .NetworkDeInit = HalNetwork_DeInit,
            .NetworkGetDeviceInfo = HalNetwork_GetDeviceInfo,
        };
        fprintf(stderr, "[psdk_wrapper] PSDK_REGISTER_NETWORK_HANDLER set: registering the "
                        "network handler. DjiCore_Init is expected to fail with 0xE1 because of "
                        "this (measured 24 Aug and 14 Sep) - unset it to restore telemetry and "
                        "control.\n");
        rc = DjiPlatform_RegHalNetworkHandler(&networkHandler);
        if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
            fprintf(stderr, "[psdk_wrapper] network handler registration failed: 0x%08llX "
                            "(liveview will be unavailable; telemetry and control are unaffected)\n",
                    (unsigned long long) rc);
            /* Not fatal: the UART path carries telemetry and control regardless. */
        }
    }

    static T_DjiSocketHandler socketHandler = {
        .Socket = Osal_Socket,
        .Close = Osal_Close,
        .Bind = Osal_Bind,
        .UdpSendData = Osal_UdpSendData,
        .UdpRecvData = Osal_UdpRecvData,
        .TcpListen = Osal_TcpListen,
        .TcpAccept = Osal_TcpAccept,
        .TcpConnect = Osal_TcpConnect,
        .TcpSendData = Osal_TcpSendData,
        .TcpRecvData = Osal_TcpRecvData,
    };
    rc = DjiPlatform_RegSocketHandler(&socketHandler);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        return rc;
    }

    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}

/* ------------------------------------------------------------------------ */
/* User info / core init                                                    */
/* ------------------------------------------------------------------------ */

static int PsdkWrapper_FillUserInfoFromEnv(T_DjiUserInfo *info)
{
    const char *appName = getenv("PSDK_APP_NAME");
    const char *appId = getenv("PSDK_APP_ID");
    const char *appKey = getenv("PSDK_APP_KEY");
    const char *appLicense = getenv("PSDK_APP_LICENSE");
    const char *devAccount = getenv("PSDK_DEV_ACCOUNT");
    const char *baudRate = getenv("PSDK_BAUD_RATE");

    if (!appName || !appId || !appKey || !appLicense || !devAccount ||
        !appName[0] || !appId[0] || !appKey[0] || !appLicense[0] || !devAccount[0]) {
        fprintf(stderr, "[psdk_wrapper] Missing DJI developer app credentials. Set "
                        "PSDK_APP_NAME, PSDK_APP_ID, PSDK_APP_KEY, PSDK_APP_LICENSE and "
                        "PSDK_DEV_ACCOUNT (from https://developer.dji.com/user/apps).\n");
        return -1;
    }

    memset(info, 0, sizeof(*info));
    strncpy(info->appName, appName, sizeof(info->appName) - 1);
    strncpy(info->appId, appId, sizeof(info->appId) - 1);
    strncpy(info->appKey, appKey, sizeof(info->appKey) - 1);
    strncpy(info->appLicense, appLicense, sizeof(info->appLicense) - 1);
    strncpy(info->developerAccount, devAccount, sizeof(info->developerAccount) - 1);
    strncpy(info->baudRate, (baudRate && baudRate[0]) ? baudRate : "460800", sizeof(info->baudRate) - 1);

    return 0;
}

static void PsdkWrapper_ConfigureJoystickMode(void)
{
    /* Mirrors the MSDK bridge's control-mode config (cfg/dji_interface.yaml):
     * roll/pitch and vertical in velocity control, yaw in angular-rate control. */
    T_DjiFlightControllerJoystickMode mode = {
        .horizontalControlMode = DJI_FLIGHT_CONTROLLER_HORIZONTAL_VELOCITY_CONTROL_MODE,
        .verticalControlMode = DJI_FLIGHT_CONTROLLER_VERTICAL_VELOCITY_CONTROL_MODE,
        .yawControlMode = DJI_FLIGHT_CONTROLLER_YAW_ANGLE_RATE_CONTROL_MODE,
        .horizontalCoordinate = DJI_FLIGHT_CONTROLLER_HORIZONTAL_GROUND_COORDINATE,
        .stableControlMode = DJI_FLIGHT_CONTROLLER_STABLE_CONTROL_MODE_ENABLE,
    };
    DjiFlightController_SetJoystickMode(mode);
}

/* Push notification from the flight controller whenever joystick authority moves.
 * Registered in psdk_connect(). Two reasons to care:
 *   1. Observability - previously nothing on our side noticed the aircraft taking
 *      control back, so the bridge's idea of who was flying could be silently wrong.
 *   2. The ROS layer re-acquires authority on the next setpoint, and it needs to know
 *      the grant was lost to do that.
 * Runs on a PSDK thread: record and return, no blocking work here. */
static T_DjiReturnCode PsdkWrapper_AuthorityEventCallback(
    T_DjiFlightControllerJoystickCtrlAuthorityEventInfo eventData)
{
    s_lastAuthorityEvent = (int) eventData.joystickCtrlAuthoritySwitchEvent;
    fprintf(stderr, "[psdk_wrapper] joystick authority changed: owner=%d reason=%d\n",
            (int) eventData.curJoystickCtrlAuthority,
            (int) eventData.joystickCtrlAuthoritySwitchEvent);
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}

static void PsdkWrapper_SubscribeTelemetry(void)
{
    /* Real callbacks, not NULL - see the comment on the telemetry cache above.
     * Return codes checked and logged since we now know silent failures here are
     * exactly the kind of thing worth catching early. */
    T_DjiReturnCode rc;

    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_QUATERNION,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, QuaternionCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe QUATERNION failed: 0x%08llX\n", (unsigned long long) rc);
    }

    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_VELOCITY,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, VelocityCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe VELOCITY failed: 0x%08llX\n", (unsigned long long) rc);
    }

    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_POSITION_FUSED,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, PositionFusedCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe POSITION_FUSED failed: 0x%08llX\n", (unsigned long long) rc);
    }

    /* Not HEIGHT_RELATIVE - that topic returns NOT_FOUND (0x100) on this aircraft.
     * HEIGHT_FUSION is the same underlying data (ultrasonic/VO fused height above
     * ground, per the SDK header's own doc comments - the two topics are near-
     * duplicates) and this one is actually available here. */
    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_HEIGHT_FUSION,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, HeightFusionCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe HEIGHT_FUSION failed: 0x%08llX\n", (unsigned long long) rc);
    }

    /* Not BATTERY_INFO (the multi-battery aggregate, for dual/quad-battery aircraft
     * like the M300/M350) - that also returns NOT_FOUND here. Mavic 3E has a single
     * battery, so BATTERY_SINGLE_INFO_INDEX1 is the topic that's actually populated. */
    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_BATTERY_SINGLE_INFO_INDEX1,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_1_HZ, BatteryInfoCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe BATTERY_SINGLE_INFO_INDEX1 failed: 0x%08llX\n", (unsigned long long) rc);
    }

    /* Who currently holds flight-control authority. Not optional instrumentation: without
     * it nothing could tell an ignored setpoint from an executed one, because
     * DjiFlightController_ExecuteJoystickAction returns SUCCESS whether or not PSDK
     * actually holds authority - the aircraft just discards the command. */
    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_CONTROL_DEVICE,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, ControlDeviceCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe CONTROL_DEVICE failed: 0x%08llX\n", (unsigned long long) rc);
    }

    /* The pilot's own stick positions, plus RC link flags. Pairs with CONTROL_DEVICE and
     * with the joystick-command echo: together they answer "who is actually flying this"
     * during a handover, rather than leaving it to be inferred. */
    rc = DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_RC_WITH_FLAG_DATA,
                                           DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, RcWithFlagCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] subscribe RC_WITH_FLAG_DATA failed: 0x%08llX\n", (unsigned long long) rc);
    }
}

/* ------------------------------------------------------------------------ */
/* Exported C ABI                                                           */
/* ------------------------------------------------------------------------ */

int psdk_connect(void)
{
    T_DjiUserInfo userInfo;
    T_DjiReturnCode rc;

    if (s_connected) {
        return 0;
    }

    if (!s_platformRegistered) {
        rc = PsdkWrapper_RegisterPlatform();
        if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
            fprintf(stderr, "[psdk_wrapper] platform registration failed: 0x%08llX\n",
                    (unsigned long long) rc);
            return -1;
        }
        s_platformRegistered = true;
    }

    if (PsdkWrapper_FillUserInfoFromEnv(&userInfo) != 0) {
        return -1;
    }

    /* Blocks (2-4s typical) until it can confirm the aircraft/adapter over the wire. */
    rc = DjiCore_Init(&userInfo);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiCore_Init failed: 0x%08llX (check UART wiring, "
                        "baud rate and app credentials)\n", (unsigned long long) rc);
        return -1;
    }

    /* DJI_MOUNT_POSITION_TYPE_PAYLOAD_PORT (SkyPort-style gimbal/camera mounts) is not
     * the only legitimate connection type - E-Port reports as
     * DJI_MOUNT_POSITION_TYPE_EXTENSION_PORT (2), which is DJI's own designation for a
     * general-purpose companion-computer port and is exactly what's expected here. Only
     * UNKNOWN (0) is an actual red flag - it means the SDK doesn't recognize the link at all. */
    T_DjiAircraftInfoBaseInfo baseInfo;
    if (DjiAircraftInfo_GetBaseInfo(&baseInfo) == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        if (baseInfo.mountPositionType == DJI_MOUNT_POSITION_TYPE_UNKNOWN) {
            fprintf(stderr, "[psdk_wrapper] warning: mount position type is UNKNOWN - the SDK "
                            "does not recognize this as a valid PSDK connection.\n");
        }
    }

    rc = DjiFlightController_Init((T_DjiFlightControllerRidInfo){0});
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiFlightController_Init failed: 0x%08llX\n",
                (unsigned long long) rc);
        return -1;
    }
    PsdkWrapper_ConfigureJoystickMode();

    /* Not fatal if it fails: losing the notification costs observability and makes
     * re-acquisition purely reactive, but the link and control still work. */
    rc = DjiFlightController_RegJoystickCtrlAuthorityEventCallback(
        PsdkWrapper_AuthorityEventCallback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] RegJoystickCtrlAuthorityEventCallback failed: "
                        "0x%08llX (authority changes will go unreported)\n",
                (unsigned long long) rc);
    }

    rc = DjiFcSubscription_Init();
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiFcSubscription_Init failed: 0x%08llX\n",
                (unsigned long long) rc);
        return -1;
    }
    PsdkWrapper_SubscribeTelemetry();

    rc = DjiCore_ApplicationStart();
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiCore_ApplicationStart failed: 0x%08llX\n",
                (unsigned long long) rc);
        return -1;
    }

    s_connected = true;
    fprintf(stderr, "[psdk_wrapper] connected to aircraft over PSDK\n");
    return 0;
}

int psdk_arm(void)
{
    if (!s_connected) {
        return -1;
    }
    return (DjiFlightController_ObtainJoystickCtrlAuthority() == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
}

int psdk_takeoff(void)
{
    if (!s_connected) {
        return -1;
    }
    return (DjiFlightController_StartTakeoff() == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
}

int psdk_land(void)
{
    if (!s_connected) {
        return -1;
    }
    return (DjiFlightController_StartLanding() == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
}

/* Minimal flat-JSON float lookup, e.g. {"vx": 1.0, "vy": 0.0, "vz": 0.0, "yaw": 0.0}.
 * Avoids pulling in a JSON library for the handful of numeric fields we need. */
static bool JsonGetDouble(const char *json, const char *key, double *out)
{
    char pattern[64];
    snprintf(pattern, sizeof(pattern), "\"%s\"", key);
    const char *p = strstr(json, pattern);
    if (!p) {
        return false;
    }
    p = strchr(p + strlen(pattern), ':');
    if (!p) {
        return false;
    }
    p++;
    char *end = NULL;
    double val = strtod(p, &end);
    if (end == p) {
        return false;
    }
    *out = val;
    return true;
}

int psdk_setpoint(const char *setpointJson)
{
    if (!s_connected || !setpointJson) {
        return -1;
    }

    double vx = 0.0, vy = 0.0, vz = 0.0, yaw = 0.0;
    JsonGetDouble(setpointJson, "vx", &vx);
    JsonGetDouble(setpointJson, "vy", &vy);
    JsonGetDouble(setpointJson, "vz", &vz);
    JsonGetDouble(setpointJson, "yaw", &yaw);

    T_DjiFlightControllerJoystickCommand cmd = {
        .x = (dji_f32_t) vx,
        .y = (dji_f32_t) vy,
        .z = (dji_f32_t) vz,
        .yaw = (dji_f32_t) yaw,
    };
    return (DjiFlightController_ExecuteJoystickAction(cmd) == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
}

/* Reports who holds flight-control authority, so the ROS layer can tell an ignored
 * setpoint from an executed one.
 *
 * On the Mavic 3E, T_DjiFcSubscriptionControlDevice's union resolves to the
 * "other aircrafts" branch - controlAuthority + controlAuthorityChangeReason - NOT the
 * M300/M350 controlMode/deviceStatus/flightStatus bitfield branch. Reading the wrong
 * branch would silently misinterpret the same bytes, so this is deliberate.
 *
 * authority: 0=RC, 1=MSDK, 4=PSDK, 5=Dock (E_DJIFcSubscriptionControlAuthority)
 * changeReason: E_DJIFcSubscriptionAuthorityChangeReason
 * lastEvent: most recent push event, -1 if none seen yet
 * Returns 0 on success, -1 if not connected or no report has arrived yet. */
int psdk_get_control_authority(int *authority, int *changeReason, int *lastEvent)
{
    if (!s_connected) {
        return -1;
    }

    pthread_mutex_lock(&s_telemetryLock);
    bool have = s_haveControlDevice;
    int auth = (int) s_controlDevice.controlAuthority;
    int reason = (int) s_controlDevice.controlAuthorityChangeReason;
    pthread_mutex_unlock(&s_telemetryLock);

    if (lastEvent) {
        *lastEvent = s_lastAuthorityEvent;
    }
    if (!have) {
        return -1;
    }
    if (authority) {
        *authority = auth;
    }
    if (changeReason) {
        *changeReason = reason;
    }
    return 0;
}

/* The RC's own stick positions and link flags.
 *
 * Sticks are normalised -0.999 .. 0.999 with 0.0 centred (per T_DjiFcSubscriptionRCWithFlagData).
 * Flags are packed into one int so the ABI stays a flat scalar list:
 *   bit0 logicConnected, bit1 skyConnected, bit2 groundConnected, bit3 appConnected.
 * Returns 0 on success, -1 if not connected or nothing has arrived yet. */
int psdk_get_rc(float *pitch, float *roll, float *yaw, float *throttle, int *flags)
{
    if (!s_connected) {
        return -1;
    }

    pthread_mutex_lock(&s_telemetryLock);
    bool have = s_haveRcWithFlag;
    T_DjiFcSubscriptionRCWithFlagData rcData = s_rcWithFlag;
    pthread_mutex_unlock(&s_telemetryLock);

    if (!have) {
        return -1;
    }
    if (pitch) {
        *pitch = (float) rcData.pitch;
    }
    if (roll) {
        *roll = (float) rcData.roll;
    }
    if (yaw) {
        *yaw = (float) rcData.yaw;
    }
    if (throttle) {
        *throttle = (float) rcData.throttle;
    }
    if (flags) {
        *flags = (rcData.flag.logicConnected ? 1 : 0)
               | (rcData.flag.skyConnected ? 2 : 0)
               | (rcData.flag.groundConnected ? 4 : 0)
               | (rcData.flag.appConnected ? 8 : 0);
    }
    return 0;
}

int psdk_command(const char *name, const char *payloadJson)
{
    (void) payloadJson;
    if (!s_connected || !name) {
        return -1;
    }

    if (strcmp(name, "arm") == 0) {
        return psdk_arm();
    } else if (strcmp(name, "takeoff") == 0) {
        return psdk_takeoff();
    } else if (strcmp(name, "land") == 0) {
        return psdk_land();
    } else if (strcmp(name, "manual") == 0) {
        return (DjiFlightController_ReleaseJoystickCtrlAuthority() == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
    } else if (strcmp(name, "hold") == 0) {
        T_DjiFlightControllerJoystickCommand hover = {0};
        return (DjiFlightController_ExecuteJoystickAction(hover) == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
    }

    fprintf(stderr, "[psdk_wrapper] psdk_command: unhandled command '%s'\n", name);
    return -1;
}

int psdk_get_telemetry(double *latDeg, double *lonDeg, double *altM,
                        float *vx, float *vy, float *vz,
                        float *qw, float *qx, float *qy, float *qz,
                        float *heightRelM, int *batteryPercent)
{
    if (!s_connected) {
        return -1;
    }

    /* Read from the callback-populated cache - see the comment above it for why
     * this doesn't call DjiFcSubscription_GetLatestValueOfTopic() (it segfaults
     * inside DJI's own library on this PSDK build; confirmed via gdb). Returns -1
     * until at least one callback has landed for every topic, rather than
     * silently handing back zeros that look like valid-but-wrong telemetry. */
    pthread_mutex_lock(&s_telemetryLock);
    bool haveAll = s_haveQuaternion && s_haveVelocity && s_havePositionFused &&
                   s_haveHeightFusion && s_haveBatteryInfo;
    if (!haveAll) {
        pthread_mutex_unlock(&s_telemetryLock);
        return -1;
    }

    if (latDeg) *latDeg = s_positionFused.latitude * 180.0 / M_PI;
    if (lonDeg) *lonDeg = s_positionFused.longitude * 180.0 / M_PI;
    if (altM) *altM = s_positionFused.altitude;
    if (vx) *vx = s_velocity.data.x;
    if (vy) *vy = s_velocity.data.y;
    if (vz) *vz = s_velocity.data.z;
    if (qw) *qw = s_quaternion.q0;
    if (qx) *qx = s_quaternion.q1;
    if (qy) *qy = s_quaternion.q2;
    if (qz) *qz = s_quaternion.q3;
    if (heightRelM) *heightRelM = s_heightFusion;
    if (batteryPercent) *batteryPercent = s_batteryInfo.batteryCapacityPercent;
    pthread_mutex_unlock(&s_telemetryLock);

    return 0;
}

/* ------------------------------------------------------------------------ */
/* Liveview (H.264 video) - exported C ABI                                  */
/* ------------------------------------------------------------------------ */

/* position/source are ints so the ROS layer can select the camera without this
 * header's enums leaking into Python. Defaults suit the Mavic 3E:
 *   position 1 = DJI_LIVEVIEW_CAMERA_POSITION_NO_1 (the payload port)
 *   source   1 = DJI_LIVEVIEW_CAMERA_SOURCE_M3E_VIS (visible-light camera)
 * If NO_1 returns NONSUPPORT, try position 7 (DJI_LIVEVIEW_CAMERA_POSITION_FPV). */
int psdk_liveview_start(int position, int source, int bitrateKbps)
{
    T_DjiReturnCode rc;

    if (!s_connected) {
        return -1;
    }
    if (s_liveviewRunning) {
        return 0;
    }

    rc = DjiLiveview_Init();  /* must follow DjiCore_Init, per dji_liveview.h */
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiLiveview_Init failed: 0x%08llX (is the network "
                        "handler registered and the E-Port RNDIS link up?)\n",
                (unsigned long long) rc);
        return -1;
    }

    s_liveviewPosition = (E_DjiLiveViewCameraPosition) position;
    s_liveviewSource = (E_DjiLiveViewCameraSource) source;

    pthread_mutex_lock(&s_liveviewLock);
    s_liveviewHead = s_liveviewTail = s_liveviewUsed = 0;
    s_liveviewBytesIn = s_liveviewDropped = 0;
    pthread_mutex_unlock(&s_liveviewLock);

    rc = DjiLiveview_StartH264Stream(s_liveviewPosition, s_liveviewSource,
                                      PsdkWrapper_LiveviewH264Callback);
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiLiveview_StartH264Stream(pos=%d, src=%d) failed: "
                        "0x%08llX%s\n", position, source, (unsigned long long) rc,
                rc == DJI_ERROR_SYSTEM_MODULE_CODE_NONSUPPORT
                    ? " (NONSUPPORT - try position 7, the FPV camera)" : "");
        DjiLiveview_Deinit();
        return -1;
    }

    s_liveviewRunning = true;

    /* Encoding strategy only after the stream is up - the header is explicit about the
     * order. Bitrate is capped deliberately: this shares the wifi with VITRO's control
     * loop, so DJI's suggested 12-20 Mbps would starve it. Failure here is not fatal;
     * the stream simply runs at the aircraft's default rate. */
    if (bitrateKbps > 0) {
        T_DjiLiveviewCodecParamItem codecParam = {
            .bitrate_kbps = (int16_t) bitrateKbps,
        };
        rc = DjiLiveview_SetEncodingStrategy(s_liveviewPosition, s_liveviewSource, &codecParam);
        if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
            fprintf(stderr, "[psdk_wrapper] SetEncodingStrategy(%d kbps) failed: 0x%08llX "
                            "- continuing at the aircraft default rate\n",
                    bitrateKbps, (unsigned long long) rc);
        }
    }

    fprintf(stderr, "[psdk_wrapper] liveview started (position=%d source=%d bitrate=%d kbps)\n",
            position, source, bitrateKbps);
    return 0;
}

int psdk_liveview_stop(void)
{
    if (!s_liveviewRunning) {
        return 0;
    }
    DjiLiveview_StopH264Stream(s_liveviewPosition, s_liveviewSource);
    DjiLiveview_Deinit();
    s_liveviewRunning = false;
    return 0;
}

/* Drains up to bufLen bytes from the ring. Returns 0 with *outLen == 0 when idle,
 * which is the normal case between frames - not an error. */
int psdk_liveview_read(uint8_t *buf, uint32_t bufLen, uint32_t *outLen)
{
    if (buf == NULL || outLen == NULL || bufLen == 0) {
        return -1;
    }
    *outLen = 0;
    if (!s_liveviewRunning) {
        return -1;
    }

    pthread_mutex_lock(&s_liveviewLock);
    uint32_t n = s_liveviewUsed < bufLen ? s_liveviewUsed : bufLen;
    if (n > 0) {
        uint32_t firstChunk = LIVEVIEW_RING_BYTES - s_liveviewTail;
        if (firstChunk > n) {
            firstChunk = n;
        }
        memcpy(buf, &s_liveviewRing[s_liveviewTail], firstChunk);
        if (n > firstChunk) {
            memcpy(buf + firstChunk, &s_liveviewRing[0], n - firstChunk);
        }
        s_liveviewTail = (s_liveviewTail + n) % LIVEVIEW_RING_BYTES;
        s_liveviewUsed -= n;
    }
    pthread_mutex_unlock(&s_liveviewLock);

    *outLen = n;
    return 0;
}

/* Ask the aircraft for an IDR frame. A decoder that joined mid-stream, or one that
 * lost bytes to a ring overflow, cannot produce a picture until the next keyframe. */
int psdk_liveview_request_keyframe(void)
{
    if (!s_liveviewRunning) {
        return -1;
    }
    return (DjiLiveview_RequestIntraframeFrameData(s_liveviewPosition, s_liveviewSource)
            == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) ? 0 : -1;
}

/* Counters for the ROS layer to log; both are cumulative since liveview_start. */
int psdk_liveview_stats(unsigned long long *bytesIn, unsigned long long *dropped)
{
    pthread_mutex_lock(&s_liveviewLock);
    if (bytesIn) *bytesIn = s_liveviewBytesIn;
    if (dropped) *dropped = s_liveviewDropped;
    pthread_mutex_unlock(&s_liveviewLock);
    return 0;
}

int psdk_disconnect(void)
{
    if (!s_connected) {
        return 0;
    }
    psdk_liveview_stop();
    DjiFcSubscription_DeInit();
    DjiFlightController_DeInit();
    DjiCore_DeInit();
    s_connected = false;

    pthread_mutex_lock(&s_telemetryLock);
    s_haveQuaternion = false;
    s_haveVelocity = false;
    s_havePositionFused = false;
    s_haveHeightFusion = false;
    s_haveBatteryInfo = false;
    pthread_mutex_unlock(&s_telemetryLock);

    return 0;
}
