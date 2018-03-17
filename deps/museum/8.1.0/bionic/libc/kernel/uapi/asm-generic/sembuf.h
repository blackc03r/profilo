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
#ifndef __ASM_GENERIC_SEMBUF_H
#define __ASM_GENERIC_SEMBUF_H
#define _ASM_GENERIC_SEMBUF_H
#define _ASM_GENERIC_SEMBUF_H_
#define _UAPI_ASM_GENERIC_SEMBUF_H
#define _UAPI_ASM_GENERIC_SEMBUF_H_
#define NDK_ANDROID_SUPPORT__ASM_GENERIC_SEMBUF_H
#define NDK_ANDROID_SUPPORT__ASM_GENERIC_SEMBUF_H_
#define NDK_ANDROID_SUPPORT_UAPI__ASM_GENERIC_SEMBUF_H
#define NDK_ANDROID_SUPPORT_UAPI__ASM_GENERIC_SEMBUF_H_
#define _UAPI__ASM_GENERIC_SEMBUF_H
#define _UAPI__ASM_GENERIC_SEMBUF_H_
#define __ASM_GENERIC_SEMBUF_H_
#include <museum/8.1.0/bionic/libc/asm/bitsperlong.h>
struct semid64_ds {
  struct ipc64_perm sem_perm;
  __kernel_time_t sem_otime;
#if __BITS_PER_LONG != 64
  unsigned long __unused1;
#endif
  __kernel_time_t sem_ctime;
#if __BITS_PER_LONG != 64
  unsigned long __unused2;
#endif
  unsigned long sem_nsems;
  unsigned long __unused3;
  unsigned long __unused4;
};
#endif
