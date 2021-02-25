#include "stdInclude.h"

Objects::Objects(string name, short int id)
{
	_name = name;
	_id = id;
}

bool Objects::Run()
{
	switch(_id)
	{
		case 89:
			Armour();
			break;
		case 90:
			Axe();
			break;
		case 91:
			BagsOfGold(1);
			break;
		case 92:
			BagsOfGold(2);
			break;
		case 93:
			Casket();
			break;
		case 94:
			ConcealedPouch();
			break;
		case 95:
			GoldenStatue();
			break;
		case 96:
			Helmet();
			break;
		case 97:
			HorseAndCart();
			break;
		case 98:
			Horse();
			break;
		case 99:
			Map();
			break;
		case 100:
			Mule();
			break;
		case 101:
			Raft();
			break;
		case 102:
			Shield();
			break;
		case 103:
			Shovel();
			break;
		case 104:
			Sword();
			break;
		case 105:
			WarHorse();
			break;
		case 106:
			WaterBottle();
			break;
		default:
			cout << "ACARDS_OBJECTS switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void Objects::Armour()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Axe()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::BagsOfGold(short int numBags)
{
	numBags;

	cout << _name << ", not implemented yet!\n";
}

void Objects::Casket()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::ConcealedPouch()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::GoldenStatue()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Helmet()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Horse()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::HorseAndCart()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Map()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Mule()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Raft()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Shield()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Shovel()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::Sword()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::WarHorse()
{
	cout << _name << ", not implemented yet!\n";
}

void Objects::WaterBottle()
{
	cout << _name << ", not implemented yet!\n";
}
