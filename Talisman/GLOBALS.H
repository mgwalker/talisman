#ifndef __GLOBALS_H
#define __GLOBALS_H

#define uint  unsigned int
#define uchar unsigned char

#ifndef __MAIN_CPP//GLOBAL_STRUCT_DECLARED
struct GLOBAL_VARIABLES
{
	Deck* AdventureDeck;
	Deck* SpellDeck;
	CircularList* Players;
	GameBoard Board;
};
#endif
extern struct GLOBAL_VARIABLES GLOBALS;

#define TILE_CITY		(Tile*)(GLOBALS.Board.OUTER_REGION.at(23))
#define TILE_CRAGS		(Tile*)(GLOBALS.Board.OUTER_REGION.at(19))
#define TILE_CHAPEL		(Tile*)(GLOBALS.Board.OUTER_REGION.at(17))
#define TILE_GRAVEYARD	(Tile*)(GLOBALS.Board.OUTER_REGION.at(13))
#define TILE_VILLAGE	(Tile*)(GLOBALS.Board.OUTER_REGION.at(11))
#define TILE_FOREST		(Tile*)(GLOBALS.Board.OUTER_REGION.at(9))
#define TILE_RUINS		(Tile*)(GLOBALS.Board.OUTER_REGION.at(7))
#define TILE_TAVERN		(Tile*)(GLOBALS.Board.OUTER_REGION.at(5))

#endif