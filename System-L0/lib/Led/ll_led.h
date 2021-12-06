/******************************************************************************
 * @file ll_led
 * @brief driver example a simple Led
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef LL_LED_H
#define LL_LED_H

#include "stdbool.h"
#include "stdio.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define PORT_LED_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()

#define GREEN_LED_Pin            GPIO_PIN_1
#define GREEN_LED_GPIO_Port      GPIOB

#define RED_LED_Pin              GPIO_PIN_0
#define RED_LED_GPIO_Port        GPIOB

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/
void ll_led_init(void);
uint8_t ll_led_write(bool *, bool *);

#endif /* LL_LED_H */