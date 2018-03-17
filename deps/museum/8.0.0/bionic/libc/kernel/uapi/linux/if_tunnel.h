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
#ifndef _UAPI_IF_TUNNEL_H_
#define _UAPI_IF_TUNNEL_H_
#define UAPI_IF_TUNNEL_H_
#define UAPI_IF_TUNNEL_H
#define _IF_TUNNEL_H_
#define _IF_TUNNEL_H
#define _UAPI_IF_TUNNEL_H
#include <museum/8.0.0/bionic/libc/linux/types.h>
#include <museum/8.0.0/bionic/libc/linux/if.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/8.0.0/bionic/libc/linux/ip.h>
#include <museum/8.0.0/bionic/libc/linux/in6.h>
#include <museum/8.0.0/bionic/libc/asm/byteorder.h>
#define SIOCGETTUNNEL (SIOCDEVPRIVATE + 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCADDTUNNEL (SIOCDEVPRIVATE + 1)
#define SIOCDELTUNNEL (SIOCDEVPRIVATE + 2)
#define SIOCCHGTUNNEL (SIOCDEVPRIVATE + 3)
#define SIOCGETPRL (SIOCDEVPRIVATE + 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCADDPRL (SIOCDEVPRIVATE + 5)
#define SIOCDELPRL (SIOCDEVPRIVATE + 6)
#define SIOCCHGPRL (SIOCDEVPRIVATE + 7)
#define SIOCGET6RD (SIOCDEVPRIVATE + 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCADD6RD (SIOCDEVPRIVATE + 9)
#define SIOCDEL6RD (SIOCDEVPRIVATE + 10)
#define SIOCCHG6RD (SIOCDEVPRIVATE + 11)
#define GRE_CSUM __cpu_to_be16(0x8000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GRE_ROUTING __cpu_to_be16(0x4000)
#define GRE_KEY __cpu_to_be16(0x2000)
#define GRE_SEQ __cpu_to_be16(0x1000)
#define GRE_STRICT __cpu_to_be16(0x0800)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GRE_REC __cpu_to_be16(0x0700)
#define GRE_ACK __cpu_to_be16(0x0080)
#define GRE_FLAGS __cpu_to_be16(0x0078)
#define GRE_VERSION __cpu_to_be16(0x0007)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GRE_IS_CSUM(f) ((f) & GRE_CSUM)
#define GRE_IS_ROUTING(f) ((f) & GRE_ROUTING)
#define GRE_IS_KEY(f) ((f) & GRE_KEY)
#define GRE_IS_SEQ(f) ((f) & GRE_SEQ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GRE_IS_STRICT(f) ((f) & GRE_STRICT)
#define GRE_IS_REC(f) ((f) & GRE_REC)
#define GRE_IS_ACK(f) ((f) & GRE_ACK)
#define GRE_VERSION_0 __cpu_to_be16(0x0000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GRE_VERSION_1 __cpu_to_be16(0x0001)
#define GRE_PROTO_PPP __cpu_to_be16(0x880b)
#define GRE_PPTP_KEY_MASK __cpu_to_be32(0xffff)
struct ip_tunnel_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  char name[IFNAMSIZ];
  int link;
  __be16 i_flags;
  __be16 o_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __be32 i_key;
  __be32 o_key;
  struct iphdr iph;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  IFLA_IPTUN_UNSPEC,
  IFLA_IPTUN_LINK,
  IFLA_IPTUN_LOCAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_IPTUN_REMOTE,
  IFLA_IPTUN_TTL,
  IFLA_IPTUN_TOS,
  IFLA_IPTUN_ENCAP_LIMIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_IPTUN_FLOWINFO,
  IFLA_IPTUN_FLAGS,
  IFLA_IPTUN_PROTO,
  IFLA_IPTUN_PMTUDISC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_IPTUN_6RD_PREFIX,
  IFLA_IPTUN_6RD_RELAY_PREFIX,
  IFLA_IPTUN_6RD_PREFIXLEN,
  IFLA_IPTUN_6RD_RELAY_PREFIXLEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_IPTUN_ENCAP_TYPE,
  IFLA_IPTUN_ENCAP_FLAGS,
  IFLA_IPTUN_ENCAP_SPORT,
  IFLA_IPTUN_ENCAP_DPORT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_IPTUN_COLLECT_METADATA,
  __IFLA_IPTUN_MAX,
};
#define IFLA_IPTUN_MAX (__IFLA_IPTUN_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum tunnel_encap_types {
  TUNNEL_ENCAP_NONE,
  TUNNEL_ENCAP_FOU,
  TUNNEL_ENCAP_GUE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TUNNEL_ENCAP_FLAG_CSUM (1 << 0)
#define TUNNEL_ENCAP_FLAG_CSUM6 (1 << 1)
#define TUNNEL_ENCAP_FLAG_REMCSUM (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIT_ISATAP 0x0001
struct ip_tunnel_prl {
  __be32 addr;
  __u16 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 __reserved;
  __u32 datalen;
  __u32 __reserved2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PRL_DEFAULT 0x0001
struct ip_tunnel_6rd {
  struct in6_addr prefix;
  __be32 relay_prefix;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 prefixlen;
  __u16 relay_prefixlen;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_GRE_UNSPEC,
  IFLA_GRE_LINK,
  IFLA_GRE_IFLAGS,
  IFLA_GRE_OFLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_GRE_IKEY,
  IFLA_GRE_OKEY,
  IFLA_GRE_LOCAL,
  IFLA_GRE_REMOTE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_GRE_TTL,
  IFLA_GRE_TOS,
  IFLA_GRE_PMTUDISC,
  IFLA_GRE_ENCAP_LIMIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_GRE_FLOWINFO,
  IFLA_GRE_FLAGS,
  IFLA_GRE_ENCAP_TYPE,
  IFLA_GRE_ENCAP_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_GRE_ENCAP_SPORT,
  IFLA_GRE_ENCAP_DPORT,
  IFLA_GRE_COLLECT_METADATA,
  IFLA_GRE_IGNORE_DF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __IFLA_GRE_MAX,
};
#define IFLA_GRE_MAX (__IFLA_GRE_MAX - 1)
#define VTI_ISVTI ((__force __be16) 0x0001)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  IFLA_VTI_UNSPEC,
  IFLA_VTI_LINK,
  IFLA_VTI_IKEY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IFLA_VTI_OKEY,
  IFLA_VTI_LOCAL,
  IFLA_VTI_REMOTE,
  __IFLA_VTI_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_VTI_MAX (__IFLA_VTI_MAX - 1)
#endif
