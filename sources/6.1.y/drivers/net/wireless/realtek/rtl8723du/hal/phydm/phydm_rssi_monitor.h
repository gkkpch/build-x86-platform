/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright(c) 2007 - 2017 Realtek Corporation */



#ifndef	__PHYDM_RSSI_MONITOR_H__
#define    __PHYDM_RSSI_MONITOR_H__

#define RSSI_MONITOR_VERSION	"1.0"		/* 2017.05.011  Dino, Add phydm_rssi_monitor.h*/


/* 1 ============================================================
 * 1  Definition
 * 1 ============================================================ */

#define	H2C_0X42_LENGTH	5

#define RAINFO_BE_RX_STATE				BIT(0)	/* 1:RX*/ /* ULDL */
#define RAINFO_STBC_STATE				BIT(1)
#define RAINFO_NOISY_STATE 			BIT(2)	/* set by Noisy_Detection */
/*#define RAINFO_SHURTCUT_STATE			BIT(3)*/
/*#define RAINFO_SHURTCUT_FLAG			BIT(4)*/
#define RAINFO_INIT_RSSI_RATE_STATE	BIT(5)
#define RAINFO_BF_STATE				BIT(6)
#define RAINFO_BE_TX_STATE 			BIT(7)	/* 1:TX */

/* 1 ============================================================
 * 1  structure
 * 1 ============================================================ */




/* 1 ============================================================
 * 1  enumeration
 * 1 ============================================================ */



/* 1 ============================================================
 * 1  function prototype
 * 1 ============================================================ */

void
phydm_rssi_monitor_check(
	void		*p_dm_void
);

void
phydm_rssi_monitor_init(
	void		*p_dm_void
);

#endif