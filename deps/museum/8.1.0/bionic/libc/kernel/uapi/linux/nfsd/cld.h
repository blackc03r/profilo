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
#ifndef _NFSD_CLD_H
#define _NFSD_CLD_H
#define NFSD_CLD_H
#define NFSD_CLD_H_
#define NDK_ANDROID_SUPPORT_NFSD_CLD_H
#define NDK_ANDROID_SUPPORT_NFSD_CLD_H_
#define NDK_ANDROID_SUPPORT_UAPI_NFSD_CLD_H
#define NDK_ANDROID_SUPPORT_UAPI_NFSD_CLD_H_
#define _UAPI_NFSD_CLD_H
#define _UAPI_NFSD_CLD_H_
#define _NFSD_CLD_H_
#define CLD_UPCALL_VERSION 1
#define NFS4_OPAQUE_LIMIT 1024
enum cld_command {
  Cld_Create,
  Cld_Remove,
  Cld_Check,
  Cld_GraceDone,
};
struct cld_name {
  uint16_t cn_len;
  unsigned char cn_id[NFS4_OPAQUE_LIMIT];
} __attribute__((packed));
struct cld_msg {
  uint8_t cm_vers;
  uint8_t cm_cmd;
  int16_t cm_status;
  uint32_t cm_xid;
  union {
    int64_t cm_gracetime;
    struct cld_name cm_name;
  } __attribute__((packed)) cm_u;
} __attribute__((packed));
#endif
