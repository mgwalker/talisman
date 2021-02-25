#include "stdInclude.h"

Event::Event(string name, short int id)
{
	_name = name;
	_id = id;
}

bool Event::Run()
{
	switch(_id)
	{
		case 34:
			Angel();
			break;
		case 35:
			Blizzard();
			break;
		case 36:
			BookOfSpells();
			break;
		case 37:
			Devil();
			break;
		case 38:
			Earthquake();
			break;
		case 39:
			EvilDarkness();
			break;
		case 40:
			FoolsGold();
			break;
		case 41:
			Halloween();
			break;
		case 42:
			Imp();
			break;
		case 43:
			MagicalVortex();
			break;
		case 44:
			MarketDay();
			break;
		case 45:
			Mephistopheles();
			break;
		case 46:
			Patrol();
			break;
		case 47:
			Pestilence();
			break;
		case 48:
			Raiders();
			break;
		case 49:
			Storm();
			break;
		case 50:
			Taxation();
			break;
		case 51:
			Volcano();
			break;
		case 52:
			Werewolf();
			break;
		case 53:
			WhirlWind();
			break;
		default:
			cout << "ACARDS_EVENTS switch has failed. Exiting...";
			exit(1);
			break;
	}
	return true;
}

void Event::Angel()
{
	cout << "An angel of the gods visits you. If you are of good alignment, you\n" 
		 << "gain one life. If you are evil, you lose one life. There is no effect\n"
		 << "if you are neutral. The angel then departs; place it on the discard\n" 
		 << "pile.\n";
	if(currentPlayer->getAlign()==GOOD)
	{
		currentPlayer->modLives(1);
		cout << "You gained 1 life.";
	}
	else if(currentPlayer->getAlign()==EVIL)
	{
		currentPlayer->modLives(-1);
		cout << "You lost 1 life.\n";
	}
	else if(currentPlayer->getAlign()==NEUTRAL)
	{
		cout << "There was no effect.\n";
	}
}

