#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Satyr	CHR_Satyr
@returns	void
@desc		"Satyr character class constructor"
****************************************************************************@*/
CHR_Satyr::CHR_Satyr()
{
	_region = OUTER_REGION;
	_str = 2;
	_align = EVIL;
	_craft = 4;
	_name = "Satyr";
	_location = TILE_CRAGS;
}

/*@****************************************************************************
@FUNCTION	preRoll	CHR_Satyr
@RETURNS	void
@DESC		"Performs preroll functions for the Satyr character."
****************************************************************************@*/
void CHR_Satyr::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Satyr
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Satyr character."
****************************************************************************@*/
short int CHR_Satyr::charRoll()
{
	return roll(_dice);
}