#include "stdInclude.h"

MObjects::MObjects(string name, short int id)
{
	_name = name;
	_id = id;
}

bool MObjects::Run()
{
	switch(_id)
	{
		case 72:
			Amulet();
			break;
		case 73:
			AncientArtifact();
			break;
		case 74:
			BagOfCarrying();
			break;
		case 75:
			Cross();
			break;
		case 76:
			HolyGrail();
			break;
		case 77:
			HolyLance();
			break;
		case 78:
			MagicBelt();
			break;
		case 79:
			OrbOfKnowledge();
			break;
		case 80:
			PotionOfStrength();
			break;
		case 81:
			Ring();
			break;
		case 82:
			RodOfRuin();
			break;
		case 83:
			RuneSword();
			break;
		case 84:
			SolomonsCrown();
			break;
		case 85:
			StaffOfMastery();
			break;
		case 86:
			Talisman();
			break;
		case 87:
			Wand();
			break;
		case 88:
			WingedBoots();
			break;
		default:
			cout << "ACARDS_MOBJECTS switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void MObjects::Amulet()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::AncientArtifact()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::BagOfCarrying()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::Cross()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::HolyGrail()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::HolyLance()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::MagicBelt()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::OrbOfKnowledge()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::PotionOfStrength()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::Ring()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::RodOfRuin()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::RuneSword()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::SolomonsCrown()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::StaffOfMastery()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::Talisman()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::Wand()
{
	cout << _name << ", not implemented yet!\n";
}

void MObjects::WingedBoots()
{
	cout << _name << ", not implemented yet!\n";
}
