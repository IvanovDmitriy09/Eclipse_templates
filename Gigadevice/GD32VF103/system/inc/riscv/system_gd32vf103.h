/*!
   \file    system_gd32vf103.h
   \brief   RISC-V Device Peripheral Access Layer Header File for
            GD32VF103 Device Series

    \version 2025-02-10, V1.5.0, firmware for GD32VF103
*/

/*
 * Copyright (c) 2009-2018 Arm Limited. All rights reserved.
 * Copyright (c) 2019 Nuclei Limited. All rights reserved.
 * Copyright (c) 2024, GigaDevice Semiconductor Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This file refers the RISC-V standard, some adjustments are made according to GigaDevice chips */

#ifndef SYSTEM_GD32VF103_H
#define SYSTEM_GD32VF103_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
  
#if   defined (__ICCRISCV__)
    #include "compiler.h"
#endif

/* firmware version can be aquired by uncommenting the macro */
#define __FIRMWARE_VERSION_DEFINE  
  
/* system clock frequency (core clock) */
extern uint32_t SystemCoreClock;

/* function declarations */
/* initialize the system and update the SystemCoreClock variable */
extern void SystemInit(void);
/* update the SystemCoreClock with current core clock retrieved from cpu registers */
extern void SystemCoreClockUpdate(void);
#ifdef __FIRMWARE_VERSION_DEFINE
/* get firmware version */
extern uint32_t gd32vf103_firmware_version_get(void);
#endif /* __FIRMWARE_VERSION_DEFINE */
#ifdef __cplusplus
}
#endif

#endif /* SYSTEM_GD32VF103_H */
