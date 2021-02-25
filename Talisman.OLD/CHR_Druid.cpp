#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Druid	CHR_Druid
@returns	void
@desc		"Druid character class constructor"
****************************************************************************@*/
CHR_Druid::CHR_Druid()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = NEUTRAL;
	_craft = 4;
	_name = "Druid";
	_location = TILE_FOREST;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Druid
@RETURNS	void
@DESC		"Performs preroll functions for the Druid character."
****************************************************************************@*/
void CHR_Druid::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Druid
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Druid character."
****************************************************************************@*/
short int CHR_Druid::charRoll()
{
	return roll(_dice);
}