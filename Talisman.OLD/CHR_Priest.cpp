#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Priest	CHR_Priest
@returns	void
@desc		"Priest character class constructor"
****************************************************************************@*/
CHR_Priest::CHR_Priest()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 4;
	_name = "Priest";
	_location = TILE_CHAPEL;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Priest
@RETURNS	void
@DESC		"Performs preroll functions for the Priest character."
****************************************************************************@*/
void CHR_Priest::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Priest
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Priest character."
****************************************************************************@*/
short int CHR_Priest::charRoll()
{
	return roll(_dice);
}