/*
 * aliens.h
 *
 *  Created on: Sep 21, 2016
 *      Author: superman
 */

#ifndef ALIENS_H_
#define ALIENS_H_



#include <stdint.h>
#include <stdbool.h>

#define ALIENS_ROWS		5		//Number of rows of aliens
#define ALIENS_COLS		11		//Number of columns of aliens
#define NUM_ALIENS		(ALIENS_ROWS*ALIENS_COLS)	//Total number of aliens

#define ALIEN_CELL_WIDTH 	15	//Number of x pixels from start of alien to start of next alien
#define ALIEN_CELL_HEIGHT 	15	//Number of y pixels from start of alien to start of next alien

#define ALIENS_TOP_ROW 0		//Row number of top row
#define ALIENS_BOTTOM_ROW 3		//First row of bottom aliens

typedef struct
{
	int16_t x;		//Position of alien block
	int16_t y;
	bool alien_array[NUM_ALIENS];	//Status of which aliens are alive
} alien_graphics;

//Initialize the memory
void aliens_init();
//update the current position
void aliens_updatePosition();
//get the current x position
uint16_t aliens_getXPosition();
//get the previous x position
uint16_t aliens_getXPreviousPosition();
//get the current y position
uint16_t aliens_getYPosition();
//get the previous y position
uint16_t aliens_getYPreviousPosition();
//Get current status of specified alien (alive = true, dead = false)
bool aliens_getStatus(uint16_t alien);
//Get previous status of specified alien (alive = true, dead = false)
bool aliens_getPreviousStatus(uint16_t alien);



#endif /* ALIENS_H_ */