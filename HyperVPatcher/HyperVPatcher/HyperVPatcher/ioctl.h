#pragma once

#include "Globals.h"
#include "invertedioctl.h"

#define IOCTL_INIT CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_PATCH_CHANNEL CTL_CODE(FILE_DEVICE_UNKNOWN, 0x2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_INVERTED_NEXT_INPUT CTL_CODE(FILE_DEVICE_UNKNOWN, 0x3, METHOD_BUFFERED, FILE_ANY_ACCESS)

extern const UNICODE_STRING MY_SDDL_DEVOBJ_SYS_ALL_ADM_ALL;

VOID IoctlHandler(WDFQUEUE Queue, WDFREQUEST Request, size_t OutputBufferLength, size_t InputBufferLength, ULONG IoControlCode);