/************************************************
 *												*
 * Talisman Tile Class Definition				*
 *												*
 * Defines special Outer Region Tiles.			*
 *												*
 ************************************************/
#include "stdInclude.h"

/*@****************************************************************************
@function	City	City
@returns	void
@desc		"City card constructor"
****************************************************************************@*/
City::City()
{
	_id = 0;
	_cardLimit = 0;
	_name = "City";
}

/*@****************************************************************************
@function	Run		City
@returns	void
@desc		"City card run function"
****************************************************************************@*/
void City::Run()
{
	display();
	short int choice;
	cout << "You are now in the " << _name << ".\n\n";
	cout << "You may visit one of the following:\n";
	cout << "(1)The Enchantress\n(2)The Alchemist\n(3)The Doctor\n\nWhich will you visit?";
	cin >> choice;
	while(choice!=1 && choice!=2 && choice!=3)
	{
		cout << "Not a valid choice.";
		cout << "You may visit one of the following:\n";
		cout << "(1)The Enchantress\n(2)The Alchemist\n(3)The Doctor\n\nWhich will you visit?";
		cin >> choice;
	}
	switch(choice)
	{
		case 1:
			{
			cout << "You chose to visit the Enchantress.\n";
			short int result = roll(1);
			cout << "You rolled a " << result << endl;
			switch(result)
			{
				case 1:
					cout << "You are turned into a toad for 3 turns.\n";
					break;
				case 2:
					cout << "You lost 1 strength.\n";
					currentPlayer->modStr(-1);
					break;
				case 3:
					cout << "You lost 1 craft.\n";
					currentPlayer->modCraft(-1);
					break;
				case 4:
					cout << "You gained 1 craft.\n";
					currentPlayer->modCraft(1);
					break;
				case 5:
					cout << "You gained 1 strength.\n";
					currentPlayer->modStr(1);
					break;
				case 6:
					cout << "You gained 1 spell.\n";
					cout << " NOT IMPLEMENTED\n ";
					break;
				default:
					cout << "Something is broke in the City::Run() in the enchantress switch.";
					break;
			}
			break;
			}
		case 2:
			cout << "You chose to visit the Alchemist. He will turn any of your objects into gold.";
            cout << "The objects you choose will be discarded and you will be given 1 gold for each.";
			cout << " NOT IMPLEMENTED ";
			break;
		case 3:
			cout << "You chose to visit the Doctor. He will heal up to 2 lives at the cost of 1 gold each.\n";
			if(currentPlayer->getGold()>0)
			{	
				short int livesToBuy = 0;
				cout << "You have " << currentPlayer->getGold() << " gold.\nHow many lives would you like to buy?";
				cin >> livesToBuy;
				while(livesToBuy > 2 && livesToBuy > currentPlayer->getGold() && livesToBuy < 0)
				{
					cout << "You can't buy that many lives.\nHow many lives would you like to buy?";
					cin >> livesToBuy;
				}
				currentPlayer->modLives(livesToBuy);
			}
			else
				cout << "You don't have any gold to buy lives with.\n"; 
			break;
		default:
			cout << "Aww crap... error in City::Run() function.";
			break;
	}
}

/*@****************************************************************************
@function	Crags	Crags
@returns	void
@desc		"Crags card constructor"
****************************************************************************@*/
Crags::Crags()
{
	_id = 4;
	_cardLimit = 0;
	_name = "Crags";
}

/*@****************************************************************************
@function	Run		Crags
@returns	void
@desc		"Crags card run function"
****************************************************************************@*/
void Crags::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	short int result = roll(1);
	switch(result)
	{
		case 1:
			cout << "You are turned short into a toad for 3 turns.";
			cout << " NOT IMPLEMENTED ";
			break;
		case 2:
		case 3:
			cout << "You are lost for one turn.";
			currentPlayer->modMissTurns(1);
			break;
		case 4:
		case 5:
			cout << "You are safe.";
			break;
		case 6:
			cout << "Barbarians lead you out. You gained 1 strength.";
			currentPlayer->modStr(1);
			break;
		default:
			cout << "The Crags::Run() is messed up!";
			break;
	}
	display();
}
/*@****************************************************************************
@function	Chapel	Chapel
@returns	void
@desc		"Chapel card constructor"
****************************************************************************@*/
Chapel::Chapel()
{
	_id = 6;
	_cardLimit = 0;
	_name = "Chapel";
}

