/*
 * aliens.c
 *
 *	Contains memory for the aliens
 *
 *  Created on: Sep 21, 2016
 *      Author: superman
 */

#include "aliens.h"
#include <stdio.h>	//For testing

#define START_X	60		//Starting x coordinate of alien block
#define START_Y	30		//Starting y coordinate of alien block

//Variables for holding graphics states
static alien_graphics curr_state, prev_state;

//Initialize the memory
void aliens_init()
{
	uint16_t i;	//Looping variable
	curr_state.x = START_X;	//Initialize current x coordinate
	prev_state.x = START_X;	//Initialize previous x coordinate
	curr_state.y = START_Y;	//Initialize current y coordinate
	prev_state.y = START_Y;	//Initialize previous y coordinate
	for(i = 0; i < NUM_ALIENS; i++)	//Loop through alien array
	{
		curr_state.alien_array[i] = true;	//Mark alien as alive
		prev_state.alien_array[i] = true;	//Mark alien as alive
	}
}
//update the current position
void aliens_updatePosition()
{
	prev_state.x = curr_state.x;	//Update previous X variable
	prev_state.y = curr_state.y;	//Update previous Y variable

	//Fake code.  Fix this later
	static int pos_state = 0;
	if(pos_state == 0)
		curr_state.x = curr_state.x + 3;
	else if(pos_state == 1)
		curr_state.y = curr_state.y + 7;
	else if(pos_state == 2)
		curr_state.x = curr_state.x - 3;
	else
		curr_state.y = curr_state.y - 7;

	pos_state++;
	if(pos_state > 3)
		pos_state = 0;
}

//get the current x position
inline uint16_t aliens_getXPosition()
{
	return curr_state.x;
}
//get the previous x position
inline uint16_t aliens_getXPreviousPosition()
{
	return prev_state.x;
}
//get the current y position
inline uint16_t aliens_getYPosition()
{
	return curr_state.y;
}
//get the previous y position
inline uint16_t aliens_getYPreviousPosition()
{
	return prev_state.y;
}
//Get current status of specified alien (alive = true, dead = false)
inline bool aliens_getStatus(uint16_t alien)
{
	xil_printf("Checking alien %d\r\n", alien);
	return curr_state.alien_array[alien];
}
//Get previous status of specified alien (alive = true, dead = false)
inline bool aliens_getPreviousStatus(uint16_t alien)
{
	return prev_state.alien_array[alien];
}
