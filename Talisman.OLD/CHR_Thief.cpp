#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Thief	CHR_Thief
@returns	void
@desc		"Thief character class constructor"
****************************************************************************@*/
CHR_Thief::CHR_Thief()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Thief";
	_location = TILE_CITY;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Thief
@RETURNS	void
@DESC		"Performs preroll functions for the Thief character."
****************************************************************************@*/
void CHR_Thief::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Thief
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Thief character."
****************************************************************************@*/
short int CHR_Thief::charRoll()
{
	return roll(_dice);
}