#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Elf	CHR_Elf
@returns	void
@desc		"Elf character class constructor"
****************************************************************************@*/
CHR_Elf::CHR_Elf()
{
	_region = MIDDLE_REGION;
	_str = 3;
	_align = GOOD;
	_craft = 4;
	_name = "Elf";
	_location = TILE_FOREST;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Elf
@RETURNS	void
@DESC		"Performs preroll functions for the Elf character."
****************************************************************************@*/
void CHR_Elf::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Elf
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Elf character."
****************************************************************************@*/
short int CHR_Elf::charRoll()
{
	return roll(_dice);
}