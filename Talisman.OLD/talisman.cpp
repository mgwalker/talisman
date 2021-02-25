/************************************
 *									*
 * Talisman Test Driver, v0.2a		*
 * Modified: 1/4/2003				*
 *									*
 * © Copyright 2002, 2003			*
 *									*
 ************************************/
#define TALISMAN_DRIVER

#include "stdInclude.h"

int main(void)
{ 
	//////////////////
	// Seed the RNG //
	//////////////////
	srand((unsigned)time(NULL));

	////////////////////////////
	// Building the Gameboard //
	////////////////////////////
	Region outer_region = new Tile*[24];
	Region middle_region = new Tile*[16];
	Region inner_region = new Tile*[8];

	outer_region = initOuterRegion(outer_region);
	middle_region = initMiddleRegion(middle_region);
	inner_region = initInnerRegion(inner_region);

	cout << "Gameboard initialized...\n";

	currentTile = outer_region[0];

	//////////////////////////////////
	// Creating Adventure card deck //
	//////////////////////////////////
	initACards();
	cout << "Adventure Card Deck initialized... (" << AdventureDeck.size() << " cards)\n";

	/////////////////////////////////////
	// Creating & Initializing Players //
	/////////////////////////////////////
	CircularList players;
	players = initPlayers(players);

	cout << "Characters initialized...\n";

	currentPlayer = (Character*)players.currentNode()->item;

	////////////////////
	// Begin Gameplay //
	////////////////////
	clrscr();
	char choice = 'a';
	short int turn = 1;
	while(choice != 'X' && choice != 'x')
	{	
		do
		{
			while(currentPlayer->chkAlive() == false)
			{

				cout << currentPlayer->getName() << " is dead.\n";
				players.erase(currentPlayer);
				cout << "Player could not be deleted.\n";
				players.forward();
				Node* tmp = players.currentNode();
				currentPlayer = (tmp == NULL) ? NULL : (Character*)tmp->item;
				
				if(currentPlayer==NULL)
				{
					cout << "All players are dead... GAME OVER.\n";
					return 0;
				}

			}

			// skip over all players who need to miss turns 
			while(currentPlayer->chkMissTurns()==true)
			{
				cout << currentPlayer->getName() << " must miss a turn.\n";
				players.forward();
				currentPlayer = (Character*)players.currentNode()->item;
			}

			cout << "\n********************************************************************************";
			cout << "\nTURN #" << turn;
			doTurn(outer_region, middle_region, inner_region);
			turn++;
			players.forward();
			currentPlayer = (Character*)players.currentNode()->item;
			cout << "\n(N)ext turn. E(x)it.";
			cin >> choice;
		}while(choice=='N' || choice=='n');
	}
	return 0;
}