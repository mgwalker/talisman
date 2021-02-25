#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Woodsman	CHR_Woodsman
@returns	void
@desc		"Woodsman character class constructor"
****************************************************************************@*/
CHR_Woodsman::CHR_Woodsman()
{
	_region = INNER_REGION;
	_location = 0;
//	_region = OUTER_REGION;
	_str = 3;
	_align = NEUTRAL;
	_craft = 3;
	_name = "Woodsman";
//	_location = 2;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Woodsman
@RETURNS	void
@DESC		"Performs preroll functions for the Woodsman character."
****************************************************************************@*/
void CHR_Woodsman::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Woodsman
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Woodsman character."
****************************************************************************@*/
short int CHR_Woodsman::charRoll()
{
	return roll(_dice);
}