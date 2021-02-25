#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Philosopher	CHR_Philosopher
@returns	void
@desc		"Philosopher character class constructor"
****************************************************************************@*/
CHR_Philosopher::CHR_Philosopher()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = NEUTRAL;
	_craft = 4;
	_name = "Philosopher";
	_location = TILE_CITY;
	_dStr = _str;
	_dCraft = _craft;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Philosopher
@RETURNS	void
@DESC		"Performs preroll functions for the Philosopher character."
****************************************************************************@*/
void CHR_Philosopher::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Philosopher
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Philosopher character."
****************************************************************************@*/
short int CHR_Philosopher::charRoll()
{
	return roll(_dice);
}