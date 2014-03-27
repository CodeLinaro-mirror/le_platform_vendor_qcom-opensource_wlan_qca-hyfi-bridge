/*
 *  QCA Hy-Fi ECM
 *
 * Copyright (c) 2014 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2, as published by the Free Software Foundation.
 */

#ifndef HYFI_ECM_H_
#define HYFI_ECM_H_

#include <linux/skbuff.h>
#include <linux/types.h>

/*
 * Notify about a new connection
 */
int hyfi_ecm_new_connection(struct sk_buff *skb, u_int32_t ecm_serial, u_int32_t *hash);

/*
 * Periodic stats updates
 */
int hyfi_ecm_update_stats(u_int32_t hash, u_int32_t ecm_serial, u_int64_t num_bytes, u_int64_t num_packets);

#endif /* HYFI_ECM_H_ */
