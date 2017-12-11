/****************************************************************************************************
 * arch/arm/src/lpc54xx/lpc54_spi.h
 *
 *   Copyright (C) 2017 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************************************/

#ifndef __ARCH_ARM_SRC_LPC54XX_CHIP_LPC54_SPI_H
#define __ARCH_ARM_SRC_LPC54XX_CHIP_LPC54_SPI_H

/****************************************************************************************************
 * Included Files
 ****************************************************************************************************/

#include <nuttx/config.h>
#include "chip/lpc54_memorymap.h"

/****************************************************************************************************
 * Pre-processor Definitions
 ****************************************************************************************************/

/* Register offsets *********************************************************************************/

/* Registers for the SPI function */

#define LPC54_SPI_CFG_OFFSET          0x0400  /* SPI Configuration register */
#define LPC54_SPI_DLY_OFFSET          0x0404  /* SPI Delay register */
#define LPC54_SPI_STAT_OFFSET         0x0408  /* SPI Status */
#define LPC54_SPI_INTENSET_OFFSET     0x040c  /* SPI Interrupt Enable read and set */
#define LPC54_SPI_INTENCLR_OFFSET     0x0410  /* SPI Interrupt Enable Clear */
#define LPC54_SPI_DIV_OFFSET          0x0424  /* SPI clock Divider */
#define LPC54_SPI_INTSTAT_OFFSET      0x0428  /* SPI Interrupt Status */

/* Registers for FIFO control and data access */

#define LPC54_SPI_FIFOCFG_OFFSET      0x0e00  /* FIFO configuration and enable register */
#define LPC54_SPI_FIFOSTAT_OFFSET     0x0e04  /* FIFO status register */
#define LPC54_SPI_FIFOTRIG_OFFSET     0x0e08  /* FIFO trigger level settings for interrupt and DMA request */
#define LPC54_SPI_FIFOINTENSET_OFFSET 0x0e10  /* FIFO interrupt enable set (enable) and read register */
#define LPC54_SPI_FIFOINTENCLR_OFFSET 0x0e14  /* FIFO interrupt enable clear (disable) and read register */
#define LPC54_SPI_FIFOINTSTAT_OFFSET  0x0e18  /* FIFO interrupt status register */
#define LPC54_SPI_FIFOWR_OFFSET       0x0e20  /* FIFO write data */
#define LPC54_SPI_FIFORD_OFFSET       0x0e30  /* FIFO read data */
#define LPC54_SPI_FIFORDNOPOP_OFFSET  0x0e40  /* FIFO data read with no FIFO pop */

/* ID register */

#define LPC54_SPI_ID_OFFSET           0x0ffc  /* SPI module Identification */

/* Register addresses *******************************************************************************/

