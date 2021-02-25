#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Ghoul	CHR_Ghoul
@returns	void
@desc		"Ghoul character class constructor"
****************************************************************************@*/
CHR_Ghoul::CHR_Ghoul()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = EVIL;
	_craft = 4;
	_name = "Ghoul";
	_location = TILE_GRAVEYARD;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Ghoul
@RETURNS	void
@DESC		"Performs preroll functions for the Ghoul character."
****************************************************************************@*/
void CHR_Ghoul::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Ghoul
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Ghoul character."
****************************************************************************@*/
short int CHR_Ghoul::charRoll()
{
	return roll(_dice);
}