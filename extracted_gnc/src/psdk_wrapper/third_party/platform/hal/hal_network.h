/**
 ********************************************************************
 * @file    hal_network.h
 * @brief   Header for "hal_network.c" - the T_DjiHalNetworkHandler implementation
 *          used by PSDK's high-speed data channel (liveview video).
 *
 * Not part of DJI's shipped platform samples; written for this project. The rest
 * of third_party/ is DJI's, under the terms in psdk_lib/LICENSE.txt.
 *********************************************************************
 */

#ifndef HAL_NETWORK_H
#define HAL_NETWORK_H

#include "stdint.h"
#include "dji_platform.h"

#ifdef __cplusplus
extern "C" {
#endif

/* USB VID/PID of the Mavic 3E's E-Port RNDIS adapter, as it enumerates on the Pi:
 *   usb 1-1.4: New USB device found, idVendor=2ca3, idProduct=001f
 *   usb 1-1.4: Manufacturer: DJI   Product: e1e
 * PSDK uses these to locate the adapter, via NetworkGetDeviceInfo. */
#define DJI_USB_NET_ADAPTER_VID   (0x2CA3)
#define DJI_USB_NET_ADAPTER_PID   (0x001F)

/* Fallback only. The real interface name is resolved at runtime because DJI
 * randomises the adapter MAC on every aircraft power-up and udev derives the
 * enx<MAC> name from it - five different names have been observed on this rig.
 * See HalNetwork_Init() and agilica/scripts/detect_network.sh. */
#define LINUX_NETWORK_DEV         "usb0"

T_DjiReturnCode HalNetwork_Init(const char *ipAddr, const char *netMask, T_DjiNetworkHandle *networkHandle);
T_DjiReturnCode HalNetwork_DeInit(T_DjiNetworkHandle networkHandle);
T_DjiReturnCode HalNetwork_GetDeviceInfo(T_DjiHalNetworkDeviceInfo *deviceInfo);

#ifdef __cplusplus
}
#endif

#endif // HAL_NETWORK_H
