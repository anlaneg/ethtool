/* Portions Copyright 2001 Sun Microsystems (thockin@sun.com) */
/* Portions Copyright 2002 Intel (scott.feldman@intel.com) */
#ifndef ETHTOOL_UTIL_H__
#define ETHTOOL_UTIL_H__

#include <sys/types.h>

#include "ethtool-copy.h"

/* historical: we used to use kernel-like types; remove these once cleaned */
typedef unsigned long long u64;
typedef __uint32_t u32;         /* ditto */
typedef __uint16_t u16;         /* ditto */
typedef __uint8_t u8;           /* ditto */

/* National Semiconductor DP83815, DP83816 */
int natsemi_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);
int natsemi_dump_eeprom(struct ethtool_drvinfo *info,
	struct ethtool_eeprom *ee);

/* Digital/Intel 21040 and 21041 */
int de2104x_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Intel(R) PRO/1000 Gigabit Adapter Family */
int e1000_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

int igb_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* RealTek PCI */
int realtek_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Intel(R) PRO/100 Fast Ethernet Adapter Family */
int e100_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Tigon3 */
int tg3_dump_eeprom(struct ethtool_drvinfo *info, struct ethtool_eeprom *ee);

/* Advanced Micro Devices  AMD8111 based Adapter */
int amd8111e_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Advanced Micro Devices PCnet32 Adapter */
int pcnet32_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Motorola 8xx FEC Ethernet controller */
int fec_8xx_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* PowerPC 4xx on-chip Ethernet controller */
int ibm_emac_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Intel(R) PRO/10GBe Gigabit Adapter Family */
int ixgb_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

int ixgbe_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Broadcom Tigon3 Ethernet controller */
int tg3_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* SysKonnect Gigabit (Genesis and Yukon) */
int skge_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* SysKonnect Gigabit (Yukon2) */
int sky2_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Fabric7 VIOC */
int vioc_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* SMSC LAN911x/LAN921x embedded ethernet controller */
int smsc911x_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

int at76c50x_usb_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

/* Solarflare Solarstorm controllers */
int sfc_dump_regs(struct ethtool_drvinfo *info, struct ethtool_regs *regs);

#endif
