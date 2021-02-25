#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Prophetess	CHR_Prophetess
@returns	void
@desc		"Prophetess character class constructor"
****************************************************************************@*/
CHR_Prophetess::CHR_Prophetess()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 4;
	_name = "Prophetess";
	_location = TILE_CHAPEL;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Prophetess
@RETURNS	void
@DESC		"Performs preroll functions for the Prophetess character."
****************************************************************************@*/
void CHR_Prophetess::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Prophetess
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Prophetess character."
****************************************************************************@*/
short int CHR_Prophetess::charRoll()
{
	return roll(_dice);
}