#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Monk	CHR_Monk
@returns	void
@desc		"Monk character class constructor"
****************************************************************************@*/
CHR_Monk::CHR_Monk()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 3;
	_name = "Monk";
	_location = TILE_VILLAGE;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Monk
@RETURNS	void
@DESC		"Performs preroll functions for the Monk character."
****************************************************************************@*/
void CHR_Monk::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Monk
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Monk character."
****************************************************************************@*/
short int CHR_Monk::charRoll()
{
	return roll(_dice);
}