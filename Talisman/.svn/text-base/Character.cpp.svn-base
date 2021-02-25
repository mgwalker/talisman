
#include "GameBoard.h"
#include "Character.h"
#include "Globals.h"

unsigned short int Character::roll(unsigned short int dice)
{
	// Set the return value to zero
	unsigned short int ret = 0;

	// For each dice, roll and add
	// the value to the return value
	for(short int i = 0; i < dice; i++)
		ret = (rand()%6)+1+ret;
	
	// Return the sum of the dice rolls
	return ret;
}

// Constructor
Character::Character(std::string name, unsigned char str, unsigned char craft, unsigned char startSpells, unsigned char align, Tile* startTile)
{
	_name = name;
	_craft = _startCraft = craft;
	_str = _startStr = str;
	_startSpells = startSpells;
	_alignment = align;
	_lives = 4;
	_gold = 1;
	_currentTile = _startTile = startTile;
	startTile->addPlayer(this);
	for(unsigned char i = 0; i < startSpells; i++)
		spells.append(GLOBALS.SpellDeck->getCard());

	// set anytime function if the character has one
	anytime = Character::nop;
}

// Destructor
Character::~Character()
{
	
}

// modStat
//   Modifies a character's strength, craft, gold,
//   lives, or alignment. Keeps gold and lives at 0 
//   or above. Keeps str and craft at starting value
//   or above.
//
//   stat  - stat being modified
//   value - value to modify stat with
void Character::modStat(unsigned char stat, unsigned char value)
{
	if(stat==STR)
	{
		if(_str + value >= _startStr)
			_str += value;
		else
			_str = _startStr;
	}
	else if(stat==CRAFT)
	{
		if(_craft + value >= _startCraft)
			_craft += value;
		else
			_craft = _startCraft;
	}
	else if(stat==GOLD)
	{
		if(_gold + value >= 0)
			_gold += value;
		else
			_gold = 0;
	}
	else if(stat==ALIGN)
	{
		if(value >=GOOD && value <= NEUTRAL)
			_alignment = value;
	}
	else if(stat==LIVES)
	{
		if(_lives + value >= 0)
			_lives += value;
	}
}

// getStat
//   Returns a character's strength, craft, gold,
//   number of lives, or alignment
//
//   stat  - stat being requested
//   mask  - describes which objects, followers, etc can be applied to the stat
//           the first 4 bits represent the following
//                 3 - Spells allowed
//                 2 - Magic objects allowed
//                 1 - Objects allowed
//                 0 - Followers allowed
unsigned char Character::getStat(unsigned char stat, unsigned char mask)
{
	if(stat==STR)
		return _str;
	else if(stat==CRAFT)
		return _craft;
	else if(stat==GOLD)
		return _gold;
	else if(stat==ALIGN)
		return _alignment;
	else if(stat==LIVES)
		return _lives;

	return 0;
}

void Character::doTurn()
{
	preRoll();
	//uint r = preMove();
	move(roll(1));
	preEncounter();
	encounter();
	endTurn();
}

void Character::preRoll()
{
	uint nextTurnEvents;
	char choice = ' ';

	std::cout << "CURRENT PLAYER:   " << _name << std::endl;
	std::cout << "CURRENT LOCATION: " << _currentTile->name() << std::endl;

	/*	Next-turn events
		spells
		anytime functions */
	
	/** /
	nextTurn.append(Character::nop);
	nextTurnEvents = nextTurn.size();
	for(unsigned int i = 0; i < nextTurnEvents; i++)
	{
		((void(*)(void*))nextTurn[0])(this);
		nextTurn.erase((unsigned int)0);
	}
	//*/

	LinkedList* castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
	
	//anytime(this);

	while(castables->size() > 0 && choice != 'r' && choice != 'R')
	{
		std::cout << "\nCastable spells (" << castables->size() << "):\n";
		for(uint i = 0; i < castables->size(); i++)
		{
			std::cout << "  " << (i+1) << ": ";
			std::cout << ((Spell*)castables[0][i])->name() << std::endl;
		}

		std::cout << "\nAction:\n[R]oll   [C]ast" << std::endl;
		std::cin >> choice;
		while(choice != 'r' && choice != 'R' && !(castables->size() > 0 && (choice == 'c' || choice == 'C')))
			std::cin >> choice;

		if(choice == 'c' || choice == 'C')
		{
			std::cout << "\nChoose a spell: ";

			uint ichoice;
			std::cin >> ichoice;
			ichoice--;
			while(ichoice < 0 || ichoice >= castables->size())
			{
				std::cin >> ichoice;
				ichoice--;
			}

			std::cout << "\nCAST " << ((Spell*)castables[0][ichoice])->name() << std::endl;

			castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
			for(uint i = 0; i < castables->size(); i++)
			{
				std::cout << "  " << (i+1) << ": ";
				std::cout << ((Spell*)castables[0][i])->name() << std::endl;
			}
		}
	}
}

