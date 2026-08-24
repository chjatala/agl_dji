/**
 ********************************************************************
 * @file    hal_network.c
 * @brief   T_DjiHalNetworkHandler implementation for Linux.
 *
 * Backs PSDK's high-speed data channel, which on the Mavic 3E's E-Port is a USB
 * RNDIS link - not the UART. PSDK chooses the address and hands it to NetworkInit;
 * we apply it to the interface. Nothing here hard-codes an IP.
 *
 * NOT registered by default, and NOT required for liveview. Registering this
 * handler makes DjiCore_Init fail with 0xE1 on our aircraft (see the comment at
 * the registration site in psdk_wrapper.c), and dji_liveview.h documents no
 * dependency on it - only DjiHighSpeedDataChannel_SetBandwidthProportion and
 * DjiPayloadCamera_GetVideoStreamRemoteAddress do, both of which are about the
 * payload sending video out rather than receiving the aircraft's camera. An
 * earlier version of this comment claimed liveview needed it; that was an
 * inference, and it is unsupported by DJI's headers.
 *
 * Not DJI sample code - written for this project.
 *********************************************************************
 */

#include "hal_network.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <net/if.h>

/* The aircraft's RNDIS interface cannot be identified by name: DJI randomises the
 * adapter MAC on every power-up and udev derives enx<MAC> from it, so the name is
 * different each boot (observed: enx82a27fbcd5ab, enxca044cbb02cd, enx2e38f317e967,
 * enx562f8c88d9d9, enx1e7208884c25). The bound driver is stable, so match on that.
 *
 * PSDK_NET_DEV overrides, for a rig where something else also binds rndis_host.
 *
 * Returns 0 and fills `name` on success, -1 if no such interface exists. */
static int HalNetwork_FindRndisInterface(char *name, size_t nameLen)
{
    const char *override = getenv("PSDK_NET_DEV");
    if (override && override[0]) {
        strncpy(name, override, nameLen - 1);
        name[nameLen - 1] = '\0';
        return 0;
    }

    DIR *d = opendir("/sys/class/net");
    if (!d) {
        return -1;
    }

    int found = -1;
    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        if (ent->d_name[0] == '.') {
            continue;
        }

        char linkPath[PATH_MAX];
        char resolved[PATH_MAX];
        snprintf(linkPath, sizeof(linkPath), "/sys/class/net/%s/device/driver", ent->d_name);
        ssize_t n = readlink(linkPath, resolved, sizeof(resolved) - 1);
        if (n < 0) {
            continue;
        }
        resolved[n] = '\0';

        const char *drv = strrchr(resolved, '/');
        drv = drv ? drv + 1 : resolved;
        if (strcmp(drv, "rndis_host") == 0) {
            strncpy(name, ent->d_name, nameLen - 1);
            name[nameLen - 1] = '\0';
            found = 0;
            break;
        }
    }

    closedir(d);
    return found;
}

T_DjiReturnCode HalNetwork_Init(const char *ipAddr, const char *netMask, T_DjiNetworkHandle *networkHandle)
{
    if (ipAddr == NULL || netMask == NULL) {
        return DJI_ERROR_SYSTEM_MODULE_CODE_INVALID_PARAMETER;
    }

    char ifname[IF_NAMESIZE];
    if (HalNetwork_FindRndisInterface(ifname, sizeof(ifname)) != 0) {
        fprintf(stderr, "[hal_network] no rndis_host interface found. The aircraft's E-Port "
                        "RNDIS link (USB 2ca3:001f) is not enumerated - is the aircraft powered "
                        "with the payload attached? Note it cannot be hot-plugged.\n");
        return DJI_ERROR_SYSTEM_MODULE_CODE_SYSTEM_ERROR;
    }

    /* ip(8) rather than raw ioctls: it is already present in the image, and this runs
     * once at init, not on any hot path. Requires NET_ADMIN in the container. */
    char cmd[256];
    int rc;

    snprintf(cmd, sizeof(cmd), "ip addr flush dev %s 2>/dev/null", ifname);
    rc = system(cmd);
    (void) rc;  /* flushing an already-empty interface is not an error */

    snprintf(cmd, sizeof(cmd), "ip addr add %s/%s dev %s 2>&1", ipAddr, netMask, ifname);
    if (system(cmd) != 0) {
        fprintf(stderr, "[hal_network] failed to set %s/%s on %s - missing NET_ADMIN?\n",
                ipAddr, netMask, ifname);
        return DJI_ERROR_SYSTEM_MODULE_CODE_SYSTEM_ERROR;
    }

    snprintf(cmd, sizeof(cmd), "ip link set dev %s up 2>&1", ifname);
    if (system(cmd) != 0) {
        fprintf(stderr, "[hal_network] failed to bring %s up - missing NET_ADMIN?\n", ifname);
        return DJI_ERROR_SYSTEM_MODULE_CODE_SYSTEM_ERROR;
    }

    fprintf(stderr, "[hal_network] %s configured %s/%s for the PSDK high-speed channel\n",
            ifname, ipAddr, netMask);

    if (networkHandle) {
        *networkHandle = NULL;  /* nothing to track; the interface is addressed by name */
    }
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}

T_DjiReturnCode HalNetwork_DeInit(T_DjiNetworkHandle networkHandle)
{
    (void) networkHandle;
    /* Deliberately leaves the interface configured: the aircraft link outlives a bridge
     * restart, and tearing the address down here would make a reconnect depend on an
     * aircraft power cycle. The RNDIS device disappears on aircraft power-off anyway. */
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}

T_DjiReturnCode HalNetwork_GetDeviceInfo(T_DjiHalNetworkDeviceInfo *deviceInfo)
{
    if (deviceInfo == NULL) {
        return DJI_ERROR_SYSTEM_MODULE_CODE_INVALID_PARAMETER;
    }
    deviceInfo->usbNetAdapter.vid = DJI_USB_NET_ADAPTER_VID;
    deviceInfo->usbNetAdapter.pid = DJI_USB_NET_ADAPTER_PID;
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}
