#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Wizard	CHR_Wizard
@returns	void
@desc		"Wizard character class constructor"
****************************************************************************@*/
CHR_Wizard::CHR_Wizard()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = EVIL;
	_craft = 5;
	_name = "Wizard";
	_location = TILE_GRAVEYARD;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Wizard
@RETURNS	void
@DESC		"Performs preroll functions for the Wizard character."
****************************************************************************@*/
void CHR_Wizard::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Wizard
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Wizard character."
****************************************************************************@*/
short int CHR_Wizard::charRoll()
{
	return roll(_dice);
}