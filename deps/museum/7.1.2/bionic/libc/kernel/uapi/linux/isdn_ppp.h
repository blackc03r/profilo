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
#ifndef _UAPI_LINUX_ISDN_PPP_H
#define _UAPI_LINUX_ISDN_PPP_H
#define UAPI_LINUX_ISDN_PPP_H
#define UAPI_LINUX_ISDN_PPP_H_
#define _LINUX_ISDN_PPP_H
#define _LINUX_ISDN_PPP_H_
#define _UAPI_LINUX_ISDN_PPP_H_
#define CALLTYPE_INCOMING 0x1
#define CALLTYPE_OUTGOING 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CALLTYPE_CALLBACK 0x4
#define IPPP_VERSION "2.2.0"
struct pppcallinfo {
  int calltype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char local_num[64];
  unsigned char remote_num[64];
  int charge_units;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PPPIOCGCALLINFO _IOWR('t', 128, struct pppcallinfo)
#define PPPIOCBUNDLE _IOW('t', 129, int)
#define PPPIOCGMPFLAGS _IOR('t', 130, int)
#define PPPIOCSMPFLAGS _IOW('t', 131, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PPPIOCSMPMTU _IOW('t', 132, int)
#define PPPIOCSMPMRU _IOW('t', 133, int)
#define PPPIOCGCOMPRESSORS _IOR('t', 134, unsigned long[8])
#define PPPIOCSCOMPRESSOR _IOW('t', 135, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PPPIOCGIFNAME _IOR('t', 136, char[IFNAMSIZ])
#define SC_MP_PROT 0x00000200
#define SC_REJ_MP_PROT 0x00000400
#define SC_OUT_SHORT_SEQ 0x00000800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SC_IN_SHORT_SEQ 0x00004000
#define SC_DECOMP_ON 0x01
#define SC_COMP_ON 0x02
#define SC_DECOMP_DISCARD 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SC_COMP_DISCARD 0x08
#define SC_LINK_DECOMP_ON 0x10
#define SC_LINK_COMP_ON 0x20
#define SC_LINK_DECOMP_DISCARD 0x40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SC_LINK_COMP_DISCARD 0x80
#define ISDN_PPP_COMP_MAX_OPTIONS 16
#define IPPP_COMP_FLAG_XMIT 0x1
#define IPPP_COMP_FLAG_LINK 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isdn_ppp_comp_data {
  int num;
  unsigned char options[ISDN_PPP_COMP_MAX_OPTIONS];
  int optlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int flags;
};
#endif
