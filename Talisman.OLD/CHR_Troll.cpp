#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Troll	CHR_Troll
@returns	void
@desc		"Troll character class constructor"
****************************************************************************@*/
CHR_Troll::CHR_Troll()
{
	_region = OUTER_REGION;
	_str = 6;
	_align = NEUTRAL;
	_craft = 1;
	_name = "Troll";
	_location = TILE_CRAGS;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Troll
@RETURNS	void
@DESC		"Performs preroll functions for the Troll character."
****************************************************************************@*/
void CHR_Troll::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Troll
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Troll character."
****************************************************************************@*/
short int CHR_Troll::charRoll()
{
	return roll(_dice);
}