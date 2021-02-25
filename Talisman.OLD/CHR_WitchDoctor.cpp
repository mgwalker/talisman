#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_WitchDoctor	CHR_WitchDoctor
@returns	void
@desc		"WitchDoctor character class constructor"
****************************************************************************@*/
CHR_WitchDoctor::CHR_WitchDoctor()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = EVIL;
	_craft = 4;
	_name = "Witch Doctor";
	_location = TILE_GRAVEYARD;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_WitchDoctor
@RETURNS	void
@DESC		"Performs preroll functions for the WitchDoctor character."
****************************************************************************@*/
void CHR_WitchDoctor::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_WitchDoctor
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the WitchDoctor character."
****************************************************************************@*/
short int CHR_WitchDoctor::charRoll()
{
	return roll(_dice);
}