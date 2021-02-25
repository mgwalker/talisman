#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Ninja	CHR_Ninja
@returns	void
@desc		"Ninja character class constructor"
****************************************************************************@*/
CHR_Ninja::CHR_Ninja()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = EVIL;
	_craft = 3;
	_name = "Ninja";
	_location = 2;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Ninja
@RETURNS	void
@DESC		"Performs preroll functions for the Ninja character."
****************************************************************************@*/
void CHR_Ninja::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Ninja
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Ninja character."
****************************************************************************@*/
short int CHR_Ninja::charRoll()
{
	return roll(_dice);
}