#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Leprechaun	CHR_Leprechaun
@returns	void
@desc		"Leprechaun character class constructor"
****************************************************************************@*/
CHR_Leprechaun::CHR_Leprechaun()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 4;
	_name = "Leprechaun";
	_location = TILE_FOREST;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Leprechaun
@RETURNS	void
@DESC		"Performs preroll functions for the Leprechaun character."
****************************************************************************@*/
void CHR_Leprechaun::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Leprechaun
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Leprechaun character."
****************************************************************************@*/
short int CHR_Leprechaun::charRoll()
{
	return roll(_dice);
}