/*
 * sprite.h
 *
 * Contains functions to retrieve sprite data
 *
 *  Created on: Sep 20, 2016
 *      Author: superman
 */

#ifndef SPRITE_H_
#define SPRITE_H_

#include <stdint.h>		//For integer types

typedef struct
{
	uint16_t width;
	uint16_t height;
	uint32_t *sprite_data;
} sprite_data_t;

//Returns saucer sprite
sprite_data_t sprite_getSaucer();

//Returns alien explosion sprite
sprite_data_t sprite_getAlienExplosion();

//Returns alien top in sprite
sprite_data_t sprite_getAlienTopIn();

//Returns alien top out sprite
sprite_data_t sprite_getAlienTopOut();

//Returns alien middle in sprite
sprite_data_t sprite_getAlienMiddleIn();

//Returns alien middle out sprite
sprite_data_t sprite_getAlienMiddleOut();

//Returns alien bottom in sprite
sprite_data_t sprite_getAlienBottomIn();

//Returns alien bottom out sprite
sprite_data_t sprite_getAlienBottomOut();

//Returns tank sprite
sprite_data_t sprite_getTank();

//Returns tank sprite Left
sprite_data_t sprite_getTankLeft();

//Returns bunker sprite
sprite_data_t sprite_getBunker();

//Returns bunker damage 0 sprite
sprite_data_t sprite_getBunkerDamage0();

//Returns bunker damage 1 sprite
sprite_data_t sprite_getBunkerDamage1();

//Returns bunker damage 2 sprite
sprite_data_t sprite_getBunkerDamage2();

//Returns bunker damage 3 sprite
sprite_data_t sprite_getBunkerDamage3();

#endif /* SPRITE_H_ */
