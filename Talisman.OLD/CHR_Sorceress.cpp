#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Sorceress	CHR_Sorceress
@returns	void
@desc		"Sorceress character class constructor"
****************************************************************************@*/
CHR_Sorceress::CHR_Sorceress()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = EVIL;
	_craft = 2;
	_name = "Sorceress";
	_location = TILE_GRAVEYARD;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Sorceress
@RETURNS	void
@DESC		"Performs preroll functions for the Sorceress character."
****************************************************************************@*/
void CHR_Sorceress::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Sorceress
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Sorceress character."
****************************************************************************@*/
short int CHR_Sorceress::charRoll()
{
	return roll(_dice);
}