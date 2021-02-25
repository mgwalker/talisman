/************************************************
 *												*
 * Talisman Tile Class Definition				*
 *												*
 * Defines special Middle Region Tiles.			*
 *												*
 ************************************************/
#include "stdInclude.h"

/*@****************************************************************************
@function	WarlockCave	WarlockCave
@returns	void
@desc		"WarlockCave card constructor"
****************************************************************************@*/
WarlockCave::WarlockCave()
{
	_id = 0;
	_cardLimit = 0;
	_name = "Warlock's Cave";
}

/*@****************************************************************************
@function	Run		WarlockCave
@returns	void
@desc		"Warlock's Cave card run function"
****************************************************************************@*/
void WarlockCave::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	cout << "You may go on a quest. If you choose to, roll 1 die:\n"
		 << "1: Kill (take 1 life) of another player.\n"
		 << "2: Kill 1 Enemy.\n"
		 << "3: Deliver 1 follower (discard).\n"
		 << "4: Deliver 1 magic object (discard).\n"
		 << "5: Deliver 3 gold (discard).\n"
		 << "6: Deliver 2 gold (discard).\n"
		 << "You must complete your quest. Upon completetion the\n"
		 << "warlock immediately teleports you back here and gives\n"
		 << "you a Talisman as your reward.\n";
	cout << _name << " is not implemented yet.";
	display();
}

/*@****************************************************************************
@function	Runes	Runes
@returns	void
@desc		"Runes card constructor"
****************************************************************************@*/
Runes::Runes(short int addToEnemy, short int idNum)
{
	_addToEnemy = addToEnemy;
	_id = idNum;
	_cardLimit = 1;
	_name = "Runes";
}

/*@****************************************************************************
@function	Run		Runes
@returns	void
@desc		"Runes card run function"
****************************************************************************@*/
void Runes::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Chasm	Chasm
@returns	void
@desc		"Chasm card constructor"
****************************************************************************@*/
Chasm::Chasm()
{
	_id = 2;
	_cardLimit = 0;
	_name = "Chasm";
}

/*@****************************************************************************
@function	Run		Chasm
@returns	void
@desc		"Chasm card run function"
****************************************************************************@*/
void Chasm::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	CursedGlade	CursedGlade
@returns	void
@desc		"Cursed Glade card constructor"
****************************************************************************@*/
CursedGlade::CursedGlade()
{
	_id = 4;
	_cardLimit = 0;
	_name = "Cursed Glade";
}

/*@****************************************************************************
@function	Run		CursedGlade
@returns	void
@desc		"Cursed Glade card run function"
****************************************************************************@*/
void CursedGlade::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	HiddenValley	HiddenValley
@returns	void
@desc		"Hidden Valley card constructor"
****************************************************************************@*/
HiddenValley::HiddenValley()
{
	_id = 6;
	_cardLimit = 3;
	_name = "Hidden Valley";
}

/*@****************************************************************************
@function	Run		HiddenValley
@returns	void
@desc		"HiddenValley card run function"
****************************************************************************@*/
void HiddenValley::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	BlackKnight	BlackKnight
@returns	void
@desc		"Black Knight card constructor"
****************************************************************************@*/
BlackKnight::BlackKnight()
{
	_id = 7;
	_cardLimit = 0;
	_name = "Black Knight";
}

/*@****************************************************************************
@function	Run		BlackKnight
@returns	void
@desc		"BlackKnight card run function"
****************************************************************************@*/
void BlackKnight::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	PortalOfPower	PortalOfPower
@returns	void
@desc		"Portal Of Power card constructor"
****************************************************************************@*/
PortalOfPower::PortalOfPower()
{
	_id = 8;
	_cardLimit = 1;
	_name = "Portal Of Power";
}

/*@****************************************************************************
@function	Run		PortalOfPower
@returns	void
@desc		"Portal Of Power card run function"
****************************************************************************@*/
void PortalOfPower::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Castle	Castle
@returns	void
@desc		"Castle card constructor"
****************************************************************************@*/
Castle::Castle()
{
	_id = 9;
	_cardLimit = 0;
	_name = "Castle";
}

/*@****************************************************************************
@function	Run		Castle
@returns	void
@desc		"Castle card run function"
****************************************************************************@*/
void Castle::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Temple	Temple
@returns	void
@desc		"Temple card constructor"
****************************************************************************@*/
Temple::Temple()
{
	_id = 12;
	_cardLimit = 0;
	_name = "Temple";
}

/*@****************************************************************************
@function	Run		Temple
@returns	void
@desc		"Temple card run function"
****************************************************************************@*/
void Temple::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Desert	Desert
@returns	void
@desc		"Desert card constructor"
****************************************************************************@*/
Desert::Desert(short int idNum)
{
	_id = idNum;
	_cardLimit = 0;
	_name = "Desert";
}

/*@****************************************************************************
@function	Run		Desert
@returns	void
@desc		"Desert card run function"
****************************************************************************@*/
void Desert::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}

/*@****************************************************************************
@function	Oasis	Oasis
@returns	void
@desc		"Oasis card constructor"
****************************************************************************@*/
Oasis::Oasis()
{
	_id = 14;
	_cardLimit = 2;
	_name = "Oasis";
}

/*@****************************************************************************
@function	Run		Oasis
@returns	void
@desc		"Oasis card run function"
****************************************************************************@*/
void Oasis::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	display();
}
