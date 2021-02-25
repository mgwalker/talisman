/************************************************
 *												*
 * Talisman Base Character Class Definition		*
 *												*
 * Defines the base class for all other			*
 * Character classes.							*
 *												*
 ************************************************/

#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	Character	Character
@RETURNS	void
@DESC		"Character class constructor. Sets some initial values that are true
			 for all characters."
****************************************************************************@*/	
Character::Character()
{	
	_lives = 4;
	_region = 0;
	_dice = 1;
	_gold = 1;
	_strExp = 0;
	_craftExp = 0;
	_alive = true;
	_missTurns = 0;
}

/*@****************************************************************************
@function	chkAlive	Character
@returns	bool		"True is character is alive or false if the character is dead."
@desc		"Returns true or false depending on whether or not the character is alive."
****************************************************************************@*/	
bool Character::chkAlive()
{
	if(_alive == true)
		return true;
	else if(_alive == false)
		return false;
	else
		return false;
}

/*@****************************************************************************
@function	chkMissTurns	Character
@returns	bool		"True if character needs to miss a turn."
@desc		"Returns true or false depending if the character misses a turn or not.
			If true, the function also subtracts one from miss turns."
****************************************************************************@*/	
bool Character::chkMissTurns()
{
	if(_missTurns > 0)
	{
		modMissTurns(-1);
		return true;
	}
	else
		return false;
}

/*@****************************************************************************
@function	modMissTurns	Character
@returns	void
@desc		"Adds the specified number, "num", to _missTurns. Add negative num to subtract."
****************************************************************************@*/	
void Character::modMissTurns(short int num)
{
	_missTurns = _missTurns + num;
}

/*@****************************************************************************
@function	display		Character
@returns	void
@desc		"Displays player stats."
****************************************************************************@*/
void Character::display()
{
	string _reg="", _loc="", _aln="";

	if(currentPlayer->getRegion()==OUTER_REGION)
	{
		_reg = "Outer";
		switch(currentPlayer->getLocation())
		{
			case 0:	_loc = "City"; break;
			case 1:	_loc = "Fields"; break;
			case 2: _loc = "Woods"; break;
			case 3: _loc = "Plains"; break;
			case 4:	_loc = "Crags"; break;
			case 5: _loc = "Fields"; break;
			case 6:	_loc = "Chapel"; break;
			case 7:	_loc = "Hills"; break;
			case 8:	_loc = "Sentinel";	break;
			case 9:	_loc = "Woods"; break;
			case 10: _loc = "Graveyard"; break;
			case 11: _loc = "Fields"; break;
			case 12: _loc = "Village";	break;
			case 13: _loc = "Fields"; break;
			case 14: _loc = "Forest"; break;
			case 15: _loc = "Plains"; break;
			case 16: _loc = "Ruins"; break;
			case 17: _loc = "Fields"; break;
			case 18: _loc = "Tavern"; break;
			case 19: _loc = "Plains"; break;
			case 20: _loc = "Woods"; break;
			case 21: _loc = "Plains"; break;
			case 22: _loc = "Hills"; break;
			case 23: _loc = "Fields"; break;
		}
	}
	else if(currentPlayer->getRegion()==MIDDLE_REGION)
	{
		_reg = "Middle";
		switch(currentPlayer->getLocation())
		{
			case 0: _loc = "Warlock's Cave"; break;
			case 1: _loc = "Runes"; break;
			case 2:	_loc = "Chasm"; break;
			case 3:	_loc = "Runes"; break;
			case 4:	_loc = "Cursed Glade"; break;
			case 5: _loc = "Hills"; break;
			case 6:	_loc = "Hidden Valley"; break;
			case 7:	_loc = "Black Knight";	break;
			case 8:	_loc = "Portal of Power"; break;
			case 9:	_loc = "Castle"; break;
			case 10: _loc = "Runes"; break;
			case 11: _loc = "Woods"; break;
			case 12: _loc = "Temple"; break;
			case 13: _loc = "Desert"; break;
			case 14: _loc = "Oasis"; break;
			case 15: _loc = "Desert"; break;	
		}
	}
	else if(currentPlayer->getRegion()==INNER_REGION)
	{
		_reg = "Inner";
		switch(currentPlayer->getLocation())
		{
			case 0:	_loc = "Plain of Peril"; break;
			case 1:	_loc = "Crypt"; break;
			case 2:	_loc = "Dice with Death"; break;
			case 3: _loc = "Werewolf Den";	break;
			case 4:	_loc = "Valley of Fire"; break;
			case 5:	_loc = "The Pits";	break;
			case 6: _loc = "Vampire's Tower"; break;
			case 7:	_loc = "The Mines"; break;
		}
	}

	if(currentPlayer->getAlign()==NEUTRAL)
		_aln = "Neutral";
	else if(currentPlayer->getAlign()==GOOD)
		_aln = "Good";
	else if(currentPlayer->getAlign()==EVIL)
		_aln = "Evil";

	cout << "\n================================================================================";
	cout << "Name  : " << _name; 
	cout << "\nStr   : " << _str << "\tCraft : " << _craft
		 << "\tGold  : " << _gold << "\tLives : " << _lives;
	cout << "\nS_Exp : " << _strExp << "\tC_Exp : " << _craftExp;
	cout << "\tAlign : " << _aln;
	cout << "\tMap   : " << _loc << ", " << _reg;
	cout << "\n================================================================================";
}

