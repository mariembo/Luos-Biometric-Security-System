/******************************************************************************
 * @file ll_led
 * @brief driver example a simple Led
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#include <Arduino.h>

#ifdef __cplusplus
extern "C"
{
#endif

#include "ll_led.h"
#include "luos_hal.h"

#ifdef __cplusplus
}
#endif

void ll_led_init(void)
{
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(RED_LED_PIN, OUTPUT);
}

uint8_t ll_led_write(bool *green_state, bool *red_state)
{
    digitalWrite(GREEN_LED_PIN, *green_state);
    digitalWrite(RED_LED_PIN, *red_state);
    return true;
}