uint Character::preMove()
{
	/*	spells - anytime
		anytime functions */

	char choice = ' ';
	LinkedList* castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
	
	//anytime(this);

	uint r = roll(1);
	std::cout << "You rolled " << r << std::endl;

	while(castables->size() > 0 && choice != 'm' && choice != 'M')
	{
		std::cout << "\nCastable spells (" << castables->size() << "):\n";
		for(uint i = 0; i < castables->size(); i++)
		{
			std::cout << "  " << (i+1) << ": ";
			std::cout << ((Spell*)castables[0][i])->name() << std::endl;
		}

		std::cout << "\nAction:\n[M]ove   [C]ast" << std::endl;
		std::cin >> choice;
		while(choice != 'm' && choice != 'M' && !(castables->size() > 0 && (choice == 'c' || choice == 'C')))
			std::cin >> choice;

		if(choice == 'c' || choice == 'C')
		{
			std::cout << "\nChoose a spell: ";

			uint ichoice;
			std::cin >> ichoice;
			ichoice--;
			while(ichoice < 0 || ichoice >= castables->size())
			{
				std::cin >> ichoice;
				ichoice--;
			}

			std::cout << "\nCAST " << ((Spell*)castables[0][ichoice])->name() << std::endl;

			castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
			for(uint i = 0; i < castables->size(); i++)
			{
				std::cout << "  " << (i+1) << ": ";
				std::cout << ((Spell*)castables[0][i])->name() << std::endl;
			}
		}
	}

	return r;
}

void Character::move(uint roll)
{
	std::cout << "You rolled " << roll << std::endl;

	int t1, t2;	// tile 1, tile 2
	t1 = GLOBALS.Board.OUTER_REGION.exists(this->_currentTile) - roll;
	t2 = t1 + (roll << 1);

	if(t1 < 0)
		t1 += GLOBALS.Board.OUTER_REGION.size();
	else if(t1 >= GLOBALS.Board.OUTER_REGION.size())
		t1 -= GLOBALS.Board.OUTER_REGION.size();

	if(t2 < 0)
		t2 += GLOBALS.Board.OUTER_REGION.size();
	else if(t2 >= GLOBALS.Board.OUTER_REGION.size())
		t2 -= GLOBALS.Board.OUTER_REGION.size();

	std::cout << "1: ";
	((Tile*)GLOBALS.Board.OUTER_REGION[t1])->stats();
	std::cout << "2: ";
	((Tile*)GLOBALS.Board.OUTER_REGION[t2])->stats();

	unsigned int choice;
	std::cin >> choice;

	this->_currentTile->removePlayer(this);
	if(choice == 1)
		this->_currentTile = (Tile*)GLOBALS.Board.OUTER_REGION[t1];
	else
		this->_currentTile = (Tile*)GLOBALS.Board.OUTER_REGION[t2];
	this->_currentTile->addPlayer(this);

	//this->_currentTile->Run();
	//*/
}

void Character::preEncounter()
{
	char choice = ' ';
	LinkedList* castables = castableSpells(Spell::CAST_AFTER_MOVE_PRE_ENCOUNTER);
	
	//anytime(this);

	while(castables->size() > 0 && choice != 'e' && choice != 'E')
	{
		std::cout << "\nCastable spells (" << castables->size() << "):\n";
		for(uint i = 0; i < castables->size(); i++)
		{
			std::cout << "  " << (i+1) << ": ";
			std::cout << ((Spell*)castables[0][i])->name() << std::endl;
		}

		std::cout << "\nAction:\n[E]ncounter   [C]ast" << std::endl;
		std::cin >> choice;
		while(choice != 'e' && choice != 'E' && !(castables->size() > 0 && (choice == 'c' || choice == 'C')))
			std::cin >> choice;

		if(choice == 'c' || choice == 'C')
		{
			std::cout << "\nChoose a spell: ";

			uint ichoice;
			std::cin >> ichoice;
			ichoice--;
			while(ichoice < 0 || ichoice >= castables->size())
			{
				std::cin >> ichoice;
				ichoice--;
			}

			std::cout << "\nCAST " << ((Spell*)castables[0][ichoice])->name() << std::endl;

			castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
			for(uint i = 0; i < castables->size(); i++)
			{
				std::cout << "  " << (i+1) << ": ";
				std::cout << ((Spell*)castables[0][i])->name() << std::endl;
			}
		}
	}
}

