// SPDX-License-Identifier: GPL-2.0+
/* nm-l2tp-service - L2TP VPN integration with NetworkManager
 *
 * (C) Copyright 2007 - 2008 Novell, Inc.
 */

#ifndef NM_PPP_STATUS_H
#define NM_PPP_STATUS_H

typedef enum {
	NM_PPP_STATUS_UNKNOWN,

	NM_PPP_STATUS_DEAD,
	NM_PPP_STATUS_INITIALIZE,
	NM_PPP_STATUS_SERIALCONN,
	NM_PPP_STATUS_DORMANT,
	NM_PPP_STATUS_ESTABLISH,
	NM_PPP_STATUS_AUTHENTICATE,
	NM_PPP_STATUS_CALLBACK,
	NM_PPP_STATUS_NETWORK,
	NM_PPP_STATUS_RUNNING,
	NM_PPP_STATUS_TERMINATE,
	NM_PPP_STATUS_DISCONNECT,
	NM_PPP_STATUS_HOLDOFF,
	NM_PPP_STATUS_MASTER
} NMPPPStatus;

#endif /* NM_PPP_STATUS_H */
