/*
 BitzOS (BOS) V0.4.0 - Copyright (C) 2017-2025 Hexabitz
 All rights reserved

 File Name  : H14R9_gpio.h
 Description: Declares functions for GPIO and factory reset management.
 GPIO: Initialize pins, configure LED, retrieve UART port/pin details.
 UART: Check P1 TX to last port RX for factory reset.
 */

/* Define to prevent recursive inclusion ***********************************/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ****************************************************************/
#include "stm32g0xx_hal.h"

extern void GPIO_Init(void);
extern void IND_LED_Init(void);

extern uint8_t IsFactoryReset(void);
extern BOS_Status GetPortGPIOs(uint8_t port,uint32_t *TX_Port,uint16_t *TX_Pin,uint32_t *RX_Port,uint16_t *RX_Pin);

#ifdef __cplusplus
}
#endif
#endif /*__gpio_H */

 /***************** (C) COPYRIGHT HEXABITZ ***** END OF FILE ****************/
