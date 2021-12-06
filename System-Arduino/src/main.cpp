#include <Arduino.h>

#ifdef __cplusplus
extern "C"
{
#endif

#include "luos.h"
#include "luos_hal.h"
#include "button.h"
#include "fingerprint.h"
#include "lcd.h"
#include "led.h"
#include "servo_drv.h"
#include "biometric_security.h"

#ifdef __cplusplus
}
#endif

void setup() {
  // put your setup code here, to run once:
  Luos_Init();
  Fingerprint_Init();
  Lcd_Init(); 
  Led_Init();
  ServoDrv_Init();
  Button_Init();
  BiometricSecurity_Init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Luos_Loop();
  Fingerprint_Loop();
  Lcd_Loop(); 
  Led_Loop();
  ServoDrv_Loop();
  Button_Loop();
  BiometricSecurity_Loop();
}