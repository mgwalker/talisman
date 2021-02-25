#include "stdInclude.h"

Follower::Follower(string name, short int id)
{
	_name = name;
	_id = id;
}

bool Follower::Run()
{
	switch(_id)
	{
		case 54:
			Alchemist();
			break;
		case 55:
			Archer();
			break;
		case 56:
			Champion();
			break;
		case 57:
			CursedByAHag();
			break;
		case 58:
			Familiar();
			break;
		case 59:
			Genie();
			break;
		case 60:
			Gnome();
			break;
		case 61:
			Guide();
			break;
		case 62:
			Jester();
			break;
		case 63:
			Maiden();
			break;
		case 64:
			ManAtArms();
			break;
		case 65:
			Mercenary();
			break;
		case 66:
			Pixie();
			break;
		case 67:
			Poltergeist();
			break;
		case 68:
			Porter();
			break;
		case 69:
			Prince();
			break;
		case 70:
			Princess();
			break;
		case 71:
			Unicorn();
			break;
		default:
			cout << "ACARDS_FOLLOWERS switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void Follower::Alchemist()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Archer()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Champion()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::CursedByAHag()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Familiar()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Genie()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Gnome()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Guide()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Jester()
{
	cout << "The jester becomes your follower. He is an annoying fellow who is an utter\n"
		 << "coward and will hamper you in combat by screaming loudly. This deducts one\n"
		 << "from your roll in combat.\n"
		 << "The Jester will leave you if you visit the Tavern where he will disappear to\n"
		 << "the discard pile, unless there is another player there, in which case, you may\n"
		 << "force them to take the Jester as a follower.\n";
	cout << _name << ", not implemented yet!\n";
}

void Follower::Maiden()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::ManAtArms()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Mercenary()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Pixie()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Poltergeist()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Porter()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Prince()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Princess()
{
	cout << _name << ", not implemented yet!\n";
}

void Follower::Unicorn()
{
	cout << _name << ", not implemented yet!\n";
}
