/*
 * tank.h
 *
 *  Created on: Sep 21, 2016
 *      Author: superman
 */

#ifndef TANK_H_
#define TANK_H_

#include <stdint.h>
#include <stdbool.h>


typedef struct
{
	int16_t x;
} tank_graphics;

//Initialize the tank memory
void tank_init();
//update the current tank position
void tank_updatePosition(bool left);
//get the current tank position
uint16_t tank_getPosition();
//get the previous tank position
uint16_t tank_getPreviousPosition();


#endif /* TANK_H_ */
