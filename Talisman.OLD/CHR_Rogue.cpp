#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Rogue	CHR_Rogue
@returns	void
@desc		"Rogue character class constructor"
****************************************************************************@*/
CHR_Rogue::CHR_Rogue()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = EVIL;
	_craft = 3;
	_name = "Rogue";
	_location = TILE_TAVERN;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Rogue
@RETURNS	void
@DESC		"Performs preroll functions for the Rogue character."
****************************************************************************@*/
void CHR_Rogue::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Rogue
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Rogue character."
****************************************************************************@*/
short int CHR_Rogue::charRoll()
{
	return roll(_dice);
}