/*@****************************************************************************
@function	Run		Chapel
@returns	void
@desc		"Chapel card run function"
****************************************************************************@*/
void Chapel::Run()
{
	cout << "You are now in the " << _name << ".\n";
	if(currentPlayer->getAlign()==GOOD)
	{
		short int choice = 0;
		cout << "You may either be healed free of charge back up to your starting";
		cout << " quota of lives or you may pray. Which do you choose?\n(1)Heal Lives.";
		cout << "\n(2)Pray.\n";
		cin >> choice;
		while(choice !=1 && choice !=2)
		{
			cout << "You may choose either 1 or 2. \n(1) Heal Lives.\n(2) Pray.\n";
			cin >> choice;
		}
		if(choice==1)
		{
			// Restores number of lives to 4
			if(currentPlayer->getLives()<4)
				currentPlayer->modLives(4 - currentPlayer->getLives());
		}
		else
		{
			short int result = roll(1);
			switch(result)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					cout << "You were ignored.\n";
				case 5:
					cout << "You gain 1 life.";
					currentPlayer->modLives(1);
					break;
				case 6:
					cout << "You gain 1 spell.\n";
					cout << " NOT IMPLEMENTED ";
					break;
				default:
					cout << "The Chapel::Run() is messed up!";
					break;
			}
		}
	}

	else if(currentPlayer->getAlign()==NEUTRAL)
	{
		cout <<	"You may have your lives healed back up to its original quota at the cost of 1";
		cout <<	"gold per life.";
		if(currentPlayer->getGold()>0 && currentPlayer->getLives() < 4)
		{	
			short int livesToBuy = 0;
			cout << "You have " << currentPlayer->getGold() << " gold.\nHow many lives would you like to buy?";
			cin >> livesToBuy;
			while(livesToBuy > 2 && livesToBuy > currentPlayer->getGold() && livesToBuy < 0 && 
				  livesToBuy + currentPlayer->getLives() > 4)
			{
				cout << "You can't buy that many lives.\n";
				if(livesToBuy + currentPlayer->getLives() > 4)
					cout << "You will exceed you original quota.\n";
				cout << "How many lives would you like to buy?";
				cin >> livesToBuy;
			}
			currentPlayer->modLives(livesToBuy);
		}
		else
			cout << "You don't have any gold to buy lives with.\n"; 
	}

	else if(currentPlayer->getAlign()==EVIL)
	{
		cout << "You lose one life\n";
		currentPlayer->modLives(-1);
	}
	display();
}

/*@****************************************************************************
@function	Sentinel	Sentinel
@returns	void
@desc		"Sentinel card constructor"
****************************************************************************@*/
Sentinel::Sentinel()
{
	_id = 8;
	_cardLimit = 1;
	_name = "Sentinel";
}

/*@****************************************************************************
@function	Run		Sentinel
@returns	void
@desc		"Sentinel card run function"
****************************************************************************@*/
void Sentinel::Run()
{
	short int choice;
	cout << "You are now in the " << _name << "." << endl;
	cout << "You may either (1)draw a card or (2)fight the Sentinel to move to the Middle Region.\n";
	cout << "Which will you do? ";
	cin >> choice;

	while(choice != 1 && choice != 2)
	{
		cout << "Invalid.  You may either (1) draw a card or (2) fight the Sentinel to move to the Middle Region.\n";
		cout << "Which will you do? ";
		cin >> choice;
	}

	if(choice == 1)
	{
		unsigned short int i = 0;

		if(AdventureDeck.size() < 4)
		{
			LinkedList oldDeck = AdventureDeck;
			initACards();

			for(i = 0; i < oldDeck.size(); i++)
				AdventureDeck.push_back(oldDeck.at(i));
		}

		Acards *tmp;
		bool won;

		short int cardsOnTile = getCardNum();
		LinkedList fought;
	
		for(i = 0; i < (unsigned)cardsOnTile; i++)
		{
			tmp = getCard();
			cout << "\nALREADY ON TILE: ";
			won = tmp->Run();

			if(!won)
				fought.push_back(new Node(tmp));
				//modCard('+',tmp);
		}

		for(i = 0; i < (unsigned)fought.size(); i++)
			_cardsOnTile.push_back(fought[i]);
	
		if(cardsOnTile < _cardLimit)
		{
			tmp = (Acards*)AdventureDeck.at(AdventureDeck.size() - 1);
			AdventureDeck.pop_back();
			won = tmp->Run();

			if(!won)
				modCard('+',tmp);
		}
		display();
	}
	else if(choice == 2)
	{
		short int sstr = roll(1);
		short int cstr = roll(1);

		cout << "The Sentinel rolls " << sstr << " and has a strength of " << sstr + 9 << endl;
		cout << "You roll " << cstr << " and have a strength of " << cstr + currentPlayer->getStr() << endl;

		if((cstr + currentPlayer->getStr()) > (sstr + 9))
		{
			cout << "You defeated the Sentinel and move short into the Middle Region.\n";
			currentPlayer->modRegion(MIDDLE_REGION);
		}
		else
		{
			cout << "You are defeated by the Sentinel and lose 1 life." << endl;
			currentPlayer->modLives(-1);
		}
	}
	else
		cout << "There's a bug in the Sentinel::Run.  Fix it." << endl;

	display();
}

