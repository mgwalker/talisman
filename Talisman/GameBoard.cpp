#include "GameBoard.h"
#include "Character.h"
#include "Globals.h"

// Constructor
Tile::Tile(void(*funcName)(LinkedList), char* name)
{
	_numCards = 0;
	_numPlayers = 0;
	_name = name;
	_tileFunction = funcName;
}

// Deconstructor
Tile::~Tile()
{

}

LinkedList* Tile::getPlayers()
{
	 return (LinkedList*)&_players;
}

// Perform tile operations
void Tile::Run()
{
	_tileFunction(makeParamList());
	//for(int i = 0; i < _numPlayers; i++)
	//	((Character*)_players.at(i))->stats();
}

char* Tile::name()
{
	return _name;
}

// Add a card to the tile
void Tile::addCard(Card* newCard)
{
	_cards.append(newCard);
}

void Tile::addPlayer(void* player)
{
	_players.append(((Character*)player));
	_numPlayers++;
}

void Tile::removePlayer(void* player)
{
	if(_numPlayers > 0)
	{
		_players.erase(player);
		_numPlayers--;
	}
}

void Tile::stats()
{
	std::cout << (char*)this->_name << std::endl;
	for(unsigned int i = 0; i < this->_numPlayers; i++)
		std::cout << "\t" << ((Character*)this->_players[i])->_name << std::endl;
	for(unsigned int i = 0; i < this->_numCards; i++)
	{
		std::cout << "\t.";
		((Card*)this->_cards[i])->name();
		std::cout << std::endl;
	}
}

void Tile::draw1CardTile(LinkedList params)
{
	if((unsigned char)params[0] == 0)
		((Card*)GLOBALS.AdventureDeck->getCard())->Run();
	else
	{
		LinkedList cards;
		for(unsigned char i = (unsigned char)params[0]; i > 0; i--)
		{
			cards.append(((LinkedList*)params[1])->at(i));
			((LinkedList*)params[1])->erase(i);
		}

		// sort for priority
		// execute cards

	}

}

void Tile::draw2CardTile(LinkedList params)
{
}

void Tile::draw3CardTile(LinkedList params)
{
}

void Tile::City(LinkedList params)
{
	/*
	You may visit only one of the following:

	Enchantress:
	Roll 1 die.
	1: You are turned into a toad for 3 turns.
	2: You lose 1 strength.
	3: You lose 1 craft.
	4: You gain 1 craft.
	5: You gain 1 strength.
	6: You gain 1 spell.

	Alchemist:
	He will turn any of your objects into gold.
	Discard the objects you choose and take 1 gold for each.

	Doctor:
	He will heal up to 2 lives at the cost of 1 gold each.
	*/
}

void Tile::Tavern(LinkedList params)
{
	/*
	You must roll 1 die with the following results:
	1: You get blind drunk, and collapse in a corner. Miss 1 turn.
	2: You get tipsy and get in a fight with a farmer (Strength 3).
	3: You gamble and lose 1 gold.
	4: You gamble and win 1 gold.
	5: A Wizard offers to teleport you to an outer region space of your choice as your next move.
	6: The boatman offers to ferry you to the temple as your next move.

	*/
}

void Tile::Forest(LinkedList params)
{
	/*
	Roll 1 die.
	1: Attacked by a brigand of strength 4.
	2-3: Lost for 1 turn.
	4-5: Safe.
	6: A Ranger guides you out, gain 1 craft.
	*/

}

void Tile::Village(LinkedList params)
{
	/*
	You may visit 1 only of the following:
	
	Healer:
	The healer will heal lives at the price of 1 gold each, back up to your starting quota.

	Blacksmith:
	The Blacksmith sells the following objects, if available:
	1: Helmet - 2g
	2: Sword  - 2g
	3: Ax     - 3g
	4: Shield - 3g
	5: Armor  - 4g

	Mystic:
	Roll 1 die.
	1-3: Ignored.
	4: If you are evil or neutral, you become good.
	5: Gain 1 Craft.
	6: Gain 1 Spell.
	*/

}

void Tile::GraveYard(LinkedList params)
{
	/*
	If you are good:
	You lose 1 life.

	If you are neutral:
	No effect.

	If you are evil:
	You may invoke the spirits by rolling 1 die.
	1: Miss 1 turn.
	2-4: Heal 1 Life.
	5-6: Gain 1 Spell.
	*/

}

void Tile::Sentinel(LinkedList params)
{
	/*
	Draw 1 card.
	Do not draw a card if there is already one here.
	If you are passing through to cross the bridge to the middle region, draw no card, but you must defeat the Sentinel (Strength 9) to pass through. The Sentinel remains, even if defeated. You do not fight him when leaving the middle region.
	*/
}

