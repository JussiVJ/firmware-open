/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 System76
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
		PAD_CFG_NF(GPD0, NONE, DEEP, NF1),
		PAD_CFG_NF(GPD1, DN_20K, DEEP, NF1),
		PAD_CFG_GPI(GPD2, DN_20K, PWROK),
		PAD_CFG_NF(GPD3, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPD4, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPD5, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPD6, DN_20K, DEEP, NF1),
		PAD_CFG_GPI(GPD7, NONE, PWROK),
		PAD_CFG_NF(GPD8, DN_20K, DEEP, NF1),
		PAD_CFG_GPI(GPD9, DN_20K, PWROK),
		_PAD_CFG_STRUCT(GPD10, 0x04000601, 0x1000),
		PAD_CFG_TERM_GPO(GPD11, 0, DN_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_A0, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_A1, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A2, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A3, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A4, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A5, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),
		_PAD_CFG_STRUCT(GPP_A7, 0x80100100, 0x0000),
		PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_A9, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A10, DN_20K, DEEP, NF1),
		PAD_CFG_GPI(GPP_A11, UP_20K, DEEP),
		PAD_CFG_GPI(GPP_A12, NONE, DEEP),
		PAD_CFG_NF(GPP_A13, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A14, DN_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_A15, UP_20K, DEEP, NF1),
		_PAD_CFG_STRUCT(GPP_A16, 0x44000101, 0x1000),
		_PAD_CFG_STRUCT(GPP_A17, 0x44000101, 0x0000),
		PAD_CFG_TERM_GPO(GPP_A18, 1, NONE, DEEP),
		PAD_CFG_GPI(GPP_A19, NONE, DEEP),
		PAD_CFG_GPI(GPP_A20, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_A21, 0x44000101, 0x0000),
		PAD_CFG_TERM_GPO(GPP_A22, 1, NONE, DEEP),
		PAD_CFG_GPI(GPP_A23, NONE, DEEP),
		PAD_CFG_GPI(GPP_B0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B1, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B2, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B3, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B4, 0, UP_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_B5, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B6, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B8, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B9, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_B10, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_B11, 0, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_B12, 0x44000601, 0x0000),
		_PAD_CFG_STRUCT(GPP_B13, 0x44000601, 0x1000),
		PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_B15, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B16, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B17, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_B18, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_B19, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B20, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_B21, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_B22, NONE, DEEP, NF1),
		PAD_CFG_GPI(GPP_B23, NONE, DEEP),
		PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),
		PAD_CFG_GPI(GPP_C2, NONE, DEEP),
		PAD_CFG_GPI(GPP_C3, NONE, DEEP),
		PAD_CFG_GPI(GPP_C4, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C5, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_C6, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C7, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_C8, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_C9, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C10, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C11, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C12, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C13, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C14, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_C15, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1),
		PAD_CFG_NF(GPP_C17, NONE, PLTRST, NF1),
		PAD_CFG_NF(GPP_C18, NONE, PLTRST, NF1),
		PAD_CFG_NF(GPP_C19, NONE, PLTRST, NF1),
		PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C22, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_C23, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_D0, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D1, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D2, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D3, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D4, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_D5, NONE, DEEP, NF3),
		PAD_CFG_NF(GPP_D6, NONE, DEEP, NF3),
		PAD_CFG_TERM_GPO(GPP_D7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D8, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D9, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D10, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D11, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D12, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D13, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D14, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D15, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D16, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_D21, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D22, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_D23, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_E0, NONE, DEEP),
		PAD_CFG_NF(GPP_E1, UP_20K, DEEP, NF1),
		PAD_CFG_GPI(GPP_E2, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_E3, 0, UP_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_E4, 1, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_E5, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_E6, 0, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_E7, 0x80800100, 0x0000),
		PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
		_PAD_CFG_STRUCT(GPP_E9, 0x44000101, 0x3000),
		_PAD_CFG_STRUCT(GPP_E10, 0x44000501, 0x3000),
		_PAD_CFG_STRUCT(GPP_E11, 0x44000501, 0x3000),
		_PAD_CFG_STRUCT(GPP_E12, 0x44000501, 0x3000),
		PAD_CFG_TERM_GPO(GPP_F0, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F1, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F2, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F3, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F4, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_F5, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_F6, 0x44000101, 0x0000),
		PAD_CFG_TERM_GPO(GPP_F7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F8, 1, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F9, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_F10, NONE, DEEP),
		PAD_CFG_GPI(GPP_F11, NONE, DEEP),
		PAD_CFG_GPI(GPP_F12, NONE, DEEP),
		PAD_CFG_GPI(GPP_F13, NONE, DEEP),
		PAD_CFG_GPI(GPP_F14, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_F15, 0x44000501, 0x3000),
		_PAD_CFG_STRUCT(GPP_F16, 0x44000501, 0x3000),
		_PAD_CFG_STRUCT(GPP_F17, 0x44000501, 0x3000),
		_PAD_CFG_STRUCT(GPP_F18, 0x44000501, 0x3000),
		PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_F22, 1, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_F23, 1, NONE, DEEP),
		PAD_CFG_GPI(GPP_G0, UP_20K, DEEP),
		PAD_CFG_GPI(GPP_G1, UP_20K, DEEP),
		PAD_CFG_GPI(GPP_G2, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_G3, 0x44000101, 0x0000),
		PAD_CFG_GPI(GPP_G4, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_G5, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_G6, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_G7, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_H0, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_H1, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_H2, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_H3, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_H4, NONE, DEEP, NF1),
		PAD_CFG_GPI(GPP_H5, DN_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_H6, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H8, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H9, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H10, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H11, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H12, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_H13, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H14, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_H15, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H16, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H17, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H18, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H19, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H20, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H21, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_H22, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_H23, UP_20K, DEEP),
		PAD_CFG_NF(GPP_I0, NONE, DEEP, NF1),
		_PAD_CFG_STRUCT(GPP_I1, 0x46880100, 0x0000),
		PAD_CFG_NF(GPP_I2, NONE, DEEP, NF1),
		_PAD_CFG_STRUCT(GPP_I3, 0x46880100, 0x0000),
		PAD_CFG_NF(GPP_I4, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_I5, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_I6, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_I7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I8, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I9, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I10, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_I11, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I12, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I13, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_I14, 0, NONE, DEEP),
		PAD_CFG_NF(GPP_J0, NONE, DEEP, NF1),
		PAD_CFG_GPI(GPP_J1, NONE, DEEP),
		PAD_CFG_GPI(GPP_J2, NONE, DEEP),
		PAD_CFG_GPI(GPP_J3, NONE, DEEP),
		PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_J5, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_J7, UP_20K, DEEP, NF1),
		PAD_CFG_NF(GPP_J8, NONE, DEEP, NF1),
		PAD_CFG_NF(GPP_J9, NONE, DEEP, NF1),
		PAD_CFG_TERM_GPO(GPP_J10, 0, NONE, DEEP),
		PAD_CFG_GPI(GPP_J11, DN_20K, DEEP),
		PAD_CFG_TERM_GPO(GPP_K0, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K1, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K2, 0, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_K3, 0x40880100, 0x0000),
		PAD_CFG_TERM_GPO(GPP_K4, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K5, 0, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_K6, 0x40880100, 0x0000),
		PAD_CFG_TERM_GPO(GPP_K7, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K8, 1, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K9, 1, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K10, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K11, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K12, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K13, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K14, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K15, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K16, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K17, 0, NONE, DEEP),
		PAD_CFG_TERM_GPO(GPP_K18, 0, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_K19, 0x42800101, 0x0000),
		PAD_CFG_TERM_GPO(GPP_K20, 1, NONE, DEEP),
		PAD_CFG_GPI(GPP_K21, NONE, DEEP),
		_PAD_CFG_STRUCT(GPP_K22, 0x44000101, 0x0000),
		PAD_CFG_TERM_GPO(GPP_K23, 1, NONE, DEEP),
};

#endif

#endif