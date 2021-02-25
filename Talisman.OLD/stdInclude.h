/************************************************
 *												*
 * Talisman Standard Include Header File		*
 *												*
 * Performs all necessary #include directives	*
 * and function declarations necessary			*
 * throughout the Talisman code.				*
 *												*
 ************************************************/

#include "linkedlist.h"
#include "acards.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
using namespace std;

#define clrscr() (system("cls"));
#define Region Tile**

#ifndef TALISMAN_DRIVER
	extern LinkedList AdventureDeck;
	extern Character *currentPlayer;
	extern Tile *currentTile;
	extern short int numPlayers;
#else
	LinkedList AdventureDeck;
	Character *currentPlayer;
	Tile *currentTile;
	short int numPlayers;
#endif

#ifndef TALISMAN_CONSTANT_IDENTIFIERS
#define TALISMAN_CONSTANT_IDENTIFIERS
	const short int NEUTRAL	= 1;
	const short int GOOD = 2;
	const short int EVIL = 3;

	const short int TILE_CITY = 0;
	const short int TILE_CRAGS = 4;
	const short int TILE_CHAPEL = 6;
	const short int TILE_GRAVEYARD = 10;
	const short int TILE_VILLAGE = 12;
	const short int TILE_FOREST = 14;
	const short int TILE_RUINS = 16;
	const short int TILE_TAVERN = 18;

	const short int OUTER_REGION = 0;
	const short int MIDDLE_REGION = 1;
	const short int INNER_REGION = 2;

	const short int DECK_GEN = 1;
	const short int DECK_POP = 2;
	const short int DECK_PUSH = 3;
#endif

//////////////////////////////////////////////////////
// Prototypes for commonly used functions           //
// See CPPDOC for utilities to get function details //
//////////////////////////////////////////////////////
#ifndef TALISMAN_FUNCTION_DECLARATIONS
#define TALISMAN_FUNCTION_DECLARATIONS
	short int roll(short int);
	void initACards();
	Region initOuterRegion(Region);
	Region initMiddleRegion(Region);
	Region initInnerRegion(Region);
	CircularList initPlayers(CircularList);
	void doMove(Region, Region, Region);
	void doTurn(Region, Region, Region);
#endif