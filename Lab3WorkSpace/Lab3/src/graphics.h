/*
 * graphics.h
 *
 *	Contains functions to draw graphics to the screen
 *
 *  Created on: Sep 20, 2016
 *      Author: superman
 */

#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include "sprite.h"		//For sprite_data_t struct
#include <stdbool.h>	//For booleans
/////////INIT FUNCTIONS/////////////

//Initializes graphics
void graphics_init();

//Clears the screen to black
void graphics_clear_screen();

//Draws a sprite to the screen
void graphics_drawSprite(sprite_data_t sprite, int16_t x, int16_t y, uint32_t color);

//Draws a sprite to the screen reversed
void graphics_drawSpriteReverse(sprite_data_t sprite, int16_t x, int16_t y, uint32_t color);

//Draws full tank
void graphics_drawFullTank(bool erase);

//Draws full set of bunkers
void graphics_drawFullBunkers();

///////////UPDATE OBJECT STATES/////////////

//Update the tank's position
void graphics_updateTank();

//Update the alien block
void graphics_updateAliens();

//Kill alien
void graphics_killAlien();		//Need to implement

///////////TICK FUNCTION////////////

#endif /* GRAPHICS_H_ */