/*@****************************************************************************
@function	getAlign	Character
@returns	short int	"The character's alignment"
@desc		"Returns the character's alignment"
****************************************************************************@*/	
short int Character::getAlign()
{
	return _align;
}

/*@****************************************************************************
@function	getCraft	Character
@returns	short int	"The character's craft"
@desc		"Returns the character's craft"
****************************************************************************@*/	
short int Character::getCraft()
{
	return _craft;
}

/*@****************************************************************************
@function	getGold		Character
@returns	short int	"The character's gold"
@desc		"Returns the character's gold"
****************************************************************************@*/	
short int Character::getGold()
{
	return _gold;
}

/*@****************************************************************************
@FUNCTION	getID		Character
@Returns	short int	"The character's ID"
@Desc		"Returns the character's ID"
****************************************************************************@*/	
short int Character::getId()
{
	return _id;
}

/*@****************************************************************************
@function	getLive		Character
@returns	short int	"The number of lives the character has"
@desc		"Returns the number of lives the character has"
****************************************************************************@*/	
short int Character::getLives()
{
	return _lives;
}

/*@****************************************************************************
@FUNCTION	getLocation		Character
@RETURNS	short int		"The character's current location"
@DESC		"Returns the character's current location"
****************************************************************************@*/	
short int Character::getLocation()
{
	return _location;
}

/*@****************************************************************************
@function	getName	Character
@returns	string	"The character's name"
@desc		"Returns the character's name"
****************************************************************************@*/	
string Character::getName()
{
	return _name;
}

/*@****************************************************************************
@function	getRegion	Character
@returns	in			"The character's current region"
@desc		"Returns the character's current region"
****************************************************************************@*/	
short int Character::getRegion()
{
	return _region;
}

/*@****************************************************************************
@function	getStr		Character
@returns	short int	"The character's strength"
@desc		"Returns the character's strength"
****************************************************************************@*/	
short int Character::getStr()
{
	return _str;
}

/*@****************************************************************************
@function	modAlign	Character
@param		short int	align "The new character alignment"
@returns	void
@desc		"Sets a character's alignment"
****************************************************************************@*/	
void Character::modAlign(short int align)
{
	_align = align;
}

/*@****************************************************************************
@function	modCraft	Character
@param		short int	craft	"Value to change the character's craft"
@returns	void
@desc		"Modifies a character's craft"
****************************************************************************@*/	
void Character::modCraft(short int craft)
{
	_craft = craft + _craft;
	if(_craft > 99)
		_craft = 99;

	if(_craft < 1)
		_craft = _dCraft;
}

/*@****************************************************************************
@function	modExp	Character
@param		char	op	"What type of operation to perform"
@param		short int	num		"Amount to change"
@returns	void
@desc		"Modifies a character's strength or craft experience, depending on
			 the value of op.  If op is 's' then change the character's
			 strength by the value in num.  If op is 'c' then change the
			 character's craft."
****************************************************************************@*/	
void Character::modExp(char op, short int num)
{
	if(op=='s')
	{
		_strExp = num + _strExp;
		if(_strExp>=7 && _str < 99)
		{
			_str++;
			_strExp -= 7;
		}
	}
	else if(op=='c')
	{
		_craftExp = num + _craftExp;
		if(_craftExp>=10 && _craft < 99)
		{
			_craft++;
			_craftExp -= 10;
		}
	}
	else
	{
		cout << "There is a bug in the code!!!";
		exit(1);
	}
}

void Character::modFollower(char op, Acards *follower)
{
	if(op=='+')
		_followers.push_back(follower);

	else if(op=='-')
		_followers.erase(_followers.exists(follower));

	else
		cout << "modFollower in Character class isn't working.";
}

/*@****************************************************************************
@function	modGold	Character
@param		short int	gold	"Value to change the character's gold"
@returns	void
@desc		"Modifies the amount of gold a character has"
****************************************************************************@*/	
void Character::modGold(short int gold)
{
	_gold = gold + _gold;
	if(_gold > 99)
		_gold = 99;
	if(_gold < 0)
		_gold = 0;
}

/*@****************************************************************************
@function	modLives	Character
@param		short int	lives	"Value to change the character's lives"
@returns	void
@desc		"Modifies the number of lives a player has"
****************************************************************************@*/	
void Character::modLives(short int lives)
{
	_lives = lives + _lives;
	if(_lives > 99)
		_lives = 99;
	if(_lives < 1)
		_alive = false;
}

/*@****************************************************************************
@function	modLocation	Character
@param		short int	newLocation	"The character's new location"
@returns	void
@desc		"Changes a character's location"
****************************************************************************@*/	
void Character::modLocation(short int newLocation)
{
	_location = newLocation;
}

void Character::modObject(char op, Acards *object)
{
	if(op=='+')
		_objects.push_back(object);

	else if(op=='-')
		_objects.erase(_objects.exists(object));

	else
		cout << "modObject in Character class isn't working.";
}

/*@****************************************************************************
@function	modStr	Character
@param		short int	str		"Value to change the character's strength"
@returns	void
@desc		"Modifies a character's strength"
****************************************************************************@*/	
void Character::modStr(short int str)
{
	_str = str + _str;
	if(_str > 99)
		_lives = 99;
	if(_str < 1)
		_str = _dStr;
}

/*@****************************************************************************
@function	modRegion	Character
@param		short int	str		"Value to change the character's region"
@returns	void
@desc		"Modifies a character's region"
****************************************************************************@*/	
void Character::modRegion(short int region)
{
	_region = region;
}