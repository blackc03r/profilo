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
#ifndef KCM_KERNEL_H
#define KCM_KERNEL_H
#define _KCM_KERNEL_H
#define _KCM_KERNEL_H_
#define _UAPI_KCM_KERNEL_H
#define _UAPI_KCM_KERNEL_H_
#define _UAPIKCM_KERNEL_H
#define _UAPIKCM_KERNEL_H_
#define KCM_KERNEL_H_
struct kcm_attach {
  int fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int bpf_fd;
};
struct kcm_unattach {
  int fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kcm_clone {
  int fd;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCKCMATTACH (SIOCPROTOPRIVATE + 0)
#define SIOCKCMUNATTACH (SIOCPROTOPRIVATE + 1)
#define SIOCKCMCLONE (SIOCPROTOPRIVATE + 2)
#define KCMPROTO_CONNECTED 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KCM_RECV_DISABLE 1
#endif
