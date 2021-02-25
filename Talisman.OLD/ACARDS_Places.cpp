#include "stdInclude.h"

Places::Places(string name, short int id)
{
	_name = name;
	_id = id;
}

bool Places::Run()
{
	switch(_id)
	{
		case 107:
			Arena();
			break;
		case 108:
			Cave();
			break;
		case 109:
			FountainOfWisdom();
			break;
		case 110:
			Idol();
			break;
		case 111:
			MagicPortal();
			break;
		case 112:
			MagicStream();
			break;
		case 113:
			Market();
			break;
		case 114:
			Marsh();
			break;
		case 115:
			Maze();
			break;
		case 116:
			PoolOfLife();
			break;
		case 117:
			SecretDoor();
			break;
		case 118:
			Shrine();
			break;
		case 119:
			Tomb();
			break;
		default:
			cout << "ACARDS_PLACES switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void Places::Arena()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Cave()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::FountainOfWisdom()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Idol()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::MagicPortal()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::MagicStream()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Market()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Marsh()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Maze()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::PoolOfLife()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::SecretDoor()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Shrine()
{
	cout << _name << ", not implemented yet!\n";
}

void Places::Tomb()
{
	cout << _name << ", not implemented yet!\n";
}
