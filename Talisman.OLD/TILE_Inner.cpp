/************************************************
 *												*
 * Talisman Tile Class Definition				*
 *												*
 * Defines special Inner Region Tiles.			*
 *												*
 ************************************************/
#include "stdInclude.h"

/*@****************************************************************************
@function	PlainOfPeril	PlainOfPeril
@returns	void
@desc		"Plain Of Peril card constructor"
****************************************************************************@*/
PlainOfPeril::PlainOfPeril()
{
	_id = 0;
	_cardLimit = 0;
	_name = "Plain of Peril";
}

/*@****************************************************************************
@function	Run		PlainOfPeril
@returns	void
@desc		"PlainOfPeril's card run function"
****************************************************************************@*/
void PlainOfPeril::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Crypt	Crypt
@returns	void
@desc		"Crypt card constructor"
****************************************************************************@*/
Crypt::Crypt()
{
	_id = 1;
	_cardLimit = 0;
	_name = "Crypt";
}

/*@****************************************************************************
@function	Run		Crypt
@returns	void
@desc		"Crypt's card run function"
****************************************************************************@*/
void Crypt::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	DiceWithDeath	DiceWithDeath
@returns	void
@desc		"Dice With Death card constructor"
****************************************************************************@*/
DiceWithDeath::DiceWithDeath()
{
	_id = 2;
	_cardLimit = 0;
	_name = "Dice with Death";
}

/*@****************************************************************************
@function	Run		DiceWithDeath
@returns	void
@desc		"Dice With Death's card run function"
****************************************************************************@*/
void DiceWithDeath::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	WerewolfDen	WerewolfDen
@returns	void
@desc		"Werewolf Den card constructor"
****************************************************************************@*/
WerewolfDen::WerewolfDen()
{
	_id = 3;
	_cardLimit = 0;
	_name = "Werewolf Den";
}

/*@****************************************************************************
@function	Run		WerewolfDen
@returns	void
@desc		"Werewolf Den's card run function"
****************************************************************************@*/
void WerewolfDen::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	ValleyOfFire	ValleyOfFire
@returns	void
@desc		"The Valley of Fire card constructor"
****************************************************************************@*/
ValleyOfFire::ValleyOfFire()
{
	_id = 4;
	_cardLimit = 0;
	_name = "The Valley of Fire";
}

/*@****************************************************************************
@function	Run		ValleyOfFire
@returns	void
@desc		"The Valley Of Fire's card run function"
****************************************************************************@*/
void ValleyOfFire::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	ThePits	ThePits
@returns	void
@desc		"The Pits card constructor"
****************************************************************************@*/
ThePits::ThePits()
{
	_id = 5;
	_cardLimit = 0;
	_name = "The Pits";
}

/*@****************************************************************************
@function	Run		ThePits
@returns	void
@desc		"The Pits's card run function"
****************************************************************************@*/
void ThePits::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	VampiresTower	VampiresTower
@returns	void
@desc		"Vampire's Tower card constructor"
****************************************************************************@*/
VampiresTower::VampiresTower()
{
	_id = 6;
	_cardLimit = 0;
	_name = "Vampire's Tower";
}

/*@****************************************************************************
@function	Run		VampiresTower
@returns	void
@desc		"Vampires Tower's card run function"
****************************************************************************@*/
void VampiresTower::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	TheMines	TheMines
@returns	void
@desc		"The Mines card constructor"
****************************************************************************@*/
TheMines::TheMines()
{
	_id = 7;
	_cardLimit = 0;
	_name = "The Mines";
}

/*@****************************************************************************
@function	Run		TheMines
@returns	void
@desc		"The Mines's card run function"
****************************************************************************@*/
void TheMines::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

