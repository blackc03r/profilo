/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPILINUX_PCI_H
#define _UAPILINUX_PCI_H
#define UAPILINUX_PCI_H
#define UAPILINUX_PCI_H_
#define NDK_ANDROID_SUPPORT_UAPILINUX_PCI_H
#define NDK_ANDROID_SUPPORT_UAPILINUX_PCI_H_
#define LINUX_PCI_H
#define LINUX_PCI_H_
#define _UAPILINUX_PCI_H_
#include <museum/8.1.0/bionic/libc/linux/pci_regs.h>
#define PCI_DEVFN(slot,func) ((((slot) & 0x1f) << 3) | ((func) & 0x07))
#define PCI_SLOT(devfn) (((devfn) >> 3) & 0x1f)
#define PCI_FUNC(devfn) ((devfn) & 0x07)
#define PCIIOC_BASE ('P' << 24 | 'C' << 16 | 'I' << 8)
#define PCIIOC_CONTROLLER (PCIIOC_BASE | 0x00)
#define PCIIOC_MMAP_IS_IO (PCIIOC_BASE | 0x01)
#define PCIIOC_MMAP_IS_MEM (PCIIOC_BASE | 0x02)
#define PCIIOC_WRITE_COMBINE (PCIIOC_BASE | 0x03)
#endif
