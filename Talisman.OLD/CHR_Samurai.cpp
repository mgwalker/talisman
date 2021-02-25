#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Samurai	CHR_Samurai
@returns	void
@desc		"Samurai character class constructor"
****************************************************************************@*/
CHR_Samurai::CHR_Samurai()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = NEUTRAL;
	_craft = 2;
	_name = "Samurai";
	_location = TILE_VILLAGE;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Samurai
@RETURNS	void
@DESC		"Performs preroll functions for the Samurai character."
****************************************************************************@*/
void CHR_Samurai::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Samurai
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Samurai character."
****************************************************************************@*/
short int CHR_Samurai::charRoll()
{
	return roll(_dice);
}