void Tile::Chapel(LinkedList params)
{
	/*
	If you are Good:
	You may either be healed free of charge back up to starting 	quota or you may 
	Pray by rolling 1 die.
	1-4: Ignored.
	5: You gain 1 life.
	6: You gain 1 spell.
		
	If you are Neutral:
	You may be healed back up to original quota at the cost of 1
	gold per life.

	If you are Evil:
	You lose 1 life.
	*/

}

void Tile::Crags(LinkedList params)
{
	/*
	Roll 1 die.
	1: Attacked by a spirit of Craft 4.
	2-3: Lost for 1 turn.
	4-5: Safe.
	6: Barbarians lead you out. Gain 1 Strength.
	*/

}

void Tile::Temple(LinkedList params)
{
	/*
	You may pray by rolling 2 dice:
	2: You lose 2 lives.
	3: You lose 1 life.
	4: Lose 1 life or lose 1 follower.
	5: Enslaved: stay here until you roll a 4, 5, or 6 on 1 die for your move. 
	6: Gain 1 Strength.
	7: Gain 1 Craft.
	8-9: Gain 1 Spell.
	10: Gain a Talisman.
	11: Gain 1 life.
	12: Gain 2 lives.
	*/
}

void Tile::RunesPlus2(LinkedList params)
{
	/*
	Draw 1 card.
	Do not draw a card if there is already one here.
	Any enemies that you fight on this space get +2 on their combat die roll.
	*/
}

void Tile::RunesPlus3(LinkedList params)
{
	/*
	Draw 1 card.
	Do not draw a card if there is already one here.
	Any enemies that you fight on this space get +3 on their combat die roll.
	*/
}

void Tile::Castle(LinkedList params)
{
	/*
	Royal Doctor:
	Will heal you back up to your starting quota at the cost of 1 gold per life. If the prince or princess accompanies you, he will heal you free of charge.
	*/
}

void Tile::PortalOfPower(LinkedList params)
{
	/*
	Draw 1 card.
	Do not draw a card if there is already one here.
	If you are trying to pass into the Plain of Peril, you draw no card, but you must either use craft to pick the lock of strength to force it. Decide which ability you are using. Having decided roll 2 dice. If the total is equal to or lower than your chosen ability, go to the Plain of Peril. If it is higher, remain here and lose 1 from your chosen ability.
	*/
}

void Tile::BlackKnight(LinkedList params)
{
	/*
	You must either give up 1 gold (discarding into the stock pile) or lose 1 life.
	*/
}

void Tile::Hills(LinkedList params)
{
	// shoiuld this be a draw 1 ???
}

void Tile::CursedGlade(LinkedList params)
{
	/*
	Draw 1 card.
	Do not draw a card if there is already 1 in this space.
	While on this space, you cannot count any strength or craft points derived from any objects or magic objects, nor may you use any magic objects. Also, you may not cast any spells.
	*/
}

void Tile::Chasm(LinkedList params)
{
	/*
	Roll 1 die for:
	Yourself: A 1 or 2 means you lose a life. 
	Each Follower: A 1 or 2 means that follower is killed (place on discard pile).
	*/

}

void Tile::WarlocksCave(LinkedList params)
{
	/*
	You may go on a quest. If you choose to, roll 1 die:
	1: Kill (Take 1 life) of another player.
	2: Kill 1 enemy.
	3: Deliver 1 follower (discard).
	4: Deliver 1 magic object (discard).
	5: Deliver 3 gold (discard).
	6: Deliver 2 gold (discard).

	You must complete your quest. Upon completion, the warlock immediately teleports you back here (move directly without rolling the die) and gives you a Talisman, if available, as your reward. 
	*/
}

void Tile::Desert(LinkedList params)
{
	/* Lose 1 life. (Unless you have the water bottle.) */
}

void Tile::PlainOfPeril(LinkedList params)
{
	/*
	You must stop here before moving on in the inner region where you only move 1 space per turn.
	*/

}

void Tile::Mines(LinkedList params)
{
	/*
	Roll 3 dice.
	Subtract your current craft from the total of the 3 dice for where you come out:
	0: The Mines
	1: The Plain of Peril
	2-3: The Portal of Power
	4-5: Warlock's Cave
	6+: Tavern
	*/

}

void Tile::VampiresTower(LinkedList params)
{
	/*
	You must roll 1 die to determine how many lives the Vampire takes from you (the Vampire will accept followers instead of lives).
	1-2: Lose 1 life.
	3-4: Lose 2 lives.
	5-6: Lose 3 lives.
	*/
}

void Tile::Pits(LinkedList params)
{
	/*
	Roll 1 die for number of Pit fiends (Strength) here.
	Each turn, fight them 1 by 1 until you lose a life. Move on after all are dead.
	*/
}

void Tile::ValleyOfFire(LinkedList params)
{
	/*
	You must have a talisman to enter. 
	The Crown of Command can only be reached from this space.
	*/
}

