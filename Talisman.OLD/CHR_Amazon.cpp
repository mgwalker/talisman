#include "stdInclude.h"

/*@****************************************************************************
@FUNCTION	CHR_Amazon	CHR_Amazon
@RETURNS	void
@DESC		"Amazon character class constructor"
****************************************************************************@*/
CHR_Amazon::CHR_Amazon()
{
	_region = OUTER_REGION;
	_str = 4;
	_align = NEUTRAL;
	_craft = 2;
	_name = "Amazon";
	_location = TILE_VILLAGE;
	_dStr = _str;
	_dCraft = _craft;
}


/*@****************************************************************************
@FUNCTION	preRoll	CHR_Amazon
@RETURNS	void
@DESC		"Performs preroll functions for the Amazon character."
****************************************************************************@*/
void CHR_Amazon::preRoll()
{
}

/*@****************************************************************************
@FUNCTION	charRoll	CHR_Amazon
@RETURNS	short int			"Dice roll"
@DESC		"Rolls a certain number of dice for the Amazon character."
****************************************************************************@*/
short int CHR_Amazon::charRoll()
{
	short int choice = 0;
	cout << "You have the option of rolling 1 or 2 dice. Which do you prefer?";
	cin >> choice;
	while(choice !=1 && choice !=2)
	{
		cout << endl << "You must choose either 1 or 2";
		cin >> choice;
	}
	if(choice==1)
		_dice = 1;
	else
		_dice = 2;
	return roll(_dice);
}
