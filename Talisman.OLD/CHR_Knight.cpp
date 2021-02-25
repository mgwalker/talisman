#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Knight	CHR_Knight
@returns	void
@desc		"Knight character class constructor"
****************************************************************************@*/
CHR_Knight::CHR_Knight()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = GOOD;
	_craft = 3;
	_name = "Knight";
	_location = TILE_CHAPEL;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Knight
@RETURNS	void
@DESC		"Performs preroll functions for the Knight character."
****************************************************************************@*/
void CHR_Knight::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Knight
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Knight character."
****************************************************************************@*/
short int CHR_Knight::charRoll()
{
	return roll(_dice);
}