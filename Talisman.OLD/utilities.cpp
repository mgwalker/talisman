/************************************************
 *												*
 * Talisman Utility Function Definitions		*
 *												*
 * Defines common functions that may be used	*
 * at any point in the game, such as a dice		*
 * roll.										*
 *												*
 ************************************************/

#include "stdInclude.h"

/*@======================================= 
  @Function roll void
  @Created "Greg Walker" "9/25/02"
  @Modified "Jason Pike" "12/23/02"

  @Param short int dice "The number of dice to roll."
  @Returns short int "The sum of the dice rolls." 
 
  @Desc "This function simulates the rolling of
  a specified number of die and return the results."
=======================================@*/
short int roll(short int dice)
{
	// Set the return value to zero
	short int ret = 0;

	// For each dice, roll and add
	// the value to the return value
	for(short int i = 0; i < dice; i++)
		ret = (rand()%6)+1+ret;
	
	// Return the sum of the dice rolls
	return ret;
}

/*@======================================= 
  @Function doMove void
  @Created "Jason Pike" "10/17/02"
  @Modified "Jason Pike" "12/26/02"

  @Param CircularList outer_region	"Outer Region tiles in a circularly linked list."
  @Param CircularList middle_region	"Middle Region tiles in a circularly linked list."
  @Param CircularList inner_region	"Inner Region tiles in a circularly linked list."

  @Returns void

  @Desc "This function lists user's choices for movement and makes appropriate movement."
=======================================@*/
void doMove(Region outer_region, Region middle_region, Region inner_region)
{
	// Remove character from current tile
	currentTile->modPlayer('-');

	// Roll dice for movement and display results
	short int choice = 0, lMove = -1, rMove = -1;
	if(currentPlayer->getRegion()==OUTER_REGION || currentPlayer->getRegion()==MIDDLE_REGION)
	{
		short int diceRoll = currentPlayer->charRoll();
		cout << "You rolled a " << diceRoll;
		lMove = currentPlayer->getLocation() - diceRoll;
		rMove = currentPlayer->getLocation() + diceRoll;
		if(currentPlayer->getRegion()==OUTER_REGION)
		{
			if(lMove < 0)
				lMove += 24;
			if(rMove > 23)
				rMove -= 22;
		}
		else if(currentPlayer->getRegion()==MIDDLE_REGION)
		{
			if(lMove < 0)
				lMove += 16;
			if(rMove > 15)
				rMove -= 14;
		}
		else
			cout << "doMove function failed...";
	}
	else if(currentPlayer->getRegion()==INNER_REGION)
	{
		lMove = currentPlayer->getLocation() - 1;
		rMove = currentPlayer->getLocation() + 1;
		if(lMove < 0)
			lMove = 7;
		if(rMove > 7)
			rMove = 0;
	}
	else
		cout << "Player is not in a valid region.... WTF?!?! over.";

	switch(currentPlayer->getRegion())
	{
		case OUTER_REGION:
			cout << ". You may goto 1:(Left)" << outer_region[lMove]->getName() 
				 << " or 2:(Right)" << outer_region[rMove]->getName();
			break;
		case MIDDLE_REGION:
			cout << ". You may goto 1:(Left)" << middle_region[lMove]->getName() 
				 << " or 2:(Right)" << middle_region[rMove]->getName();
			break;
		case INNER_REGION:
			cout << ". You may goto 1:(Left)" << inner_region[lMove]->getName() 
				 << " or 2:(Right)" << inner_region[rMove]->getName();
			break;
	}

	cin >> choice;
	while(choice!=1 && choice!=2)
	{
		cout << "\nMust pick either 1 or 2.\n";
		cin >> choice;
	}

	if(lMove==-1 || rMove==-1)
	{
		cout << "lMove or rMove wasn't set!";
		exit(1);
	}

	if(choice==1)
	{
		currentPlayer->modLocation(lMove);
		switch(currentPlayer->getRegion())
		{
			case OUTER_REGION:
				currentTile = outer_region[lMove];
				break;
			case MIDDLE_REGION:
				currentTile = middle_region[lMove];
				break;
			case INNER_REGION:
				currentTile = inner_region[lMove];
				break;
		}
	}
	else if(choice==2)
	{
		currentPlayer->modLocation(rMove);
		switch(currentPlayer->getRegion())
		{
			case OUTER_REGION:
				currentTile = outer_region[rMove];
				break;
			case MIDDLE_REGION:
				currentTile = middle_region[rMove];
				break;
			case INNER_REGION:
				currentTile = inner_region[rMove];
				break;
		}
	}

	// Update Tile and Character to show new locations
	currentTile->modPlayer('+');
}

/*@======================================= 
  @Function doTurn void
  @Created "Jason Pike" "10/17/02"
  @Modified "Jason Pike" "12/26/02"

  @Param CircularList outer_region	"Outer Region tiles in a circularly linked list."
  @Param CircularList middle_region	"Middle Region tiles in a circularly linked list."
  @Param CircularList inner_region	"Inner Region tiles in a circularly linked list."

  @Returns void
 
  @Desc "This function executes one complete turn."
=======================================@*/
void doTurn(Region outer_region, Region middle_region, Region inner_region)
{	
	//clrscr();

	//Print Character Stats
	currentPlayer->display();

	// Do preroll abilities
	currentPlayer->preRoll();

	//Display choices for movement, prompt user, and do move
	doMove(outer_region, middle_region, inner_region);

	//Run the current Tile
	currentTile->Run();

	//Print Character Stats
	currentPlayer->display();
}