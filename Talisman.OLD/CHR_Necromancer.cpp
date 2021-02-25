#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Necromancer	CHR_Necromancer
@returns	void
@desc		"Necromancer character class constructor"
****************************************************************************@*/
CHR_Necromancer::CHR_Necromancer()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = EVIL;
	_craft = 4;
	_name = "Necromancer";
	_location = TILE_GRAVEYARD;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Necromancer
@RETURNS	void
@DESC		"Performs preroll functions for the Necromancer character."
****************************************************************************@*/
void CHR_Necromancer::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Necromancer
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Necromancer character."
****************************************************************************@*/
short int CHR_Necromancer::charRoll()
{
	return roll(_dice);
}