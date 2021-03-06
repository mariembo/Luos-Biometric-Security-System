/******************************************************************************
 * @file ll_led
 * @brief driver example a simple Led
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef LL_LED_H
#define LL_LED_H

#include "stdbool.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define GREEN_LED_PIN       5
#define RED_LED_PIN         6

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/
void ll_led_init(void);
uint8_t ll_led_write(bool *, bool *);

#endif /* LL_LED_H */