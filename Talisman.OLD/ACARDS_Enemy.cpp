#include "stdInclude.h"

/*@======================================= 
  @Function Enemy Enemy
  @Created "Jason" "9/29/02"

  @Param int str "The enemy's strength."
  @Param int craft "The enemy's craft." 
  @Param string type "The type of enemy. (monster,animal,spirit)"
  @Param string name "The enemy's name." 
  @Returns none "Doesn't return anything." 
 
  @Desc "This is a constructor for the Enemy class."
=======================================@*/
Enemy::Enemy(short int str, short int craft, string type, string name, short int id)
{
	_str = str;
	_craft = craft;
	_type = type;
	_name = name;
	_id = id;
}

/*@======================================= 
  @Function Run Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function executes the Enemy card."
=======================================@*/
bool Enemy::Run()
{
	switch(_id)
	{
		case 2:
			Bandit();
			break;
		case 3:
			BandOfZombies();
			break;
		case 6:
			Berserker();
			break;
		case 8:
			CaveTroll();
			break;
		case 9:
			ChineseDragon();
			break;
		case 11:
			Doppleganger();
			break;
		case 14:
			Ghast();
			break;
		case 15:
			Ghost();
			break;
		case 19:
			Golem();
			break;
		case 21:
			Harpy();
			break;
		case 23:
			Lich();
			break;
		case 28:
			Shadow();
			break;
		case 30:
			Vampire();
			break;
		case 31:
			VampireBats();
			break;
		default:
			if(_str!=0)
				return StrFight();
			else if(_craft!=0)
				return CraftFight();
			else
			{
				cout << "Enemy Card is messed up!";
				exit(1);
			}
			break;
	}
	return false;
}

/*@======================================= 
  @Function StrFight Enemy
  @Created "Jason" "10/02/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function lets the Character and the Enemy fight 
  using their strength stats."
=======================================@*/
bool Enemy::StrFight()
{
	short int player = 0, enemy =0;
	bool ret;

	cout << "You have encountered a " << _name << endl;
	while(player==enemy)
	{
		player = 0; enemy =0;
		cout << "You must battle it in physical combat." << endl;
		player = roll(1);
		cout << "Player rolled a " << player;
		player = currentPlayer->getStr() + player;
		cout << " and with strength the total is " << player << endl;
		enemy = roll(1);
		cout << _name << " rolled a " << enemy;
		enemy = _str + enemy;
		cout << " and with strength the total is " << enemy << endl;
		if(player==enemy)
			cout << "The fight resulted in a draw.";
	}
	if(player < enemy)
	{
		currentPlayer->modLives(-1);
		cout << "You lost the fight and 1 life";
		ret = false;
	}
	else
	{
		cout << "You have defeated the " << _name << endl;
		// remove adventure card from space
		cout << "You gained " << _str << " experience!";
		currentPlayer->modExp('s',_str);
		ret = true;
	}

	return ret;
}

/*@======================================= 
  @Function CraftFight Enemy
  @Created "Jason" "10/02/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function lets the Character and the Enemy fight 
         using their craft stats."
=======================================@*/
bool Enemy::CraftFight()
{
	short int player = 0, enemy =0;
	bool ret;

	cout << "You have encountered a " << _name << endl;
	while(player==enemy)
	{
		player = 0; enemy =0;
		cout << "You must battle it in psychic combat." << endl;
		player = roll(1);
		cout << "Player rolled a " << player;
		player = currentPlayer->getCraft() + player;
		cout << " and with craft the total is " << player << endl;
		enemy = roll(1);
		cout << _name << " rolled a " << enemy;
		enemy = _craft + enemy;
		cout << " and with craft the total is " << enemy << endl;
		if(player==enemy)
			cout << "The fight resulted in a draw.";
	}
	if(player < enemy)
	{
		currentPlayer->modLives(-1);
		cout << "You lost the fight and 1 life";
		ret = false;
	}
	else
	{
		cout << "You have defeated the " << _name << endl;
		// remove adventure card from space
		cout << "You gained " << _craft << " experience!";
		currentPlayer->modExp('c',_craft);
		ret = true;
	}

	return ret;
}

/*@======================================= 
  @Function Bandit Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Bandit card."
=======================================@*/
void Enemy::Bandit()
{
	cout << "You have encountered a Bandit of strength 4."
		 << endl << "If you are willing to pay him 1 gold"
		 << " he will not attack you." << endl << "Will "
		 << "you pay the Bandit? (y/n)";
	char choice;
	cin >> choice;
	if(choice=='y' && (currentPlayer->getGold() > 0))
	{
		cout << endl << "The Bandit lets you go, but he'll stay"
		<< "until he is defeated.";
		currentPlayer->modGold(-1);
	}
	else
	{	if(choice=='y' && !(currentPlayer->getGold() > 1))
			cout << "You don't have enough gold!" << endl;
		StrFight();
	}
}

/*@======================================= 
  @Function BandOfZombies Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Band 
         Of Zombies card."
=======================================@*/
void Enemy::BandOfZombies()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Berserker Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Berserker card."
=======================================@*/
void Enemy::Berserker()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function CaveTroll Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Cave Troll card."
=======================================@*/
void Enemy::CaveTroll()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function ChineseDragon Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Chinese Dragon card."
=======================================@*/
void Enemy::ChineseDragon()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Doppleganger Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Doppleganger card."
=======================================@*/
void Enemy::Doppleganger()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Ghast Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Ghast card."
=======================================@*/
void Enemy::Ghast()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Ghost Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Ghost card."
=======================================@*/
void Enemy::Ghost()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Golem Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Golem card."
=======================================@*/
void Enemy::Golem()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Harpy Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Harpy card."
=======================================@*/
void Enemy::Harpy()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Lich Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Lich card."
=======================================@*/
void Enemy::Lich()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Shadow Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Shadow card."
=======================================@*/
void Enemy::Shadow()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function Vampire Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Vampire card."
=======================================@*/
void Enemy::Vampire()
{
	cout << _name << ", not implemented yet!\n";
}

/*@======================================= 
  @Function VampireBats Enemy
  @Created "Jason" "9/29/02"

  @Param Character character "Pointer to the current character."
  @Returns void "Doesn't return anything." 
 
  @Desc "This function implements the special needs for the Vampire Bats card."
=======================================@*/
void Enemy::VampireBats()
{
	cout << _name << ", not implemented yet!\n";
}
