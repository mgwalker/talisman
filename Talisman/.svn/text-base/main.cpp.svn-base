#define __MAIN_CPP

#include <iostream>

#include "Deck.h"
#include "GameBoard.h"
#include "Character.h"
#include "Initialize.h"

void main()
{
	srand((unsigned int)time(NULL));

	// INITIALIZE GAME
	GLOBALS.AdventureDeck = initAdventureDeck();
	GLOBALS.SpellDeck = initSpellDeck();
	GLOBALS.Players = initPlayers(3);

	/* RUN ALL CARDS IN ADVENTURE DECK
	for(int i = 0; i < 110; i++)
		(GLOBALS.AdventureDeck->getCard())->Run();
	//*/

	/* RUN ALL CARDS IN SPELL DECK
	for(int i = 0; i < 32; i++)
		(GLOBALS.SpellDeck->getCard())->Run();
	//*/

	/* DISPLAYS OUTER REGION AND WHAT IS PRESENT ON THE TILES
	for(int i = 0; i < 24; i++)
		((Tile*)GLOBALS.Board.OUTER_REGION.at(i))->Run();
	//*/

	/* DISPLAY ALL CHARACTER'S STARTING STATS
	for(int i = 0; i < 3; i++)
	{
		((Character*)GLOBALS.Players->at(i))->stats();
		//GLOBALS.Players->forward();
	}
	//*/

	// GAME LOOP
	//uint counter = 0;
	//uint nextTurnEvents, numSpells;
	//bool castableSpells = false;
	//char choice = 'x';
	Character* player;
	while(true)
	{
		player = (Character*)GLOBALS.Players->current();
		player->doTurn();
		GLOBALS.Players->forward();
		std::cout << "===============================================================================" << std::endl;
	}
		/*
	    // SET BIT FIELD FOR ALL SECTIONS
	    // Unset sections as encountered or as needed to be skipped
		// Ex: After using raft in PRE-ROLL you must skip MOVE

		// PRE-ROLL
			/*	Next-turn events
				spells
				anytime functions * /
			player = (Character*)GLOBALS.Players->current();
			player->nextTurn.append(Character::nop);
			nextTurnEvents = player->nextTurn.size();
			for(unsigned int i = 0; i < nextTurnEvents; i++)
			{
				((void(*)(void*))player->nextTurn[0])(player);
				player->nextTurn.erase((unsigned int)0);
			}

			numSpells = player->spells.size();
			castableSpells = false;
			for(unsigned int i = 0; i < numSpells; i++)
			{
				//((Spell*)player->spells[i])->Run();
				if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
				{
					if(!castableSpells)
					{
						std::cout << "[PRE-ROLL] Castable spells:" << std::endl;
						castableSpells = true;
					}
					std::cout << ((Spell*)player->spells[i])->name() << std::endl;
				}
			}
			
			player->anytime(player);

			if(castableSpells)
			{
				std::cout << "[R]oll   [C]ast" << std::endl;
				std::cin >> choice;
				while(choice != 'r' && choice != 'R' && !(castableSpells && (choice == 'c' || choice == 'C')))
					std::cin >> choice;
			}

			if(choice == 'c' || choice == 'C')
			{
				std::cout << "  :: CAST SPELL ::" << std::endl;
				uint j = 0;
				for(unsigned int i = 0; i < numSpells; i++)
					if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
						std::cout << (++j) << ": " << ((Spell*)player->spells[i])->name() << std::endl;
			}

			uint roll = player->roll(1);


		// POST-ROLL, PRE-MOVE
			/*	spells - anytime
				anytime functions * /
			numSpells = player->spells.size();
			castableSpells = false;
			for(unsigned int i = 0; i < numSpells; i++)
			{
				//((Spell*)player->spells[i])->Run();
				if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
				{
					if(!castableSpells)
					{
						std::cout << "[PRE-ROLL] Castable spells:" << std::endl;
						castableSpells = true;
					}
					std::cout << ((Spell*)player->spells[i])->name() << std::endl;
				}
			}

			player->anytime(player);

		// MOVE
			/*	pick direction
				determine how many dice to roll and what can be added to roll * /
			// MOVE
			player->move(roll);

		// POST MOVE
			/*	spells
				anytime functions * /
			numSpells = player->spells.size();
			castableSpells = false;
			for(unsigned int i = 0; i < numSpells; i++)
			{
				//((Spell*)player->spells[i])->Run();
				if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
				{
					if(!castableSpells)
					{
						std::cout << "[PRE-ROLL] Castable spells:" << std::endl;
						castableSpells = true;
					}
					std::cout << ((Spell*)player->spells[i])->name() << std::endl;
				}
			}

			player->anytime(player);

		// ENCOUNTER
			/*	PVP or Tile
				spells
				anytime functions * /
			// PVP OR TILE
			numSpells = player->spells.size();
			castableSpells = false;
			for(unsigned int i = 0; i < numSpells; i++)
			{
				//((Spell*)player->spells[i])->Run();
				if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
				{
					if(!castableSpells)
					{
						std::cout << "[PRE-ROLL] Castable spells:" << std::endl;
						castableSpells = true;
					}
					std::cout << ((Spell*)player->spells[i])->name() << std::endl;
				}
			}

			player->anytime(player);
		// PRE-END TURN
			/*	spells
				anytime functions * /
			numSpells = player->spells.size();
			castableSpells = false;
			for(unsigned int i = 0; i < numSpells; i++)
			{
				//((Spell*)player->spells[i])->Run();
				if(((Spell*)player->spells[i])->castable(Spell::CAST_START_TURN_PRE_MOVE))
				{
					if(!castableSpells)
					{
						std::cout << "[PRE-ROLL] Castable spells:" << std::endl;
						castableSpells = true;
					}
					std::cout << ((Spell*)player->spells[i])->name() << std::endl;
				}
			}
			player->anytime(player);

		// END TURN
			/*	next player	* /
			GLOBALS.Players->forward();
			std::cout << " ===================================== " << std::endl;
			//std::cout << (++counter) << std::endl;
			*/
	//}

	/* DISPLAYS OUTER REGION AND WHAT IS PRESENT ON THE TILES
	for(int i = 0; i < 24; i++)
		((Tile*)GLOBALS.Board.OUTER_REGION.at(i))->Run();
	//*/

}