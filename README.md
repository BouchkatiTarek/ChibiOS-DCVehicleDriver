ChibiOS-DCVehicle
=================

ChibiOS/DCVehicle is a small library which use ChibiOS-DCMotor in order to control two DC motors as one robot (use ST L293D).
ChibiOS/DCMotor can be found here https://github.com/BouchkatiTarek/ChibiOS-DCMotorDriver


### License ###

This library stands under the GPLv3 license. You can use, modify and share this code in any situations. The only restriction is that you always have to keep the original license header.

### HowTo use ###

To use this small library, just add the dc_motor.c, dc_motor.h, dc_vehicle.c and dc_vehicle.h files to your project.

First, you have to create an instance of the DVVehicle struct. The DVehicle contains the following informations:

	typedef struct DCVehicle_t{
		DCMotor rightMotor;
		DCMotor leftMotor;
	} DCVehicle;


This instance will be passed to every function which controlls the dcvehicle.
