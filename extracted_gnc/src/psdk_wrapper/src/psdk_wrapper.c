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

#include "osal/osal.h"
#include "osal/osal_fs.h"
#include "osal/osal_socket.h"
#include "hal/hal_uart.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

static bool s_platformRegistered = false;
static bool s_connected = false;

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

static void PsdkWrapper_SubscribeTelemetry(void)
{
    DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_QUATERNION, DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, NULL);
    DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_VELOCITY, DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, NULL);
    DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_POSITION_FUSED, DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, NULL);
    DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_HEIGHT_RELATIVE, DJI_DATA_SUBSCRIPTION_TOPIC_5_HZ, NULL);
    DjiFcSubscription_SubscribeTopic(DJI_FC_SUBSCRIPTION_TOPIC_BATTERY_INFO, DJI_DATA_SUBSCRIPTION_TOPIC_1_HZ, NULL);
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

    T_DjiAircraftInfoBaseInfo baseInfo;
    if (DjiAircraftInfo_GetBaseInfo(&baseInfo) == DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        if (baseInfo.mountPositionType != DJI_MOUNT_POSITION_TYPE_PAYLOAD_PORT) {
            fprintf(stderr, "[psdk_wrapper] warning: mount position type is %d, not a payload "
                            "port - is this aircraft/adapter combination PSDK-capable?\n",
                    (int) baseInfo.mountPositionType);
        }
    }

    rc = DjiFlightController_Init((T_DjiFlightControllerRidInfo){0});
    if (rc != DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS) {
        fprintf(stderr, "[psdk_wrapper] DjiFlightController_Init failed: 0x%08llX\n",
                (unsigned long long) rc);
        return -1;
    }
    PsdkWrapper_ConfigureJoystickMode();

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

    T_DjiFcSubscriptionPositionFused pos = {0};
    T_DjiFcSubscriptionVelocity vel = {0};
    T_DjiFcSubscriptionQuaternion quat = {0};
    T_DjiFcSubscriptionHeightRelative heightRel = 0;
    T_DjiFcSubscriptionWholeBatteryInfo battery = {0};

    DjiFcSubscription_GetLatestValueOfTopic(DJI_FC_SUBSCRIPTION_TOPIC_POSITION_FUSED,
                                             (uint8_t *) &pos, sizeof(pos), NULL);
    DjiFcSubscription_GetLatestValueOfTopic(DJI_FC_SUBSCRIPTION_TOPIC_VELOCITY,
                                             (uint8_t *) &vel, sizeof(vel), NULL);
    DjiFcSubscription_GetLatestValueOfTopic(DJI_FC_SUBSCRIPTION_TOPIC_QUATERNION,
                                             (uint8_t *) &quat, sizeof(quat), NULL);
    DjiFcSubscription_GetLatestValueOfTopic(DJI_FC_SUBSCRIPTION_TOPIC_HEIGHT_RELATIVE,
                                             (uint8_t *) &heightRel, sizeof(heightRel), NULL);
    DjiFcSubscription_GetLatestValueOfTopic(DJI_FC_SUBSCRIPTION_TOPIC_BATTERY_INFO,
                                             (uint8_t *) &battery, sizeof(battery), NULL);

    if (latDeg) *latDeg = pos.latitude * 180.0 / M_PI;
    if (lonDeg) *lonDeg = pos.longitude * 180.0 / M_PI;
    if (altM) *altM = pos.altitude;
    if (vx) *vx = vel.data.x;
    if (vy) *vy = vel.data.y;
    if (vz) *vz = vel.data.z;
    if (qw) *qw = quat.q0;
    if (qx) *qx = quat.q1;
    if (qy) *qy = quat.q2;
    if (qz) *qz = quat.q3;
    if (heightRelM) *heightRelM = heightRel;
    if (batteryPercent) *batteryPercent = battery.percentage;

    return 0;
}

int psdk_disconnect(void)
{
    if (!s_connected) {
        return 0;
    }
    DjiFcSubscription_DeInit();
    DjiFlightController_DeInit();
    DjiCore_DeInit();
    s_connected = false;
    return 0;
}
