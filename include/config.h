#ifndef CUSTOM_CONFIG_H
#define CUSTOM_CONFIG_H

//#include "api.h"
#include "main.h"

pros::Controller Controller(CONTROLLER_MASTER);
pros::Imu Inertial(1);                              // port 1
pros::Motor Conveyor(2, MOTOR_GEARSET_18, true);    // port 2, green cartridge, reverse
pros::Motor LadyBrown(18, MOTOR_GEARSET_18, true);  // port 18, green cartridge, reverse

pros::Motor LA(9, MOTOR_GEARSET_6, true);
pros::Motor LB(7, MOTOR_GEARSET_6, true);
pros::Motor LC(8, MOTOR_GEARSET_6, true);
pros::Motor RA(4, MOTOR_GEARSET_6, false);
pros::Motor RB(5, MOTOR_GEARSET_6, false);
pros::Motor RC(6, MOTOR_GEARSET_6, false);

pros::Motor_Group L({-9, -7, -8});            // motor group L with ports 9, 7, 8 all reversed
pros::Motor_Group R({4, 5, 6});               // motor group R with ports 4, 5, 6 all forwards


#endif
