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

#include "dc_motor.h"
#include "dc_vehicle.h"


void DCVehicleConfig(DCVehicle *dcvehicle) {
	DCMotorConfig(&dcvehicle->rightMotor);
	DCMotorConfig(&dcvehicle->leftMotor);
}

void DCVehicleStop(DCVehicle *dcvehicle) {
	DCMotorStop(&dcvehicle->rightMotor);
	DCMotorStop(&dcvehicle->leftMotor);
}

void DCVehicleFree(DCVehicle *dcvehicle) {
	DCMotorFree(&dcvehicle->rightMotor);
	DCMotorFree(&dcvehicle->leftMotor);
}

void DCVehicleForward(DCVehicle *dcvehicle, int speedPercent) {
	DCMotorForward(&dcvehicle->rightMotor, speedPercent);
	DCMotorForward(&dcvehicle->leftMotor, speedPercent);
}

void DCVehicleBackward(DCVehicle *dcvehicle, int speedPercent) {
	DCMotorBackward(&dcvehicle->rightMotor, speedPercent);
	DCMotorBackward(&dcvehicle->leftMotor, speedPercent);
}

void DCVehicleTurnRight(DCVehicle *dcvehicle, int speedPercent){
	DCMotorStop(&dcvehicle->rightMotor);
	DCMotorForward(&dcvehicle->leftMotor, speedPercent);
}
void DCVehicleTurnLeft(DCVehicle *dcvehicle, int speedPercent){
	DCMotorForward(&dcvehicle->rightMotor, speedPercent);
	DCMotorStop(&dcvehicle->leftMotor);
}
void DCVehicleSpinRight(DCVehicle *dcvehicle, int speedPercent){
	DCMotorBackward(&dcvehicle->rightMotor, speedPercent);
	DCMotorForward(&dcvehicle->leftMotor, speedPercent);
}
void DCVehicleSpinLeft(DCVehicle *dcvehicle, int speedPercent){
	DCMotorForward(&dcvehicle->rightMotor, speedPercent);
	DCMotorBackward(&dcvehicle->leftMotor, speedPercent);
}

