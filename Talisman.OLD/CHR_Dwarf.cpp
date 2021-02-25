#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Dwarf	CHR_Dwarf
@returns	void
@desc		"Dwarf character class constructor"
****************************************************************************@*/
CHR_Dwarf::CHR_Dwarf()
{
	_region = OUTER_REGION;
	_str = 3;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Dwarf";
	_location = TILE_CRAGS;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Dwarf
@RETURNS	void
@DESC		"Performs preroll functions for the Dwarf character."
****************************************************************************@*/
void CHR_Dwarf::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Dwarf
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Dwarf character."
****************************************************************************@*/
short int CHR_Dwarf::charRoll()
{
	return roll(_dice);
}