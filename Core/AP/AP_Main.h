/*
 * AP_Main.h
 *
 *  Created on: Apr 23, 2024
 *      Author: k1min
 */

#ifndef AP_AP_MAIN_H_
#define AP_AP_MAIN_H_

#include "stm32f4xx_hal.h"

#include "../Driver/Button/Button.h"
#include "../Driver/LED/LED.h"
#include "../Driver/CLCD/CLCD.h"
#include "../Driver/Ultrasonic/Ultrasonic.h"


#define Ultrasonic1_Trig_Port			GPIOC
#define Ultrasonic1_Trig_Pin			GPIO_PIN_0
#define Ultrasonic1_Echo_Port			GPIOC
#define Ultrasonic1_Echo_Pin			GPIO_PIN_1

#define Ultrasonic2_Trig_Port			GPIOB
#define Ultrasonic2_Trig_Pin			GPIO_PIN_0
#define Ultrasonic2_Echo_Port			GPIOA
#define Ultrasonic2_Echo_Pin			GPIO_PIN_4

#define Ultrasonic3_Trig_Port			GPIOC
#define Ultrasonic3_Trig_Pin			GPIO_PIN_3
#define Ultrasonic3_Echo_Port			GPIOC
#define Ultrasonic3_Echo_Pin			GPIO_PIN_2



typedef enum{
	defaultLED,
	LED1_ON,
	LED2_3_ON,
	LED1_3_ON
}LEDState_t;


void sys_init();
int APMain();

void modeStateCheck();
void modeStateRun();

#endif /* AP_AP_MAIN_H_ */
