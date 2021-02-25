#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Minstrel	CHR_Minstrel
@returns	void
@desc		"Minstrel character class constructor"
****************************************************************************@*/
CHR_Minstrel::CHR_Minstrel()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = GOOD;
	_craft = 4;
	_name = "Minstrel";
	_location = TILE_TAVERN;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Minstrel
@RETURNS	void
@DESC		"Performs preroll functions for the Minstrel character."
****************************************************************************@*/
void CHR_Minstrel::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Minstrel
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Minstrel character."
****************************************************************************@*/
short int CHR_Minstrel::charRoll()
{
	return roll(_dice);
}