/*
 * bunker.c
 *
 *  Created on: Sep 22, 2016
 *      Author: superman
 */


#include "bunker.h"

//bunkers
static bunker_graphics bunkers[BUNKER_NUM_BUNKERS];

#define BUNKER0_X 30	//the x position of the Bunker
#define BUNKER1_X 84	//the x position of the Bunker
#define BUNKER2_X 137	//the x position of the Bunker
#define BUNKER3_X 190	//the x position of the Bunker

//initialze the 4 bunkers
void bunker_init()
{
	//array of starting location for each bunker
	const int16_t startingLocations[] = {BUNKER0_X, BUNKER1_X, BUNKER2_X, BUNKER3_X};
	uint16_t i;	//loop variable
	for(i = 0; i < BUNKER_NUM_BUNKERS; i++)//loop through all bunkers
	{
		//set the starting location of the bunkers
		bunkers[i].x = startingLocations[i];
		uint16_t j;	//loop variable
		for(j = 0 ; j < BUNKER_NUM_TILES; j++)	//loop through each tile for each bunker
		{
			//set the bunker erosion state to be initially whole
			bunkers[i].bunker_tiles[j] = BUNKER_EROSION_STATE_0;
		}
	}

}

//erode bunker of given bunker and tile
void bunker_erode(uint16_t bunkerNumber, uint16_t tileNumber)
{
	//Do this later
}
//get x coordinate of given bunker
int16_t bunker_getX(uint16_t bunkerNumber)
{
	return bunkers[bunkerNumber].x;
}

//Get the erosion state of given bunker and tile
uint16_t bunker_getErosionState(uint16_t bunkerNumber, uint16_t tileNumber)
{
	//Do this later
	return 0;
}
