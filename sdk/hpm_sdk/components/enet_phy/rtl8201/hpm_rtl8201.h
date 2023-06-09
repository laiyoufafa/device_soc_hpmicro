/*
 * Copyright (c) 2021 HPMicro
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef HPM_rtl8201_H
#define HPM_rtl8201_H

/*---------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------
 */
#include "stdint.h"

/*---------------------------------------------------------------------
 *  Macro Const Definitions
 *---------------------------------------------------------------------
 */
#define PHY_ADDR (2U)
#define PHY_ID1  (0x001CU)
#define PHY_ID2  (0x32U)

/*---------------------------------------------------------------------
 *  Typedef Struct Declarations
 *---------------------------------------------------------------------
 */
typedef struct {
    bool loopback;
    uint8_t speed;
    bool auto_negotiation;
    uint8_t duplex_mode;
} rtl8201_config_t;

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */
/*---------------------------------------------------------------------
 * Exported Functions
 *---------------------------------------------------------------------
 */
uint16_t rtl8201_check(ENET_Type *ptr, uint32_t addr);
void rtl8201_reset(ENET_Type *ptr);
void rtl8201_basic_mode_default_config(ENET_Type *ptr, rtl8201_config_t *config);
bool rtl8201_basic_mode_init(ENET_Type *ptr, rtl8201_config_t *config);
void rtl8201_read_status(ENET_Type *ptr);
void rtl8201_control_config(ENET_Type *ptr);

#if defined(__cplusplus)
}
#endif /* __cplusplus */
#endif /* HPM_rtl8201_H */
