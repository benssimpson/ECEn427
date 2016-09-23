/*
 * bunker.h
 *
 *  Created on: Sep 22, 2016
 *      Author: superman
 */

#ifndef BUNKER_H_
#define BUNKER_H_

#include <stdint.h>


#define BUNKER_NUM_BUNKERS		4		//Number of bunkers
#define BUNKER_NUM_TILES	10		//Number of bunker tiles

#define BUNKER_EROSION_STATE_0	0		//Erosion state 0 whole
#define BUNKER_EROSION_STATE_1	1		//Erosion state 1 eroded
#define BUNKER_EROSION_STATE_2	2		//Erosion state 2 more eroded
#define BUNKER_EROSION_STATE_3	3		//Erosion state 3 even more eroded
#define BUNKER_EROSION_STATE_4	4		//Erosion state 4 gone

#define BUNKER_Y 				170		//BUNKER vertical position

typedef struct
{
	int16_t x;		//Position of Bunker
	uint16_t bunker_tiles[BUNKER_NUM_TILES];	//Status of which aliens are alive
} bunker_graphics;

//initialze the 4 bunkers
void bunker_init();

//erode bunker of given bunker and tile
void bunker_erode(uint16_t bunkerNumber, uint16_t tileNumber);
//get x coordinate of given bunker
int16_t bunker_getX(uint16_t bunkerNumber);
//Get the erosion state of given bunker and tile
uint16_t bunker_getErosionState(uint16_t bunkerNumber, uint16_t tileNumber);
#endif /* BUNKER_H_ */
