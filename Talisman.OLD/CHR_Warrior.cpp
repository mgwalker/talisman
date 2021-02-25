#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Warrior	CHR_Warrior
@returns	void
@desc		"Warrior character class constructor"
****************************************************************************@*/
CHR_Warrior::CHR_Warrior()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Warrior";
	_location = TILE_TAVERN;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Warrior
@RETURNS	void
@DESC		"Performs preroll functions for the Warrior character."
****************************************************************************@*/
void CHR_Warrior::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Warrior
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Warrior character."
****************************************************************************@*/
short int CHR_Warrior::charRoll()
{
	return roll(_dice);
}