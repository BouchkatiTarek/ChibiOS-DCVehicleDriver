/*
 * ChibiOS/DCVehicle is a small library to easily interface L293D
 * in order control 2 DC Motors with ChibiOS/RT.
 *
 * This library is compatible STM32
 *
 * Licensed : GPLv3
 *
 * Author: Tarek Bouchkati   <tarekbouchkati@gmail.com>
 */
 
 
#include "ch.h"
#include "hal.h"
#include "dc_vehicle.h"
 
/*
 * First Method to declare a dc vehicle
 *
 * #include "dc_motor.h"
 * 
static DCMotor RM = {
}
 

*/
 
 static DCVehicle robot = { // robot configuration
    { // Right motor
    {GPIOA, 5},   // Right motor IN2 : PA5
    {GPIOA, 4},   // Right motor IN1 : PA4
    {GPIOA, 2},   // Right motor EN  : PA2
    &PWMD2,       // Right motor EN PWM Driver : TIM2
    2,            // Right motor EN PWM Channel : CH3
    },
    { // Left motor
    {GPIOA, 6},   // Left motor IN1 : PA6
    {GPIOA, 7},   // Left motor IN2 : PA7
    {GPIOA, 3},   // Left motor EN  : PA3
    &PWMD2,       // Left motor EN PWM Driver : TIM2
    3,            // Left motor EN PWM Channel : CH4
    }};
