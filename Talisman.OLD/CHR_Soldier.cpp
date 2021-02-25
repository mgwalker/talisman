#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Soldier	CHR_Soldier
@returns	void
@desc		"Soldier character class constructor"
****************************************************************************@*/
CHR_Soldier::CHR_Soldier()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = GOOD;
	_craft = 3;
	_name = "Soldier";
	_location = TILE_CITY;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Soldier
@RETURNS	void
@DESC		"Performs preroll functions for the Soldier character."
****************************************************************************@*/
void CHR_Soldier::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Soldier
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Soldier character."
****************************************************************************@*/
short int CHR_Soldier::charRoll()
{
	return roll(_dice);
}