#ifndef _GAMEBOARD_H
#define _GAMEBOARD_H

#include "Deck.h"

class Tile
{
	public:

		// Constructor
		Tile(void(*funcName)(LinkedList), char* name);

		// Deconstructor
		~Tile();

		// Perform tile operations
		void Run();
		char* name();

		// Add a card to the tile
		void addCard(Card* newCard);
		void addPlayer(void* player);
		void removePlayer(void* player);
		void stats();
		LinkedList* getPlayers();

	private:
		LinkedList	  _cards;					// cards on tile
		unsigned char _numCards;				// number of cards on tile
		LinkedList	  _players;					// players on tile
		unsigned char _numPlayers;				// number of players on card
		void		  (*_tileFunction)(LinkedList);	// ptr to correct tile function
		char*         _name;
		LinkedList	  makeParamList()
		{
			LinkedList	params;	// paramters for tile function
			params.append(&_numCards);
			params.append(&_cards);
			return params;
		}

	public:
		static void draw1CardTile(LinkedList params);
		static void draw2CardTile(LinkedList params);
		static void draw3CardTile(LinkedList params);
		static void City(LinkedList params);
		static void Tavern(LinkedList params);
		static void Forest(LinkedList params);
		static void Village(LinkedList params);
		static void GraveYard(LinkedList params);
		static void Sentinel(LinkedList params);
		static void Chapel(LinkedList params);
		static void Crags(LinkedList params);
		static void Temple(LinkedList params);
		static void RunesPlus2(LinkedList params);
		static void RunesPlus3(LinkedList params);
		static void Castle(LinkedList params);
		static void PortalOfPower(LinkedList params);
		static void BlackKnight(LinkedList params);
		static void Hills(LinkedList params);
		static void CursedGlade(LinkedList params);
		static void Chasm(LinkedList params);
		static void WarlocksCave(LinkedList params);
		static void Desert(LinkedList params);
		static void PlainOfPeril(LinkedList params);
		static void Mines(LinkedList params);
		static void VampiresTower(LinkedList params);
		static void Pits(LinkedList params);
		static void ValleyOfFire(LinkedList params);
		static void WerewolfDen(LinkedList params);
		static void DiceWithDeath(LinkedList params);
		static void Crypt(LinkedList params);
		static void CrownOfCommand(LinkedList params);

};

class GameBoard
{
	public:
		GameBoard();
		~GameBoard();
		CircularList OUTER_REGION;
		CircularList MIDDLE_REGION;
		CircularList INNER_REGION;
		//Tile		 CROWN_OF_COMMAND(Tile::CrownOfCommand,"Crown of Command");
};

#endif