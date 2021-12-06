/******************************************************************************
 * @file ll_button
 * @brief driver example a simple button
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#include <Arduino.h>

#ifdef __cplusplus
extern "C"
{
#endif

#include "ll_button.h"

#ifdef __cplusplus
}
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Function
 ******************************************************************************/

/******************************************************************************
 * @brief init must be call in project init
 * @param None
 * @return None
 ******************************************************************************/
void ll_button_init(void)
{
    pinMode(BTN_PIN_ENROLL, INPUT);
    pinMode(BTN_PIN_DELETE, INPUT);
    pinMode(BTN_PIN_UP, INPUT);
    pinMode(BTN_PIN_DOWN, INPUT);
}

/******************************************************************************
 * @brief loop must be call in project loop
 * @param None
 * @return None
 ******************************************************************************/
uint8_t ll_button_read(bool *enroll_state, bool *delete_state, bool *up_state, bool *down_state)
{
    *enroll_state  = (bool) digitalRead(BTN_PIN_ENROLL);
    *delete_state = (bool) digitalRead(BTN_PIN_DELETE);
    *up_state = (bool) digitalRead(BTN_PIN_UP);
    *down_state = (bool) digitalRead(BTN_PIN_DOWN);
    return true;
}