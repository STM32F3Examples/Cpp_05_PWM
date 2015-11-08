#include "MainApp.h"
#include "cmsis_os.h"                   // ARM::CMSIS:RTOS:Keil RTX
#include "Servo.h"

void MainApp::main(PWM* pwm){
	Servo servo(pwm);

	while(1){
		servo.setPosition(0);
		osDelay(1000);
		servo.setPosition(90);
		osDelay(1000);
		servo.setPosition(180);
		osDelay(1000);
	}
}
