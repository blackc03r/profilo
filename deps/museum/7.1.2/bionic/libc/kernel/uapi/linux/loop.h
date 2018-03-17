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
#ifndef _UAPI_LINUX_LOOP_H
#define _UAPI_LINUX_LOOP_H
#define UAPI_LINUX_LOOP_H
#define UAPI_LINUX_LOOP_H_
#define _LINUX_LOOP_H
#define _LINUX_LOOP_H_
#define _UAPI_LINUX_LOOP_H_
#define LO_NAME_SIZE 64
#define LO_KEY_SIZE 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  LO_FLAGS_READ_ONLY = 1,
  LO_FLAGS_AUTOCLEAR = 4,
  LO_FLAGS_PARTSCAN = 8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LO_FLAGS_DIRECT_IO = 16,
};
#include <museum/7.1.2/bionic/libc/asm/posix_types.h>
#include <museum/7.1.2/bionic/libc/linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct loop_info {
  int lo_number;
  __kernel_old_dev_t lo_device;
  unsigned long lo_inode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __kernel_old_dev_t lo_rdevice;
  int lo_offset;
  int lo_encrypt_type;
  int lo_encrypt_key_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int lo_flags;
  char lo_name[LO_NAME_SIZE];
  unsigned char lo_encrypt_key[LO_KEY_SIZE];
  unsigned long lo_init[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  char reserved[4];
};
struct loop_info64 {
  __u64 lo_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 lo_inode;
  __u64 lo_rdevice;
  __u64 lo_offset;
  __u64 lo_sizelimit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 lo_number;
  __u32 lo_encrypt_type;
  __u32 lo_encrypt_key_size;
  __u32 lo_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 lo_file_name[LO_NAME_SIZE];
  __u8 lo_crypt_name[LO_NAME_SIZE];
  __u8 lo_encrypt_key[LO_KEY_SIZE];
  __u64 lo_init[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LO_CRYPT_NONE 0
#define LO_CRYPT_XOR 1
#define LO_CRYPT_DES 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LO_CRYPT_FISH2 3
#define LO_CRYPT_BLOW 4
#define LO_CRYPT_CAST128 5
#define LO_CRYPT_IDEA 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LO_CRYPT_DUMMY 9
#define LO_CRYPT_SKIPJACK 10
#define LO_CRYPT_CRYPTOAPI 18
#define MAX_LO_CRYPT 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOOP_SET_FD 0x4C00
#define LOOP_CLR_FD 0x4C01
#define LOOP_SET_STATUS 0x4C02
#define LOOP_GET_STATUS 0x4C03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOOP_SET_STATUS64 0x4C04
#define LOOP_GET_STATUS64 0x4C05
#define LOOP_CHANGE_FD 0x4C06
#define LOOP_SET_CAPACITY 0x4C07
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOOP_SET_DIRECT_IO 0x4C08
#define LOOP_CTL_ADD 0x4C80
#define LOOP_CTL_REMOVE 0x4C81
#define LOOP_CTL_GET_FREE 0x4C82
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
