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

#ifndef DC_VEHICLE_H_
#define DC_VEHICLE_H_

#include "dc_motor.h"

typedef struct {
  DCMotor rightMotor;
  DCMotor leftMotor;
} DCVehicle;

/*===========================================================================*/
/**
 *  DCVehicle Functions
 */
/*===========================================================================*/

//init
void DCVehicleConfig();
//commands
void DCVehicleStop();
void DCVehicleFree();
void DCVehicleForward(int speedPercent);
void DCVehicleBackward(int speedPercent);
void DCVehicleTurnRight(int speedPercent);
void DCVehicleTurnLeft(int speedPercent);
void DCVehicleSpinRight(int speedPercent);
void DCVehicleSpinLeft(int speedPercent);


#endif /* DC_VEHICLE_H_ */