/*@****************************************************************************
@function	Graveyard	Graveyard
@returns	void
@desc		"Graveyard card constructor"
****************************************************************************@*/
Graveyard::Graveyard()
{
	_id = 10;
	_cardLimit = 0;
	_name = "Graveyard";
}

/*@****************************************************************************
@function	Run		Graveyard
@returns	void
@desc		"Graveyard card run function"
****************************************************************************@*/
void Graveyard::Run()
{
	cout << "You are now in the " << _name << "." << endl;

	if(currentPlayer->getAlign()==GOOD)
	{
		cout << "You are good, and lose one life." << endl;
		currentPlayer->modLives(-1);
	}
	else if(currentPlayer->getAlign()==NEUTRAL)
		cout << "Nothing happened.\n";
	else if(currentPlayer->getAlign()==EVIL)
	{
		short int result = roll(1);
		switch(result)
		{
			case 1:
				cout << "Miss one turn.\n";
				currentPlayer->modMissTurns(1);
				break;
			case 2:
			case 3:
			case 4:
				cout << "You gain 1 life.\n";
				currentPlayer->modLives(1);
				break;
			case 5:
			case 6:
				cout << "You gain 1 spell.\n";
				cout << " NOT IMPLEMENTED ";
				break;
			default:
				cout << "Graveyard::Run() is fucked up!\n";
		}
	}
	display();
}

/*@****************************************************************************
@function	Village	Village
@returns	void
@desc		"Village card constructor"
****************************************************************************@*/
Village::Village()
{
	_id = 12;
	_cardLimit = 0;
	_name = "Village";
}

/*@****************************************************************************
@function	Run		Village
@returns	void
@desc		"Village card run function"
****************************************************************************@*/
void Village::Run()
{
	cout << "You are now in the " << _name << "." << endl;

	short int choice;
	cout << "You may visit one of the following:\n";
	cout << "(1)The Healer\n(2)The Blacksmith\n(3)The Mystic\n\nWhich will you visit?";
	cin >> choice;
	while(choice!=1 && choice!=2 && choice!=3)
	{
		cout << "Not a valid choice.";
		cout << "You may visit one of the following:\n";
		cout << "(1)The Healer\n(2)The Blacksmith\n(3)The Mystic\n\nWhich will you visit?";
		cin >> choice;
	}
	switch(choice)
	{
		short int play;
		case 1:
			cout << "You chose to visit the Healer.\n";
			break;
		case 2:
			cout << "You chose to visit the Blacksmith. He is selling the following objects:\n";
            cout << "1) Helmet - 2 gold\n2) Sword - 2 gold\n3) Ax - 3 gold\n";
			cout << "4) Shield - 3 gold\n5) Armor - 4 gold\n6) Buy nothing\n";
			cout << "What would you like to buy? ";
			cin >> play;

			switch(play)
			{
				case 1:
					if(currentPlayer->getGold() >= 2)
					{
						cout << "You bought a helmet for 2 gold.\n";
						cout << "NOT IMPLEMENTED" << endl;
						currentPlayer->modGold(-2);
					}
					else
						cout << "You don't have enough money!" << endl;
					break;
				case 2:
					if(currentPlayer->getGold() >= 2)
					{
						cout << "You bought a sword for 2 gold.\n";
						cout << "NOT IMPLEMENTED" << endl;
						currentPlayer->modGold(-2);
					}
					else
						cout << "You don't have enough money!" << endl;
					break;
				case 3:
					if(currentPlayer->getGold() >= 3)
					{
						cout << "You bought an ax for 3 gold.\n";
						cout << "NOT IMPLEMENTED" << endl;
						currentPlayer->modGold(-3);
					}
					else
						cout << "You don't have enough money!" << endl;
					break;
				case 4:
					if(currentPlayer->getGold() >= 3)
					{
						cout << "You bought a shield for 3 gold.\n";
						cout << "NOT IMPLEMENTED" << endl;
						currentPlayer->modGold(-3);
					}
					else
						cout << "You don't have enough money!" << endl;
					break;
				case 5:
					if(currentPlayer->getGold() >= 4)
					{
						cout << "You bought armor for 4 gold.\n";
						cout << "NOT IMPLEMENTED" << endl;
						currentPlayer->modGold(-4);
					}
					else
						cout << "You don't have enough money!" << endl;
					break;
				default:
					cout << "You didn't buy anything." << endl;
			}

			break;
		case 3:
			cout << "You chose to visit the Mystic.\n";
			play = roll(1);
			switch(play)
			{
				case 1:
				case 2:
				case 3:
					cout << "The mystic ignores you." << endl;
					break;
				case 4:
					if(currentPlayer->getAlign() != GOOD)
					{
						cout << "The mystic changes you to good." << endl;
						currentPlayer->modAlign(GOOD);
					}
					else
						cout << "The mystic ignores you." << endl;
					break;
				case 5:
					cout << "You gain 1 craft from the mystic." << endl;
					currentPlayer->modCraft(1);
					break;
				case 6:
					cout << "You gain 1 spell from the mystic." << endl;
					cout << "NOT IMPLEMENTED" << endl;
					break;
			}
			break;
	}
	display();
}

