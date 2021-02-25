#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Pilgrim	CHR_Pilgrim
@returns	void
@desc		"Pilgrim character class constructor"
****************************************************************************@*/
CHR_Pilgrim::CHR_Pilgrim()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 4;
	_name = "Pilgrim";
	_location = TILE_CHAPEL;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Pilgrim
@RETURNS	void
@DESC		"Performs preroll functions for the Pilgrim character."
****************************************************************************@*/
void CHR_Pilgrim::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Pilgrim
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Pilgrim character."
****************************************************************************@*/
short int CHR_Pilgrim::charRoll()
{
	return roll(_dice);
}