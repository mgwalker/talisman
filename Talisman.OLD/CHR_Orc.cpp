#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Orc	CHR_Orc
@returns	void
@desc		"Orc character class constructor"
****************************************************************************@*/
CHR_Orc::CHR_Orc()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = EVIL;
	_craft = 2;
	_name = "Orc";
	_location = TILE_CRAGS;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Orc
@RETURNS	void
@DESC		"Performs preroll functions for the Orc character."
****************************************************************************@*/
void CHR_Orc::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Orc
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Orc character."
****************************************************************************@*/
short int CHR_Orc::charRoll()
{
	return roll(_dice);
}