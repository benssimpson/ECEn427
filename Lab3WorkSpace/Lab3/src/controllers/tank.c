/*
 * tank.c
 *
 *  Created on: Sep 21, 2016
 *      Author: superman
 */

#include "tank.h"

static tank_graphics tank_curr;	//Current tank position
static tank_graphics tank_prev;	//Previous tank position (for erasing graphics)

#define START_POSITION 152	//Start tank in middle of screen
#define MOVEMENT_OFFSET 2	//Move tank by this much when it is moved

#define TANK_X_MIN 0		//Minimum allowed x coordinate
#define TANK_X_MAX 304		//Maximum allowed x coordinate

//Initialize the tank memory
void tank_init()
{
	//Set both variables to starting position
	tank_curr.x = START_POSITION;
	tank_prev.x = START_POSITION;
}

//update the current tank position
void tank_updatePosition(bool left)
{
	tank_prev.x = tank_curr.x;	//Update previous value
	if(left)	//Check if tank moved left
	{
		tank_curr.x = tank_curr.x - MOVEMENT_OFFSET;	//Move tank left
		//check the bounds of tank.x against boundary value
		if(tank_curr.x < TANK_X_MIN)
		{
			//set the tank.x to boundary value
			tank_curr.x = TANK_X_MIN;
		}
	}
	else
	{
		tank_curr.x = tank_curr.x + MOVEMENT_OFFSET;	//Move tank right
		//check the bounds of tank.x against boundary value
		if(tank_curr.x > TANK_X_MAX)
		{
			//set the tank.x to boundary value
			tank_curr.x = TANK_X_MAX;
		}
	}

}
//get the current tank position
uint16_t tank_getPosition()
{
	return tank_curr.x;
}
//get the previous tank position
uint16_t tank_getPreviousPosition()
{
	return tank_prev.x;
}