void Event::Blizzard()
{
	cout << "Winter has come with a vengeance and a blizzard envelops the land.\n"
		 << "For two rounds, all players, no matter what region they are in, may\n"
		 << "only move one space per turn. The blizzard then abates; place it in\n"
		 << "the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::BookOfSpells()
{
	cout << "You have found the fabled book of spells. You immediately gain you\n"
		 << "full complement of spells according to your current craft. The book\n"
		 << "vanishes; place it on the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Devil()
{
	cout << "You are visited by a Devil. If you are of evil alignment, you gain 1\n"
		 << "life. If you are good, you lose 1 life. There is no effect if you are\n"
		 << "neutral. The Devil departs; place it on the discard pile.\n";
	if(currentPlayer->getAlign()==EVIL)
	{
		currentPlayer->modLives(1);
		cout << "You gained 1 life.";
	}
	else if(currentPlayer->getAlign()==GOOD)
	{
		currentPlayer->modLives(-1);
		cout << "You lost 1 life.\n";
	}
	else if(currentPlayer->getAlign()==NEUTRAL)
	{
		cout << "There was no effect.\n";
	}
}

void Event::Earthquake()
{
	cout << "An Earthquake shocks this region; roll 1 die for each face up adventure\n"
		 << "card in it. On a roll of 1 or 2 it tumbles down into the Chasm to the\n"
		 << "discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::EvilDarkness()
{
	cout << "An Evil Darkness from the Nether Worlds sweeps the land. All players who\n"
		 << "are not of evil alignment must miss 1 turn. The darkness then vanishes;\n"
		 << "place it on the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::FoolsGold()
{
	cout << "All the gold you are carrying is fools gold and is completely worthless;\n"
		 << "discard all your gold immediately.\n";
	short int fgold = currentPlayer->getGold()*(-1);
	currentPlayer->modGold(fgold);
	cout << "You lost all of your gold.\n";
}

void Event::Halloween()
{
	cout << "It is Halloween. All evil players may invoke the spirits by rolling 1 die\n"
		 << "with the following results:\n"
         << "1: Miss 1 turn.\n"
		 << "2-4: Gain 1 life.\n"
		 << "5-6: Gain 1 spell.\n"
		 << "Halloween then passes to the discard pile.\n";
	short int droll = roll(1);
	switch(droll)
	{
		case 1:
			cout << "You miss a turn. NOT IMPLEMENTED\n";
			break;
		case 2:
		case 3:
		case 4:
			cout << "You gain 1 life.\n";
			currentPlayer->modLives(1);
			break;
		case 5:
		case 6:
			cout << "You gain 1 spell. NOT IMPLEMENTED\n";
			break;
	}
}

void Event::Imp()
{
	cout << "You meet a grumpy imp. Roll one die to determine where he teleports you to:\n"
		 << "1: Crags\n"
		 << "2: Forest\n"
		 << "3: Tavern\n"
		 << "4: Ruins\n"
		 << "5: Hidden Valley\n"
		 << "6: Cursed Glade\n"
		 << "The imp then teleports himself off to the discard pile.\n";
	short int droll = roll(1);
	switch(droll)
	{
		case 1:
			cout << "You are teleported to the Crags\n";
			currentPlayer->modRegion(OUTER_REGION);
			currentPlayer->modLocation(TILE_CRAGS);
			break;
		case 2:
			cout << "You are teleported to the Forest\n";
			currentPlayer->modRegion(OUTER_REGION);
			currentPlayer->modLocation(TILE_FOREST);
			break;
		case 3:
			cout << "You are teleported to the Tavern\n";
			currentPlayer->modRegion(OUTER_REGION);
			currentPlayer->modLocation(TILE_TAVERN);
			break;
		case 4:
			cout << "You are teleported to the Ruins\n";
			currentPlayer->modRegion(OUTER_REGION);
			currentPlayer->modLocation(TILE_RUINS);
			break;
		case 5:
			cout << "You are teleported to the Hidden Valley\n";
			currentPlayer->modRegion(MIDDLE_REGION);
			currentPlayer->modLocation(6);
			break;
		case 6:
			cout << "You are teleported to the Cursed Glade\n";
			currentPlayer->modRegion(MIDDLE_REGION);
			currentPlayer->modLocation(4);
			break;
	}
}

void Event::MagicalVortex()
{
	cout << "A magical vortex whirls through the land. It absorbs all spells from all\n"
		 << "players. The spells and the Magical Vortex must be placed immediately on their\n"
		 << "appropriate discard piles.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::MarketDay()
{
	cout << "It is Market day. All players may trade gold, objects, spells, and followers\n"
		 << "(except the hag and the poltergeist) in their possession. When everybody has\n"
		 << "finished trading, the Market closes, place it in the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Mephistopheles()
{
	cout << "You have just been encountered by a Mephistopheles on a mission to this\n"
		 << "land. If you are evil, he increases your craft by one point. If you are\n"
		 << "good or neutral, he converts you to evil. He then returns to his own dark\n"
		 << "kingdom, place him on the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Patrol()
{
	cout << "A patrol of soldiers is trying to maintain law and order. They immediately send\n"
		 << "you back to your starting space and then march off to the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Pestilence()
{
	cout << "A pestilence has befouled this region (either outer or middle). All players\n"
		 << "in it must lose 1 life. The pestilence then vanishes, place it on the\n"
		 << "discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Raiders()
{
	cout << "A band of raiders attacks you and steals all your gold and objects. They\n"
		 << "immediately stash them at the Oasis (place the cards and tokens there) and\n"
		 << "retreat to their hideout. Place the Raider's card in the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Storm()
{
	cout << "A Storm sweeps through this region (either Outer or Middle). All players in it\n"
		 << "must miss 1 turn. The storm abates. Place it in the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Taxation()
{
	cout << "Roll 1 die to see who a tax of 1 gold has been levied on:\n"
		 << "All...\n"
		 << "1: Good\n"
		 << "2: Evil\n"
         << "3: Neutral\n"
		 << "4: with gold\n"
		 << "5: in Outer Region\n"
         << "6: in Middle Region\n"
         << "All those who have no gold are exempted. The tax is then lifted to the\n" 
		 << "discard pile.\n";

	cout << _name << ", not implemented yet!\n";
}

void Event::Volcano()
{
	cout << "A Volcano erupts with a crack of thunder. All Strangers in this region\n"
		 << "are engulfed and swept off into the discard pile.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::Werewolf()
{
	cout << "It's a full moon. One of your followers is a werewolf (roll a die for\n"
		 << "each follower, the highest score is the beast) who immediately attacks\n"
		 << "you with a strength of 6. If you do not have any followers, ignore\n"
		 << "this card. If you defeat the werewolf he goes to the discard pile. If\n"
		 << "he defeats you, lose a life and the follower remains on the space. He\n"
		 << "reverts to normal next turn.\n";
	cout << _name << ", not implemented yet!\n";
}

void Event::WhirlWind()
{
	cout << "A whirlwind whips up in this space. Roll a die for each item you are\n"
		 << "carrying;\n"
		 << "1: Object blows to a space one die roll clockwise around the board.\n"
		 << "2: Object blows to a space one die roll counter-clockwise around the\n"
		 << "   board.\n"
		 << "3-4: Object is blown into the discard pile and lost.\n"
		 << "5-6: You hold on to this object.\n";

	cout << _name << ", not implemented yet!\n";
}