/*@****************************************************************************
@function	Forest	Forest
@returns	void
@desc		"Forest card constructor"
****************************************************************************@*/
Forest::Forest()
{
	_id = 14;
	_cardLimit = 0;
	_name = "Forest";
}

/*@****************************************************************************
@function	Run		Forest
@returns	void
@desc		"Forest card run function"
****************************************************************************@*/
void Forest::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	short int result = roll(1);

	switch(result)
	{
		short int bstr;
		short int cstr;
		case 1:
			cout << "You were attacked by a brigand of strength 4!\n";
			bstr = roll(1);
			cstr = roll(1);
			cout << "The brigand rolled " << bstr << " and now has a strength of " << bstr + 4 << endl;
			cout << "You rolled " << cstr << " and now have a strength of " << cstr + currentPlayer->getStr() << endl;
			if((cstr + currentPlayer->getStr()) > (bstr + 4))
				cout << "You defeat the brigand." << endl;
			else
			{
				cout << "You are defeated by the brigand and lose one life." << endl;
				currentPlayer->modLives(-1);
			}
			break;
		case 2:
		case 3:
			cout << "You are lost for 1 turn\n";
			currentPlayer->modMissTurns(1);
			break;
		case 4:
		case 5:
			cout << "You are safe in the forest\n";
			break;
		case 6:
			cout << "You are guided out by a ranger and gain 1 craft.\n";
			currentPlayer->modCraft(1);
			break;
		default:
			cout << "Something's wrong in the Forest::Run function!\n";
	}

	display();
}

/*@****************************************************************************
@function	Tavern	Tavern
@returns	void
@desc		"Tavern card constructor"
****************************************************************************@*/
Tavern::Tavern()
{
	_id = 18;
	_cardLimit = 0;
	_name = "Tavern";
}

/*@****************************************************************************
@function	Run		Tavern
@returns	void
@desc		"Tavern card run function"
****************************************************************************@*/
void Tavern::Run()
{
	cout << "You are now in the " << _name << "." << endl;
	short int result = roll(1);

	switch(result)
	{
		short int fstr;
		short int cstr;
		case 1:
			cout << "You get blind drunk and collapse in a corner.  Lose one turn.\n";
			currentPlayer->modMissTurns(1);
			break;
		case 2:
			cout << "You get tipsy and get in a fight with a farmer.\n";
			fstr = roll(1);
			cstr = roll(1);
			cout << "The farmer rolls " << fstr << " and has a strength of " << fstr + 3 << endl;
			cout << "You roll " << cstr << " and have a strength of " << cstr + currentPlayer->getStr() << endl;

			if((cstr + currentPlayer->getStr()) > (fstr + 3))
				cout << "You defeat the farmer." << endl;
			else
			{
				cout << "The farmer beats you.  You lose 1 life." << endl;
				currentPlayer->modLives(-1);
			}
			break;
		case 3:
			cout << "You gamble and lose 1 gold." << endl;
			currentPlayer->modGold(-1);
			break;
		case 4:
			cout << "You gamble and gain 1 gold." << endl;
			currentPlayer->modGold(1);
			break;
		case 5:
			cout << "A wizard offers to transport you anywhere in the outer region for your next move.\n";
			cout << "NOT IMPLEMENTED" << endl;
			break;
		case 6:
			cout << "The boatman offers to ferry you to the Temple for your next move.\n";
			cout << "NOT IMPLEMENTED" << endl;
			break;
	}

	display();
}