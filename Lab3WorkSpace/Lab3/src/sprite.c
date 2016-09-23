/*
 * sprite.c
 *
 *	Contains sprite definitions
 *
 *  Created on: Sep 20, 2016
 *      Author: superman
 */

#include "sprite.h"
#include <stdint.h>		//For integer types

//These Macro pack bits into single int variables

//packword 24 definition
#define packword24(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23) \
((b23 << 23) | (b22 << 22) | (b21 << 21) | (b20 << 20) | (b19 << 19) | (b18 << 18) | (b17 << 17) | (b16 << 16) |						  \
 (b15 << 15) | (b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

//packword 16 definition
#define packword16(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15) \
((b15 << 15) | (b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

//packword 15 definition
#define packword15(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14) \
((b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

//packword 12 definition
#define packword12(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11) \
((b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

//packword 8 definition
#define packword8(b0,b1,b2,b3,b4,b5,b6,b7) \
((b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

//packword 6 definition
#define packword6(b0,b1,b2,b3,b4,b5) \
((b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

////////////////////////////////////////////////////
//////////////DEFINITIONS OF SPRITES////////////////
///////////////WIDTHS AND HEIGHTS///////////////////

//saucer
#define SAUCER_WIDTH	16
#define SAUCER_HEIGHT	7
static const uint32_t saucer_16x7[] =
{
packword16(0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0),
packword16(0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0),
packword16(0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0),
packword16(0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0),
packword16(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword16(0,0,1,1,1,0,0,1,1,0,0,1,1,1,0,0),
packword16(0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0)
};

//alien explosion
#define ALIEN_EXPLOSION_WIDTH	12
#define ALIEN_EXPLOSION_HEIGHT	10
static const uint32_t alien_explosion_12x10[] =
{
packword12(0,0,0,0,0,0,1,0,0,0,0,0),
packword12(0,0,0,1,0,0,1,0,0,0,1,0),
packword12(1,0,0,1,0,0,0,0,0,1,0,0),
packword12(0,1,0,0,1,0,0,0,1,0,0,0),
packword12(0,0,0,0,0,0,0,0,0,0,1,1),
packword12(1,1,0,0,0,0,0,0,0,0,0,0),
packword12(0,0,0,1,0,0,0,1,0,0,1,0),
packword12(0,0,1,0,0,0,0,0,1,0,0,1),
packword12(0,1,0,0,0,1,0,0,1,0,0,0),
packword12(0,0,0,0,0,1,0,0,0,0,0,0)
};

//Alien Dimensions
#define ALIEN_WIDTH		12
#define ALIEN_HEIGHT	8

//alien top in
static const uint32_t alien_top_in_12x8[] =
{
packword12(0,0,0,0,0,1,1,0,0,0,0,0),
packword12(0,0,0,0,1,1,1,1,0,0,0,0),
packword12(0,0,0,1,1,1,1,1,1,0,0,0),
packword12(0,0,1,1,0,1,1,0,1,1,0,0),
packword12(0,0,1,1,1,1,1,1,1,1,0,0),
packword12(0,0,0,1,0,1,1,0,1,0,0,0),
packword12(0,0,1,0,0,0,0,0,0,1,0,0),
packword12(0,0,0,1,0,0,0,0,1,0,0,0)
};

//alien top out
static const uint32_t alien_top_out_12x8[] =
{
packword12(0,0,0,0,0,1,1,0,0,0,0,0),
packword12(0,0,0,0,1,1,1,1,0,0,0,0),
packword12(0,0,0,1,1,1,1,1,1,0,0,0),
packword12(0,0,1,1,0,1,1,0,1,1,0,0),
packword12(0,0,1,1,1,1,1,1,1,1,0,0),
packword12(0,0,0,0,1,0,0,1,0,0,0,0),
packword12(0,0,0,1,0,1,1,0,1,0,0,0),
packword12(0,0,1,0,1,0,0,1,0,1,0,0)
};

//alien middle in
static const uint32_t alien_middle_in_12x8[] =
{
packword12(0,0,0,1,0,0,0,0,0,1,0,0),
packword12(0,0,0,0,1,0,0,0,1,0,0,0),
packword12(0,0,0,1,1,1,1,1,1,1,0,0),
packword12(0,0,1,1,0,1,1,1,0,1,1,0),
packword12(0,1,1,1,1,1,1,1,1,1,1,1),
packword12(0,1,1,1,1,1,1,1,1,1,1,1),
packword12(0,1,0,1,0,0,0,0,0,1,0,1),
packword12(0,0,0,0,1,1,0,1,1,0,0,0)
};

//alien middle out
static const uint32_t alien_middle_out_12x8[] =
{
packword12(0,0,0,1,0,0,0,0,0,1,0,0),
packword12(0,1,0,0,1,0,0,0,1,0,0,1),
packword12(0,1,0,1,1,1,1,1,1,1,0,1),
packword12(0,1,1,1,0,1,1,1,0,1,1,1),
packword12(0,1,1,1,1,1,1,1,1,1,1,1),
packword12(0,0,1,1,1,1,1,1,1,1,1,0),
packword12(0,0,0,1,0,0,0,0,0,1,0,0),
packword12(0,0,1,0,0,0,0,0,0,0,1,0)
};

//alien bottom out
static const uint32_t alien_bottom_in_12x8[] =
{
packword12(0,0,0,0,1,1,1,1,0,0,0,0),
packword12(0,1,1,1,1,1,1,1,1,1,1,0),
packword12(1,1,1,1,1,1,1,1,1,1,1,1),
packword12(1,1,1,0,0,1,1,0,0,1,1,1),
packword12(1,1,1,1,1,1,1,1,1,1,1,1),
packword12(0,0,1,1,1,0,0,1,1,1,0,0),
packword12(0,1,1,0,0,1,1,0,0,1,1,0),
packword12(0,0,1,1,0,0,0,0,1,1,0,0)
};

//alien bottom out
static const uint32_t alien_bottom_out_12x8[] =
{
packword12(0,0,0,0,1,1,1,1,0,0,0,0),
packword12(0,1,1,1,1,1,1,1,1,1,1,0),
packword12(1,1,1,1,1,1,1,1,1,1,1,1),
packword12(1,1,1,0,0,1,1,0,0,1,1,1),
packword12(1,1,1,1,1,1,1,1,1,1,1,1),
packword12(0,0,0,1,1,0,0,1,1,0,0,0),
packword12(0,0,1,1,0,1,1,0,1,1,0,0),
packword12(1,1,0,0,0,0,0,0,0,0,1,1)
};

//Tank
#define TANK_WIDTH	15
#define TANK_HEIGHT	8
static const uint32_t tank_15x8[] =
{
packword15(0,0,0,0,0,0,0,1,0,0,0,0,0,0,0),
packword15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
packword15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
packword15(0,1,1,1,1,1,1,1,1,1,1,1,1,1,0),
packword15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1)
};

//Tank Redraw
#define TANK_LEFT_WIDTH		8
#define TANK_LEFT_HEIGHT	8
static const uint32_t tankLeft_8x8[] =
{
packword8(0,0,0,0,0,0,0,1),
packword8(0,0,0,0,0,0,1,1),
packword8(0,0,0,0,0,0,1,1),
packword8(0,1,1,0,0,0,0,0),
packword8(1,1,0,0,0,0,0,0),
packword8(1,1,0,0,0,0,0,0),
packword8(1,1,0,0,0,0,0,0),
packword8(1,1,0,0,0,0,0,0)
};


// Shape of the entire bunker.
#define BUNKER_WIDTH	24
#define BUNKER_HEIGHT	18
static const uint32_t bunker_24x18[] =
{
packword24(0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0),
packword24(0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0),
packword24(0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0),
packword24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packword24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1)
};

// These are the blocks that comprise the bunker and each time a bullet
// strikes one of these blocks, you erode the block as you sequence through
// these patterns.
#define BUNKER_TILE_WIDTH 6
#define BUNKER_TILE_HEIGHT 6

static const uint32_t bunkerDamage0_6x6[] = {
packword6(0,1,1,0,0,0),
packword6(0,0,0,0,0,1),
packword6(1,1,0,1,0,0),
packword6(1,0,0,0,0,0),
packword6(0,0,1,1,0,0),
packword6(0,0,0,0,1,0)
};

//bunker damage 1
static const uint32_t bunkerDamage1_6x6[] = {
packword6(1,1,1,0,1,0),
packword6(1,0,1,0,0,1),
packword6(1,1,0,1,1,1),
packword6(1,0,0,0,0,0),
packword6(0,1,1,1,0,1),
packword6(0,1,1,0,1,0)
};

//bunker damage 2
static const uint32_t bunkerDamage2_6x6[] = {
packword6(1,1,1,1,1,1),
packword6(1,0,1,1,0,1),
packword6(1,1,0,1,1,1),
packword6(1,1,0,1,1,0),
packword6(0,1,1,1,0,1),
packword6(1,1,1,1,1,1)
};

//bunker damage 3
static const uint32_t bunkerDamage3_6x6[] = {
packword6(1,1,1,1,1,1),
packword6(1,1,1,1,1,1),
packword6(1,1,1,1,1,1),
packword6(1,1,1,1,1,1),
packword6(1,1,1,1,1,1),
packword6(1,1,1,1,1,1)
};

/////////////////////////////////////////////
////////SPRITE HANDLE FUNCTION DEFS//////////
/////////////////////////////////////////////

//TODO: Fill these out

//Returns saucer sprite
sprite_data_t sprite_getSaucer()
{
	sprite_data_t ret;				//Return value
	ret.width = SAUCER_WIDTH;		//Sprite width
	ret.height = SAUCER_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) saucer_16x7;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien explosion sprite
sprite_data_t sprite_getAlienExplosion()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_EXPLOSION_WIDTH;		//Sprite width
	ret.height = ALIEN_EXPLOSION_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_explosion_12x10;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien top in sprite
sprite_data_t sprite_getAlienTopIn()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_top_in_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien top out sprite
sprite_data_t sprite_getAlienTopOut()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_top_out_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien middle in sprite
sprite_data_t sprite_getAlienMiddleIn()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_middle_in_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien middle out sprite
sprite_data_t sprite_getAlienMiddleOut()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_middle_out_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien bottom in sprite
sprite_data_t sprite_getAlienBottomIn()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_bottom_in_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns alien bottom OUT sprite
sprite_data_t sprite_getAlienBottomOut()
{
	sprite_data_t ret;				//Return value
	ret.width = ALIEN_WIDTH;		//Sprite width
	ret.height = ALIEN_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) alien_bottom_out_12x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns tank sprite
sprite_data_t sprite_getTank()
{
	sprite_data_t ret;				//Return value
	ret.width = TANK_WIDTH;		//Sprite width
	ret.height = TANK_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) tank_15x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns tank sprite Left
sprite_data_t sprite_getTankLeft()
{
	sprite_data_t ret;				//Return value
	ret.width = TANK_LEFT_WIDTH;		//Sprite width
	ret.height = TANK_LEFT_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) tankLeft_8x8;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns bunker sprite
sprite_data_t sprite_getBunker()
{
	sprite_data_t ret;				//Return value
	ret.width = BUNKER_WIDTH;		//Sprite width
	ret.height = BUNKER_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) bunker_24x18;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns bunker damage 0 sprite
sprite_data_t sprite_getBunkerDamage0()
{
	sprite_data_t ret;				//Return value
	ret.width = BUNKER_TILE_WIDTH;		//Sprite width
	ret.height = BUNKER_TILE_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) bunkerDamage0_6x6;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns bunker damage 1 sprite
sprite_data_t sprite_getBunkerDamage1()
{
	sprite_data_t ret;				//Return value
	ret.width = BUNKER_TILE_WIDTH;		//Sprite width
	ret.height = BUNKER_TILE_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) bunkerDamage1_6x6;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns bunker damage 2 sprite
sprite_data_t sprite_getBunkerDamage2()
{
	sprite_data_t ret;				//Return value
	ret.width = BUNKER_TILE_WIDTH;		//Sprite width
	ret.height = BUNKER_TILE_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) bunkerDamage2_6x6;	//Pointer to sprite
	return ret;						//Return sprite data
}

//Returns bunker damage 3 sprite
sprite_data_t sprite_getBunkerDamage3()
{
	sprite_data_t ret;				//Return value
	ret.width = BUNKER_TILE_WIDTH;		//Sprite width
	ret.height = BUNKER_TILE_HEIGHT;		//Sprite height
	ret.sprite_data = (uint32_t *) bunkerDamage3_6x6;	//Pointer to sprite
	return ret;						//Return sprite data
}
