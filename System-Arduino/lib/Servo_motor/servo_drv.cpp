/******************************************************************************
 * @file servo_drv
 * @brief driver example a simple servo
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#include <Arduino.h>
#include <Servo.h>

#ifdef __cplusplus
extern "C"
{
#endif

#include "servo_drv.h"
#include "luos_hal.h"
#include "profile_servo_motor.h"

#ifdef __cplusplus
}
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
profile_servo_motor_t servo;
Servo myservo;

/*******************************************************************************
 * Function
 ******************************************************************************/

/******************************************************************************
 * @brief init must be call in project init
 * @param None
 * @return None
 ******************************************************************************/
void ServoDrv_Init(void)
{
    revision_t revision = {1, 0, 0};

    myservo.attach(SERVO_PIN);

    servo.mode.angular_position = true;
    servo.mode.mode_angular_position = true;

    ProfileServo_CreateService(&servo, 0, "servo", revision);
}

/******************************************************************************
 * @brief loop must be call in project loop
 * @param None
 * @return None
 ******************************************************************************/
void ServoDrv_Loop(void)
{
    servo.angular_position = AngularOD_PositionFrom_deg(myservo.read());
    if (servo.angular_position != servo.target_angular_position)
    {
        myservo.write(AngularOD_PositionTo_deg(servo.target_angular_position));
    }
}
