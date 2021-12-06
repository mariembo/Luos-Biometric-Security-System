/******************************************************************************
 * @file servo_drv
 * @brief driver example a simple servo
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef SERVO_DRV_H
#define SERVO_DRV_H

#include "luos.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SERVO_PIN 15

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/
void ServoDrv_Init(void);
void ServoDrv_Loop(void);

#endif /*SERVO_MOTOR_DRV_H*/