void Character::encounter()
{
	char choice;
	uint ichoice;

	LinkedList inhabitants = *(_currentTile->getPlayers());
	uint j = 0;
	if(inhabitants.size() > 1)
	{
		std::cout << "Players already on this tile:\n";
		for(uint i = 0; i < inhabitants.size(); i++)
			if(inhabitants[i] != this)
			{
				std::cout << (++j) << ": " << ((Character*)inhabitants[i])->_name << std::endl;
			}
	}

	if(inhabitants.size() > 1)
	{
		std::cout << "\nAction:\n[F]ight a player   Run the [T]ile" << std::endl;
		std::cin >> choice;
		while(choice != 'f' && choice != 'F' && choice != 't' && choice != 'T')
			std::cin >> choice;

		if(choice == 'f' || choice == 'F')
		{
			std::cout << "\nChoose a target: ";
			std::cin >> ichoice;
			while(ichoice <= 0 || ichoice > j)
				std::cin >> ichoice;
			std::cout << "\nYOU VERSUS " << ((Character*)inhabitants[--ichoice])->_name << std::endl;
		}
		else
			_currentTile->Run();
	}
	else
		_currentTile->Run();

}

void Character::endTurn()
{
	char choice = ' ';
	LinkedList* castables = castableSpells(Spell::CAST_AFTER_CARDS);
	
	//anytime(this);

	while(castables->size() > 0 && choice != 'e' && choice != 'E')
	{
		std::cout << "\nCastable spells (" << castables->size() << "):\n";
		for(uint i = 0; i < castables->size(); i++)
		{
			std::cout << "  " << (i+1) << ": ";
			std::cout << ((Spell*)castables[0][i])->name() << std::endl;
		}

		std::cout << "\nAction:\n[E]nd Turn   [C]ast" << std::endl;
		std::cin >> choice;
		while(choice != 'e' && choice != 'E' && !(castables->size() > 0 && (choice == 'c' || choice == 'C')))
			std::cin >> choice;

		if(choice == 'c' || choice == 'C')
		{
			std::cout << "\nChoose a spell: ";

			uint ichoice;
			std::cin >> ichoice;
			ichoice--;
			while(ichoice < 0 || ichoice >= castables->size())
			{
				std::cin >> ichoice;
				ichoice--;
			}

			std::cout << "\nCAST " << ((Spell*)castables[0][ichoice])->name() << std::endl;

			castables = castableSpells(Spell::CAST_START_TURN_PRE_MOVE);
			for(uint i = 0; i < castables->size(); i++)
			{
				std::cout << "  " << (i+1) << ": ";
				std::cout << ((Spell*)castables[0][i])->name() << std::endl;
			}
		}
	}}

LinkedList* Character::castableSpells(uchar when)
{
	LinkedList* ret = new LinkedList();
	uint numSpells = spells.size();
	for(unsigned int i = 0; i < numSpells; i++)
		if(((Spell*)spells[i])->castable(when))
			ret->prepend(spells[i]);

	return ret;
}

// PVP
//    Player Vs. Player Combat
//
//    challenger - pointer to challenging player
//	  mode       - craft or strength
//    rules      - describes which objects, followers, etc can be used by each player
//                 bits 7,6,5,4 describe the current player,  bits 3,2,1,0 describe the opponent player
//                 the 4 bits for each character represent the following
//                 7,3 - Spells allowed
//                 6,2 - Magic objects allowed
//                 5,1 - Objects allowed
//                 4,0 - Followers allowed
//
bool Character::PVP(Character *challenger, unsigned char mode, unsigned char rules)
{
	rules = (SPELLS | MOBJECTS | OBJECTS | FOLLOWERS);
	rules = rules<<4;
	rules += (SPELLS | MOBJECTS | OBJECTS | FOLLOWERS);

	unsigned char thisPlayerScore = this->getStat(mode,rules) + roll(1);
	unsigned char challengerScore = challenger->getStat(mode,rules) + roll(1);

	if(thisPlayerScore > challengerScore)
		return WIN;
	else
		return LOSE;
}

void Character::nop(void* player)
{
}
