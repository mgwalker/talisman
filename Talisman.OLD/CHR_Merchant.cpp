#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Merchant	CHR_Merchant
@returns	void
@desc		"Merchant character class constructor"
****************************************************************************@*/
CHR_Merchant::CHR_Merchant()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Merchant";
	_location = TILE_CITY;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Merchant
@RETURNS	void
@DESC		"Performs preroll functions for the Merchant character."
****************************************************************************@*/
void CHR_Merchant::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Merchant
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Merchant character."
****************************************************************************@*/
short int CHR_Merchant::charRoll()
{
	return roll(_dice);
}