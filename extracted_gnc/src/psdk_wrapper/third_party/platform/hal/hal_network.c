/**
 ********************************************************************
 * @file    hal_network.c
 * @brief   T_DjiHalNetworkHandler implementation for Linux.
 *
 * Backs PSDK's high-speed data channel, which on the Mavic 3E is an RNDIS USB link -
 * not the UART. PSDK chooses the address and hands it to NetworkInit; we apply it to the
 * interface. Nothing here hard-codes an IP. Observed in practice: PSDK asks for
 * 192.168.90.2/255.255.0.0 on the gadget's usb0.
 *
 * This is what liveview rides on, and it works - verified against the aircraft on
 * 14 Sep 2026. It requires the Pi to be a USB *device* on the aircraft's E-Port, per
 * DJI's role table for M3E/M3T; see agilica/scripts/setup_usb_gadget.sh, and the long
 * comment at the registration site in psdk_wrapper.c for how a miswired rig made this
 * look like an unfixable PSDK limitation for three weeks.
 *
 * An earlier version of this comment claimed liveview did not need the network handler
 * at all, reasoning from dji_liveview.h alone (which documents no such dependency). That
 * did not survive contact with the aircraft: without the handler, DjiLiveview_Init
 * returns 0xE0 NONSUPPORT. The header's silence describes the API, not the transport it
 * needs underneath.
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

/* Find the interface carrying PSDK's high-speed channel. Two shapes are possible and
 * both are handled, because which one applies depends on the USB roles:
 *
 *  - Pi as USB DEVICE (what DJI requires for M3E liveview): the RNDIS *gadget* creates
 *    an interface named usb0. There is no bound USB driver to match on - the interface
 *    belongs to the local UDC - so it is matched by name.
 *
 *  - Pi as USB HOST (how this rig is wired today): the peer presents RNDIS and the
 *    kernel binds rndis_host, producing an enx<MAC> name. The name is useless for
 *    matching because DJI randomises the adapter MAC on every power-up and udev derives
 *    the name from it (observed: enx82a27fbcd5ab, enxca044cbb02cd, enx2e38f317e967,
 *    enx562f8c88d9d9, enx1e7208884c25). The bound driver is stable, so match on that.
 *
 * The gadget is checked first: if both exist, the gadget is the one PSDK negotiated.
 *
 * PSDK_NET_DEV overrides either, for a rig where something else also binds rndis_host.
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

    /* Gadget side first. A bound gadget is definitive; an rndis_host interface may just
     * be some unrelated peer. */
    if (access("/sys/class/net/usb0", F_OK) == 0) {
        strncpy(name, "usb0", nameLen - 1);
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

    fprintf(stderr, "[hal_network] NetworkInit(ip=%s, mask=%s) called by PSDK\n",
            ipAddr, netMask);

    char ifname[IF_NAMESIZE];
    if (HalNetwork_FindRndisInterface(ifname, sizeof(ifname)) != 0) {
        fprintf(stderr, "[hal_network] no high-speed interface found: neither a usb0 RNDIS "
                        "gadget nor an rndis_host peer. For liveview the Pi must be a USB "
                        "*device* on the aircraft's E-Port - see "
                        "agilica/scripts/setup_usb_gadget.sh --check.\n");
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

/* Parse a hex env var like "0x2ca3"; returns `fallback` when unset or unparseable.
 * Exists so the VID/PID below can be swept from the compose file without a rebuild -
 * see the note in the header about what these values actually mean. */
static uint16_t HalNetwork_EnvHex(const char *name, uint16_t fallback)
{
    const char *v = getenv(name);
    if (v == NULL || v[0] == '\0') {
        return fallback;
    }
    char *end = NULL;
    unsigned long parsed = strtoul(v, &end, 0);
    if (end == v || parsed > 0xFFFFu) {
        fprintf(stderr, "[hal_network] ignoring unparseable %s=\"%s\"\n", name, v);
        return fallback;
    }
    return (uint16_t) parsed;
}

T_DjiReturnCode HalNetwork_GetDeviceInfo(T_DjiHalNetworkDeviceInfo *deviceInfo)
{
    if (deviceInfo == NULL) {
        return DJI_ERROR_SYSTEM_MODULE_CODE_INVALID_PARAMETER;
    }
    deviceInfo->usbNetAdapter.vid = HalNetwork_EnvHex("PSDK_NET_VID", DJI_USB_NET_ADAPTER_VID);
    deviceInfo->usbNetAdapter.pid = HalNetwork_EnvHex("PSDK_NET_PID", DJI_USB_NET_ADAPTER_PID);

    /* Logged because whether PSDK calls this at all is diagnostic: it tells you how far
     * DjiCore_Init got before a 0xE1 timeout, which is otherwise invisible. */
    fprintf(stderr, "[hal_network] GetDeviceInfo -> vid=0x%04X pid=0x%04X\n",
            deviceInfo->usbNetAdapter.vid, deviceInfo->usbNetAdapter.pid);
    return DJI_ERROR_SYSTEM_MODULE_CODE_SUCCESS;
}
