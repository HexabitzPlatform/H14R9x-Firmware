/*
 BitzOS (BOS) V0.4.0 - Copyright (C) 2017-2025 Hexabitz
 All rights reserved

 File Name  : H14R9.h
 Description: Main header for module hardware configuration and sensor interfaces.
 UART: Six ports (P1-P6) mapped to USART1-6 with GPIO pin assignments.
 I2C2: Configured on PA6(SCL)/PA7(SDA) for LSM6DS3TR_C (IMU) and LSM303AGR (magnetometer).
 GPIO: Indicator LED on PB12, port pin configurations.
 Sensors: Accelerometer, gyroscope, magnetometer, temperature sampling/streaming.
*/

/* Define to prevent recursive inclusion ***********************************/
#ifndef H14R9_H
#define H14R9_H

/* Includes ****************************************************************/
#include "BOS.h"
#include "H14R9_MemoryMap.h"
#include "H14R9_uart.h"
#include "H14R9_gpio.h"
#include "H14R9_dma.h"
#include "H14R9_inputs.h"
#include "H14R9_eeprom.h"

/* Exported Macros *********************************************************/
#define	MODULE_PN		_H14R9

/* Port-related Definitions */
#define	NUM_OF_PORTS	6
#define P_PROG 			P2		/* ST factory bootloader UART */

/* Define Available Ports */
#define _P1
#define _P2
#define _P3
#define _P4
#define _P5
#define _P6

/* Define Available USARTs */
#define _USART1
#define _USART2
#define _USART3
#define _USART4
#define _USART5
#define _USART6

/* Port-UART Mapping */
#define UART_P1 &huart4
#define UART_P2 &huart2
#define UART_P3 &huart6
#define UART_P4 &huart1
#define UART_P5 &huart5
#define UART_P6 &huart3

/* Module-specific Hardware Definitions ************************************/
/* Port Definitions */
#define	USART1_TX_PIN		GPIO_PIN_9
#define	USART1_RX_PIN		GPIO_PIN_10
#define	USART1_TX_PORT		GPIOA
#define	USART1_RX_PORT		GPIOA
#define	USART1_AF			GPIO_AF1_USART1

#define	USART2_TX_PIN		GPIO_PIN_2
#define	USART2_RX_PIN		GPIO_PIN_3
#define	USART2_TX_PORT		GPIOA
#define	USART2_RX_PORT		GPIOA
#define	USART2_AF			GPIO_AF1_USART2

#define	USART3_TX_PIN		GPIO_PIN_8
#define	USART3_RX_PIN		GPIO_PIN_9
#define	USART3_TX_PORT		GPIOB
#define	USART3_RX_PORT		GPIOB
#define	USART3_AF			GPIO_AF4_USART3

#define	USART4_TX_PIN		GPIO_PIN_0
#define	USART4_RX_PIN		GPIO_PIN_1
#define	USART4_TX_PORT		GPIOA
#define	USART4_RX_PORT		GPIOA
#define	USART4_AF			GPIO_AF4_USART4

#define	USART5_TX_PIN		GPIO_PIN_3
#define	USART5_RX_PIN		GPIO_PIN_2
#define	USART5_TX_PORT		GPIOD
#define	USART5_RX_PORT		GPIOD
#define	USART5_AF			GPIO_AF3_USART5

#define	USART6_TX_PIN		GPIO_PIN_4
#define	USART6_RX_PIN		GPIO_PIN_5
#define	USART6_TX_PORT		GPIOA
#define	USART6_RX_PORT		GPIOA
#define	USART6_AF			GPIO_AF8_USART6

/* Indicator LED */
#define _IND_LED_PORT		GPIOB
#define _IND_LED_PIN		GPIO_PIN_12

/* Module-specific Macro Definitions ***************************************/
#define NUM_MODULE_PARAMS		 1

/* Module-specific Type Definition *****************************************/
/* Module-status Type Definition */
typedef enum {
	H14R9_OK =0,
	H14R9_ERR_UnknownMessage,
	H14R9_ERR_TERMINATED,
	H14R9_ERR_WRONGPARAMS,
	H14R9_ERROR =25
} Module_Status;

/* Exported UART variables */
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;
extern UART_HandleTypeDef huart5;
extern UART_HandleTypeDef huart6;

/* Define UART Init prototypes */
extern void MX_USART1_UART_Init(void);
extern void MX_USART2_UART_Init(void);
extern void MX_USART3_UART_Init(void);
extern void MX_USART4_UART_Init(void);
extern void MX_USART5_UART_Init(void);
extern void MX_USART6_UART_Init(void);
extern void SystemClock_Config(void);

/***************************************************************************/
/***************************** General Functions ***************************/
/***************************************************************************/


#endif /* H14R9_H */

/***************** (C) COPYRIGHT HEXABITZ ***** END OF FILE ****************/
