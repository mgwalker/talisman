#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Halfling	CHR_Halfling
@returns	void
@desc		"Halfling character class constructor"
****************************************************************************@*/
CHR_Halfling::CHR_Halfling()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Halfling";
	_location = TILE_VILLAGE;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Halfling
@RETURNS	void
@DESC		"Performs preroll functions for the Halfling character."
****************************************************************************@*/
void CHR_Halfling::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Halfling
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Halfling character."
****************************************************************************@*/
short int CHR_Halfling::charRoll()
{
	return roll(_dice);
}