void Tile::WerewolfDen(LinkedList params)
{
	/*
	You must roll 2 dice for the Werewolf's strength, and then fight it. 
	If you lose, lose 1 life and you must fight the same Werewolf next turn. 
	You may not move on until you have killed the Werewolf.
	*/
}

void Tile::DiceWithDeath(LinkedList params)
{
	/*
	You must roll 2 dice for yourself and 2 dice for death. 
	If the scores are equal, you must Dice with Death again next turn. 
	If your score is lower, you lose 1 life and must Dice with Death again next turn. 
	If your score is higher, you may move on next turn.
	*/
}

void Tile::Crypt(LinkedList params)
{
	/*
	Roll 3 dice.
	Subtract strength from the total for your exit:
	0: The Crypt
	1: Plain of Peril
	2-3: Portal of Power
	4-5: Warlock's Cave
	6+: City

	If total is negative you may proceed to the next space on your next turn.
	*/

}

void Tile::CrownOfCommand(LinkedList params)
{
}

GameBoard::GameBoard()
{
	OUTER_REGION.prepend(new Tile(Tile::City,"City"));				// 23
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 22
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Woods"));	// 21
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Plains"));	// 20
	OUTER_REGION.prepend(new Tile(Tile::Crags,"Crags"));			// 19
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 18
	OUTER_REGION.prepend(new Tile(Tile::Chapel,"Chapel"));			// 17
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Hills"));	// 16
	OUTER_REGION.prepend(new Tile(Tile::Sentinel,"Sentinel"));		// 15
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Woods"));	// 14
	OUTER_REGION.prepend(new Tile(Tile::GraveYard,"Graveyard"));	// 13
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 12
	OUTER_REGION.prepend(new Tile(Tile::Village,"Village"));		// 11
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 10
	OUTER_REGION.prepend(new Tile(Tile::Forest,"Forest"));			// 9
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Plains"));	// 8
	OUTER_REGION.prepend(new Tile(Tile::draw2CardTile,"Ruins"));	// 7
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 6
	OUTER_REGION.prepend(new Tile(Tile::Tavern,"Tavern"));			// 5
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Plains"));	// 4
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Woods"));	// 3
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Plains"));	// 2
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Hills"));	// 1
	OUTER_REGION.prepend(new Tile(Tile::draw1CardTile,"Fields"));	// 0

	MIDDLE_REGION.prepend(new Tile(Tile::PortalOfPower,"Portal of Power"));
	MIDDLE_REGION.prepend(new Tile(Tile::Castle,"Castle"));
	MIDDLE_REGION.prepend(new Tile(Tile::RunesPlus2,"Runes"));
	MIDDLE_REGION.prepend(new Tile(Tile::draw1CardTile,"Woods"));
	MIDDLE_REGION.prepend(new Tile(Tile::Temple,"Temple"));
	MIDDLE_REGION.prepend(new Tile(Tile::Desert,"Desert"));
	MIDDLE_REGION.prepend(new Tile(Tile::draw2CardTile,"Oasis"));
	MIDDLE_REGION.prepend(new Tile(Tile::Desert,"Desert"));
	MIDDLE_REGION.prepend(new Tile(Tile::WarlocksCave,"Warlock's Cave"));
	MIDDLE_REGION.prepend(new Tile(Tile::RunesPlus2,"Runes"));
	MIDDLE_REGION.prepend(new Tile(Tile::Chasm,"Chasm"));
	MIDDLE_REGION.prepend(new Tile(Tile::RunesPlus3,"Runes"));
	MIDDLE_REGION.prepend(new Tile(Tile::CursedGlade,"Cursed Glade"));
	MIDDLE_REGION.prepend(new Tile(Tile::Hills,"Hills"));
	MIDDLE_REGION.prepend(new Tile(Tile::draw3CardTile,"Hidden Valley"));
	MIDDLE_REGION.prepend(new Tile(Tile::BlackKnight,"Black Knight"));

	INNER_REGION.prepend(new Tile(Tile::PlainOfPeril,"Plain of Peril"));
	INNER_REGION.prepend(new Tile(Tile::Crypt,"Crypt"));
	INNER_REGION.prepend(new Tile(Tile::DiceWithDeath,"Dice with Death"));
	INNER_REGION.prepend(new Tile(Tile::WerewolfDen,"Werewolf Den"));
	INNER_REGION.prepend(new Tile(Tile::ValleyOfFire,"Valley of Fire"));
	INNER_REGION.prepend(new Tile(Tile::Pits,"Pits"));
	INNER_REGION.prepend(new Tile(Tile::VampiresTower,"Vampire's Tower"));
	INNER_REGION.prepend(new Tile(Tile::Mines,"Mines"));
}


GameBoard::~GameBoard()
{

}