#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_WarriorOfChaos	CHR_WarriorOfChaos
@returns	void
@desc		"WarriorOfChaos character class constructor"
****************************************************************************@*/
CHR_WarriorOfChaos::CHR_WarriorOfChaos()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = EVIL;
	_craft = 2;
	_name = "Warrior of Chaos";
	_location = 16; //RUINS
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_WarriorOfChaos
@RETURNS	void
@DESC		"Performs preroll functions for the WarriorOfChaos character."
****************************************************************************@*/
void CHR_WarriorOfChaos::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_WarriorOfChaos
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the WarriorOfChaos character."
****************************************************************************@*/
short int CHR_WarriorOfChaos::charRoll()
{
	return roll(_dice);
}