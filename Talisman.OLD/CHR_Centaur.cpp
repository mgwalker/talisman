#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Centaur	CHR_Centaur
@returns	void
@desc		"Centaur character class constructor"
****************************************************************************@*/
CHR_Centaur::CHR_Centaur()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Centaur";
	_location = 3;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Centaur
@RETURNS	void
@DESC		"Performs preroll functions for the Centaur character."
****************************************************************************@*/
void CHR_Centaur::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Centaur
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Centaur character."
****************************************************************************@*/
short int CHR_Centaur::charRoll()
{
	return roll(_dice);
}