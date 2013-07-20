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
void DCVehicleConfig(DCVehicle *dcvehicle);
//commands
void DCVehicleStop(DCVehicle *dcvehicle);
void DCVehicleFree(DCVehicle *dcvehicle);
void DCVehicleForward(DCVehicle *dcvehicle, int speedPercent);
void DCVehicleBackward(DCVehicle *dcvehicle, int speedPercent);
void DCVehicleTurnRight(DCVehicle *dcvehicle, int speedPercent);
void DCVehicleTurnLeft(DCVehicle *dcvehicle, int speedPercent);
void DCVehicleSpinRight(DCVehicle *dcvehicle, int speedPercent);
void DCVehicleSpinLeft(DCVehicle *dcvehicle, int speedPercent);


#endif /* DC_VEHICLE_H_ */
