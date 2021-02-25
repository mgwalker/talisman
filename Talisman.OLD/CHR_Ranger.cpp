#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Ranger	CHR_Ranger
@returns	void
@desc		"Ranger character class constructor"
****************************************************************************@*/
CHR_Ranger::CHR_Ranger()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = GOOD;
	_craft = 3;
	_name = "Ranger";
	_location = TILE_VILLAGE;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Ranger
@RETURNS	void
@DESC		"Performs preroll functions for the Ranger character."
****************************************************************************@*/
void CHR_Ranger::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Ranger
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Ranger character."
****************************************************************************@*/
short int CHR_Ranger::charRoll()
{
	return roll(_dice);
}