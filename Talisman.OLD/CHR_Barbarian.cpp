#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Barbarian	CHR_Barbarian
@RETURNS	void
@DESC		"Barbarian character class constructor"
****************************************************************************@*/
CHR_Barbarian::CHR_Barbarian()
{
	_region = OUTER_REGION;
	_str = 5;
	_align = NEUTRAL;
	_craft = 1;
	_name = "Barbarian";
	_location = TILE_FOREST;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Barbarian
@RETURNS	void
@DESC		"Performs preroll functions for the Barbarian character."
****************************************************************************@*/
void CHR_Barbarian::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Barbarian
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Barbarian character."
****************************************************************************@*/
short int CHR_Barbarian::charRoll()
{
	return roll(_dice);
}
