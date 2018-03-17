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
#ifndef XT_HMARK_H_
#define XT_HMARK_H_
#define _XT_HMARK_H_
#define _XT_HMARK_H
#define _UAPI_XT_HMARK_H_
#define _UAPI_XT_HMARK_H
#define NDK_ANDROID_SUPPORT_UAPIXT_HMARK_H_
#define NDK_ANDROID_SUPPORT_UAPIXT_HMARK_H
#define _UAPIXT_HMARK_H_
#define _UAPIXT_HMARK_H
#define XT_HMARK_H
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/netfilter.h>
enum {
  XT_HMARK_SADDR_MASK,
  XT_HMARK_DADDR_MASK,
  XT_HMARK_SPI,
  XT_HMARK_SPI_MASK,
  XT_HMARK_SPORT,
  XT_HMARK_DPORT,
  XT_HMARK_SPORT_MASK,
  XT_HMARK_DPORT_MASK,
  XT_HMARK_PROTO_MASK,
  XT_HMARK_RND,
  XT_HMARK_MODULUS,
  XT_HMARK_OFFSET,
  XT_HMARK_CT,
  XT_HMARK_METHOD_L3,
  XT_HMARK_METHOD_L3_4,
};
#define XT_HMARK_FLAG(flag) (1 << flag)
union hmark_ports {
  struct {
    __u16 src;
    __u16 dst;
  } p16;
  struct {
    __be16 src;
    __be16 dst;
  } b16;
  __u32 v32;
  __be32 b32;
};
struct xt_hmark_info {
  union nf_inet_addr src_mask;
  union nf_inet_addr dst_mask;
  union hmark_ports port_mask;
  union hmark_ports port_set;
  __u32 flags;
  __u16 proto_mask;
  __u32 hashrnd;
  __u32 hmodulus;
  __u32 hoffset;
};
#endif
