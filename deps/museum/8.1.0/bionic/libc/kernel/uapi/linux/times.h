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
#ifndef _LINUX_TIMES_H
#define _LINUX_TIMES_H
#define LINUX_TIMES_H
#define LINUX_TIMES_H_
#define NDK_ANDROID_SUPPORT_LINUX_TIMES_H
#define NDK_ANDROID_SUPPORT_LINUX_TIMES_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TIMES_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TIMES_H_
#define _UAPI_LINUX_TIMES_H
#define _UAPI_LINUX_TIMES_H_
#define _LINUX_TIMES_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
struct tms {
  __kernel_clock_t tms_utime;
  __kernel_clock_t tms_stime;
  __kernel_clock_t tms_cutime;
  __kernel_clock_t tms_cstime;
};
#endif