#define LPC54_SPI0_CFG                (LPC54_FLEXCOMM0_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI0_DLY                (LPC54_FLEXCOMM0_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI0_STAT               (LPC54_FLEXCOMM0_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI0_INTENSET           (LPC54_FLEXCOMM0_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI0_INTENCLR           (LPC54_FLEXCOMM0_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI0_DIV                (LPC54_FLEXCOMM0_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI0_INTSTAT            (LPC54_FLEXCOMM0_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI0_FIFOCFG            (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI0_FIFOSTAT           (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI0_FIFOTRIG           (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI0_FIFOINTENSET       (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI0_FIFOINTENCLR       (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI0_FIFOINTSTAT        (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI0_FIFOWR             (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI0_FIFORD             (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI0_FIFORDNOPOP        (LPC54_FLEXCOMM0_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI0_ID                 (LPC54_FLEXCOMM0_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI1_CFG                (LPC54_FLEXCOMM1_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI1_DLY                (LPC54_FLEXCOMM1_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI1_STAT               (LPC54_FLEXCOMM1_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI1_INTENSET           (LPC54_FLEXCOMM1_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI1_INTENCLR           (LPC54_FLEXCOMM1_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI1_DIV                (LPC54_FLEXCOMM1_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI1_INTSTAT            (LPC54_FLEXCOMM1_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI1_FIFOCFG            (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI1_FIFOSTAT           (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI1_FIFOTRIG           (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI1_FIFOINTENSET       (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI1_FIFOINTENCLR       (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI1_FIFOINTSTAT        (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI1_FIFOWR             (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI1_FIFORD             (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI1_FIFORDNOPOP        (LPC54_FLEXCOMM1_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI1_ID                 (LPC54_FLEXCOMM1_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI2_CFG                (LPC54_FLEXCOMM2_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI2_DLY                (LPC54_FLEXCOMM2_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI2_STAT               (LPC54_FLEXCOMM2_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI2_INTENSET           (LPC54_FLEXCOMM2_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI2_INTENCLR           (LPC54_FLEXCOMM2_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI2_DIV                (LPC54_FLEXCOMM2_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI2_INTSTAT            (LPC54_FLEXCOMM2_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI2_FIFOCFG            (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI2_FIFOSTAT           (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI2_FIFOTRIG           (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI2_FIFOINTENSET       (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI2_FIFOINTENCLR       (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI2_FIFOINTSTAT        (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI2_FIFOWR             (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI2_FIFORD             (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI2_FIFORDNOPOP        (LPC54_FLEXCOMM2_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI2_ID                 (LPC54_FLEXCOMM2_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI3_CFG                (LPC54_FLEXCOMM3_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI3_DLY                (LPC54_FLEXCOMM3_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI3_STAT               (LPC54_FLEXCOMM3_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI3_INTENSET           (LPC54_FLEXCOMM3_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI3_INTENCLR           (LPC54_FLEXCOMM3_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI3_DIV                (LPC54_FLEXCOMM3_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI3_INTSTAT            (LPC54_FLEXCOMM3_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI3_FIFOCFG            (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI3_FIFOSTAT           (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI3_FIFOTRIG           (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI3_FIFOINTENSET       (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI3_FIFOINTENCLR       (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI3_FIFOINTSTAT        (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI3_FIFOWR             (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI3_FIFORD             (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI3_FIFORDNOPOP        (LPC54_FLEXCOMM3_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI3_ID                 (LPC54_FLEXCOMM3_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI4_CFG                (LPC54_FLEXCOMM4_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI4_DLY                (LPC54_FLEXCOMM4_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI4_STAT               (LPC54_FLEXCOMM4_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI4_INTENSET           (LPC54_FLEXCOMM4_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI4_INTENCLR           (LPC54_FLEXCOMM4_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI4_DIV                (LPC54_FLEXCOMM4_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI4_INTSTAT            (LPC54_FLEXCOMM4_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI4_FIFOCFG            (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI4_FIFOSTAT           (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI4_FIFOTRIG           (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI4_FIFOINTENSET       (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI4_FIFOINTENCLR       (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI4_FIFOINTSTAT        (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI4_FIFOWR             (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI4_FIFORD             (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI4_FIFORDNOPOP        (LPC54_FLEXCOMM4_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI4_ID                 (LPC54_FLEXCOMM4_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI5_CFG                (LPC54_FLEXCOMM5_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI5_DLY                (LPC54_FLEXCOMM5_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI5_STAT               (LPC54_FLEXCOMM5_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI5_INTENSET           (LPC54_FLEXCOMM5_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI5_INTENCLR           (LPC54_FLEXCOMM5_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI5_DIV                (LPC54_FLEXCOMM5_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI5_INTSTAT            (LPC54_FLEXCOMM5_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI5_FIFOCFG            (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI5_FIFOSTAT           (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI5_FIFOTRIG           (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI5_FIFOINTENSET       (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI5_FIFOINTENCLR       (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI5_FIFOINTSTAT        (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI5_FIFOWR             (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI5_FIFORD             (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI5_FIFORDNOPOP        (LPC54_FLEXCOMM5_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI5_ID                 (LPC54_FLEXCOMM5_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI6_CFG                (LPC54_FLEXCOMM6_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI6_DLY                (LPC54_FLEXCOMM6_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI6_STAT               (LPC54_FLEXCOMM6_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI6_INTENSET           (LPC54_FLEXCOMM6_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI6_INTENCLR           (LPC54_FLEXCOMM6_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI6_DIV                (LPC54_FLEXCOMM6_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI6_INTSTAT            (LPC54_FLEXCOMM6_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI6_FIFOCFG            (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI6_FIFOSTAT           (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI6_FIFOTRIG           (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI6_FIFOINTENSET       (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI6_FIFOINTENCLR       (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI6_FIFOINTSTAT        (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI6_FIFOWR             (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI6_FIFORD             (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI6_FIFORDNOPOP        (LPC54_FLEXCOMM6_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI6_ID                 (LPC54_FLEXCOMM6_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI7_CFG                (LPC54_FLEXCOMM7_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI7_DLY                (LPC54_FLEXCOMM7_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI7_STAT               (LPC54_FLEXCOMM7_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI7_INTENSET           (LPC54_FLEXCOMM7_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI7_INTENCLR           (LPC54_FLEXCOMM7_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI7_DIV                (LPC54_FLEXCOMM7_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI7_INTSTAT            (LPC54_FLEXCOMM7_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI7_FIFOCFG            (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI7_FIFOSTAT           (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI7_FIFOTRIG           (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI7_FIFOINTENSET       (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI7_FIFOINTENCLR       (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI7_FIFOINTSTAT        (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI7_FIFOWR             (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI7_FIFORD             (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI7_FIFORDNOPOP        (LPC54_FLEXCOMM7_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI7_ID                 (LPC54_FLEXCOMM7_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI8_CFG                (LPC54_FLEXCOMM8_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI8_DLY                (LPC54_FLEXCOMM8_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI8_STAT               (LPC54_FLEXCOMM8_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI8_INTENSET           (LPC54_FLEXCOMM8_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI8_INTENCLR           (LPC54_FLEXCOMM8_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI8_DIV                (LPC54_FLEXCOMM8_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI8_INTSTAT            (LPC54_FLEXCOMM8_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI8_FIFOCFG            (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI8_FIFOSTAT           (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI8_FIFOTRIG           (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI8_FIFOINTENSET       (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI8_FIFOINTENCLR       (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI8_FIFOINTSTAT        (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI8_FIFOWR             (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI8_FIFORD             (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI8_FIFORDNOPOP        (LPC54_FLEXCOMM8_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI8_ID                 (LPC54_FLEXCOMM8_BASE + LPC54_SPI_ID_OFFSET)

