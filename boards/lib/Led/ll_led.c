/******************************************************************************
 * @file ll_led
 * @brief driver example a simple Led
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#include "ll_led.h"
#include "luos_hal.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/

/******************************************************************************
 * @brief initialize 
 * @param None
 * @return None
 ******************************************************************************/
void ll_led_init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    // configure gpio clock
    PORT_LED_CLK_ENABLE();

    /*Configure GPIO pin : button pin */
    GPIO_InitStruct.Pin  = GREEN_LED_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(GREEN_LED_GPIO_Port, &GPIO_InitStruct);

    GPIO_InitStruct.Pin  = RED_LED_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(RED_LED_GPIO_Port, &GPIO_InitStruct);
}

uint8_t ll_led_write(bool *green_state, bool *red_state)
{
    HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, *green_state);
    HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, *red_state);
    return true;
}