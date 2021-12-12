/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_i2c.h"
#include "fsl_i2c_freertos.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* BOARD_InitPeripherals defines for I2C0 */
/* Definition of peripheral ID */
#define I2C0_PERIPHERAL I2C0
/* Definition of the clock source */
#define I2C0_CLOCK_SOURCE I2C0_CLK_SRC
/* Definition of the clock source frequency */
#define I2C0_CLK_FREQ CLOCK_GetFreq(I2C0_CLOCK_SOURCE)
/* I2C0 interrupt vector ID (number). */
#define I2C0_IRQN I2C0_IRQn

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern i2c_rtos_handle_t I2C0_rtosHandle;
extern const i2c_master_config_t I2C0_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
