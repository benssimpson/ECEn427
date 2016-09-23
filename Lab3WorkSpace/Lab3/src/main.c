/*
 * main.c
 *
 * Runs our main program
 *
 *  Created on: Sep 20, 2016
 *      Author: superman
 */

#include "platform.h"
#include "graphics.h"	//For graphics
#include "sprite.h"		//For testing sprites
#include "controllers/tank.h"		//For testing tanks
#include "controllers/aliens.h"		//For testing aliens
#include "controllers/bunker.h"		//For testing bunkers
#include <stdbool.h>	//for booleans
#include <stdio.h>		//For output messages

int main()
{
	init_platform();        	// Necessary for all programs.
	graphics_init();			//Initialize graphics
	graphics_clear_screen();	//Clear the screen

	tank_init();
	aliens_init();
	bunker_init();

	graphics_drawFullTank(false);
	graphics_drawFullBunkers();
	volatile int j;

	bool left = true;

	while(1)
	{
		int i;
		for(i = 0; i < 200; i++)
		{
			if((i % 5) == 0)
			{
				//xil_printf("Updating aliens\r\n");
				//aliens_updatePosition();
				//graphics_updateAliens();
			}
			tank_updatePosition(left);
			graphics_updateTank();
			for(j = 0; j < 500000; j++);
		}
		left = !left;
	}

	return 0;	//Because there's a warning otherwise
}
