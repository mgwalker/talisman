#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Gladiator	CHR_Gladiator
@returns	void
@desc		"Gladiator character class constructor"
****************************************************************************@*/
CHR_Gladiator::CHR_Gladiator()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = EVIL;
	_craft = 2;
	_name = "Gladiator";
	_location = TILE_TAVERN;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Gladiator
@RETURNS	void
@DESC		"Performs preroll functions for the Gladiator character."
****************************************************************************@*/
void CHR_Gladiator::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Gladiator
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Gladiator character."
****************************************************************************@*/
short int CHR_Gladiator::charRoll()
{
	return roll(_dice);
}