#include "stdInclude.h"

Strangers::Strangers(string name, short int id)
{
	_name = name;
	_id = id;
}

bool Strangers::Run()
{
	switch(_id)
	{
		case 120:
			Centaur();
			break;
		case 121:
			Cyclops();
			break;
		case 122:
			Demigod();
			break;
		case 123:
			Enchanter();
			break;
		case 124:
			Fairy();
			break;
		case 125:
			Healer();
			break;
		case 126:
			Hermit();
			break;
		case 127:
			Instructor();
			break;
		case 128:
			Judge();
			break;
		case 129:
			Leper();
			break;
		case 130:
			Mage();
			break;
		case 131:
			Magician();
			break;
		case 132:
			Outlaw();
			break;
		case 133:
			Pedlar();
			break;
		case 134:
			Pegasus();
			break;
		case 135:
			Phantom();
			break;
		case 136:
			Siren();
			break;
		case 137:
			Sorcerer();
			break;
		case 138:
			Sphinx();
			break;
		case 139:
			Witch();
			break;
		default:
			cout << "ACARDS_STRANGERS switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void Strangers::Centaur()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Cyclops()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Demigod()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Enchanter()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Fairy()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Healer()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Hermit()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Instructor()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Judge()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Leper()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Mage()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Magician()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Outlaw()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Pedlar()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Pegasus()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Phantom()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Siren()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Sorcerer()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Sphinx()
{
	cout << _name << ", not implemented yet!\n";
}

void Strangers::Witch()
{
	cout << _name << ", not implemented yet!\n";
}