#define LPC54_SPI9_CFG                (LPC54_FLEXCOMM9_BASE + LPC54_SPI_CFG_OFFSET)
#define LPC54_SPI9_DLY                (LPC54_FLEXCOMM9_BASE + LPC54_SPI_DLY_OFFSET)
#define LPC54_SPI9_STAT               (LPC54_FLEXCOMM9_BASE + LPC54_SPI_STAT_OFFSET)
#define LPC54_SPI9_INTENSET           (LPC54_FLEXCOMM9_BASE + LPC54_SPI_INTENSET_OFFSET)
#define LPC54_SPI9_INTENCLR           (LPC54_FLEXCOMM9_BASE + LPC54_SPI_INTENCLR_OFFSET)
#define LPC54_SPI9_DIV                (LPC54_FLEXCOMM9_BASE + LPC54_SPI_DIV_OFFSET)
#define LPC54_SPI9_INTSTAT            (LPC54_FLEXCOMM9_BASE + LPC54_SPI_INTSTAT_OFFSET)
#define LPC54_SPI9_FIFOCFG            (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOCFG_OFFSET)
#define LPC54_SPI9_FIFOSTAT           (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOSTAT_OFFSET)
#define LPC54_SPI9_FIFOTRIG           (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOTRIG_OFFSET)
#define LPC54_SPI9_FIFOINTENSET       (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOINTENSET_OFFSET)
#define LPC54_SPI9_FIFOINTENCLR       (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOINTENCLR_OFFSET)
#define LPC54_SPI9_FIFOINTSTAT        (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOINTSTAT_OFFSET)
#define LPC54_SPI9_FIFOWR             (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFOWR_OFFSET)
#define LPC54_SPI9_FIFORD             (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFORD_OFFSET)
#define LPC54_SPI9_FIFORDNOPOP        (LPC54_FLEXCOMM9_BASE + LPC54_SPI_FIFORDNOPOP_OFFSET)
#define LPC54_SPI9_ID                 (LPC54_FLEXCOMM9_BASE + LPC54_SPI_ID_OFFSET)

/* Register bit definitions *************************************************************************/

/* SPI Configuration register */
#define SPI_CFG_
/* SPI Delay register */
#define SPI_DLY_
/* SPI Status register */
#define SPI_STAT_
/* SPI Interrupt Enable read and set */
#define SPI_INTENSET_
/* SPI Interrupt Enable Clear */
#define SPI_INTENCLR_
/* SPI clock Divider */
#define SPI_DIV_
/* SPI Interrupt Status */
#define SPI_INTSTAT_
/* FIFO configuration and enable register */
#define SPI_FIFOCFG_
/* FIFO status register */
#define SPI_FIFOSTAT_
/* FIFO trigger level settings for interrupt and DMA request */
#define SPI_FIFOTRIG_
/* FIFO interrupt enable set (enable) and read register */
#define SPI_FIFOINTENSET_
/* FIFO interrupt enable clear (disable) and read register */
#define SPI_FIFOINTENCLR_
/* FIFO interrupt status register */
#define SPI_FIFOINTSTAT_
/* FIFO write data */
#define SPI_FIFOWR_
/* FIFO read data */
#define SPI_FIFORD_
/* FIFO data read with no FIFO pop */
#define SPI_FIFORDNOPOP_
/* SPI module Identification */
#define SPI_ID_

#endif /* __ARCH_ARM_SRC_LPC54XX_CHIP_LPC54_SPI_H */