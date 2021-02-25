#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Hobgoblin	CHR_Hobgoblin
@returns	void
@desc		"Hobgoblin character class constructor"
****************************************************************************@*/
CHR_Hobgoblin::CHR_Hobgoblin()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = EVIL;
	_craft = 3;
	_name = "Hobgoblin";
	_location = TILE_CRAGS;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Hobgoblin
@RETURNS	void
@DESC		"Performs preroll functions for the Hobgoblin character."
****************************************************************************@*/
void CHR_Hobgoblin::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Hobgoblin
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Hobgoblin character."
****************************************************************************@*/
short int CHR_Hobgoblin::charRoll()
{
	return roll(_dice);
}