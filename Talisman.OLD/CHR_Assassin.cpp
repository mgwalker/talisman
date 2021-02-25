#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Assassin	CHR_Assassin
@returns	void
@desc		"Assassin character class constructor"
****************************************************************************@*/
CHR_Assassin::CHR_Assassin()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = EVIL;
	_craft = 3;
	_name = "Assassin";
	_location = TILE_CITY;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Assassin
@RETURNS	void
@DESC		"Performs preroll functions for the Assassin character."
****************************************************************************@*/
void CHR_Assassin::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Assassin
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Assassin character."
****************************************************************************@*/
short int CHR_Assassin::charRoll()
{
	return roll(_dice);
}
