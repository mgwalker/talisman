#ifndef _INITIALIZE_H
#define _INITIALIZE_H

#include "Deck.h"
#include "Character.h"
//#include "Globals.h"

// Global variables.  (Re)defined in globals.h
// and setup as an extern so other classes can
// access this particular object.  This GLOBALS
// variable is part of MAIN.CPP due to the way
// Initialize.h is #include'd
struct GLOBAL_VARIABLES
{
	Deck* AdventureDeck;
	Deck* SpellDeck;
	CircularList* Players;
	GameBoard Board;
};
struct GLOBAL_VARIABLES GLOBALS;

// Character starting tiles.  All characters start at one of these
// eight locations.
#define TILE_CITY		(Tile*)(GLOBALS.Board.OUTER_REGION.at(23))
#define TILE_CRAGS		(Tile*)(GLOBALS.Board.OUTER_REGION.at(19))
#define TILE_CHAPEL		(Tile*)(GLOBALS.Board.OUTER_REGION.at(17))
#define TILE_GRAVEYARD	(Tile*)(GLOBALS.Board.OUTER_REGION.at(13))
#define TILE_VILLAGE	(Tile*)(GLOBALS.Board.OUTER_REGION.at(11))
#define TILE_FOREST		(Tile*)(GLOBALS.Board.OUTER_REGION.at(9))
#define TILE_RUINS		(Tile*)(GLOBALS.Board.OUTER_REGION.at(7))
#define TILE_TAVERN		(Tile*)(GLOBALS.Board.OUTER_REGION.at(5))

// Initialize the Adventure Deck (78 unique cards, 110 in the deck)
Deck* initAdventureDeck()
{
	Deck* deck = new Deck();

	// addCard function:
	//
	//   addCard(Card* cardToAdd);
	//     cardToAdd is the card to insert in the deck
	//
	//     Card constructor:
	//       new Card(void*(runFunction)(void*), void* parameters);
	//         runFunction is a pointer to the function to be run when this
	//            card is pulled from the deck.  It defines what the card
	//            does.
	//         parameters is currently a sort of placeholder for future
	//            actual parameters.  Eventually this will be replaced with
	//            a void** (array of any number of parameters) so that each
	//            run function can access exactly the parameters that it needs.

	/// ORIGINAL CARDS (78)
	/// ENEMIES
	deck->addCard((Card*)new Enemy(Enemy::Ape, "Ape", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Bandit, "Bandit", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Bandit, "Bandit", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Bear, "Bear", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Boar, "Boar", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Boar, "Boar", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Demon, "Demon", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Dragon, "Dragon", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Dragon, "Dragon", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Dragon, "Dragon", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Ghost, "Ghost", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Ghost, "Ghost", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Giant, "Giant", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Goblin, "Goblin", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Goblin, "Goblin", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Goblin, "Goblin", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Hobgoblin, "Hobgoblin", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Hobgoblin, "Hobgoblin", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Lion, "Lion", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Ogre, "Ogre", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Ogre, "Ogre", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Serpent, "Serpent", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Spectre, "Spectre", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Wolf, "Wolf", Card::ENEMY));
	deck->addCard((Card*)new Enemy(Enemy::Wraith, "Wraith", Card::ENEMY));

	/// EVENTS
	deck->addCard((Card*)new Event(Event::Angel, "Angel", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Blizzard, "Blizzard", Card::EVENT));
	deck->addCard((Card*)new Event(Event::BookOfSpells, "Book of Spells", Card::EVENT));
	deck->addCard((Card*)new Event(Event::CursedByAHag, "Cursed by a Hag", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Devil, "Devil", Card::EVENT));
	deck->addCard((Card*)new Event(Event::EvilDarkness, "Evil Darkness", Card::EVENT)); // 30
	deck->addCard((Card*)new Event(Event::Imp, "Imp", Card::EVENT));
	deck->addCard((Card*)new Event(Event::MagicalVortex, "Magical Vortex", Card::EVENT));
	deck->addCard((Card*)new Event(Event::MarketDay, "Market Day", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Mephistopheles, "Mephistopheles", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Pestilence, "Pestilence", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Raiders, "Raiders", Card::EVENT));
	deck->addCard((Card*)new Event(Event::Storm, "Storm", Card::EVENT));

	/// Followers
	deck->addCard((Card*)new Follower(Follower::Alchemist, "Alchemist", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Gnome, "Gnome", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Guide, "Guide", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Guide, "Guide", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Maiden, "Maiden", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Mercenary, "Mercenary", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Pixie, "Pixie", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Prince, "Prince", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Princess, "Princess", Card::FOLLOWER));
	deck->addCard((Card*)new Follower(Follower::Unicorn, "Unicorn", Card::FOLLOWER));

	/// Magic Objects
	deck->addCard((Card*)new MObject(MObject::Amulet, "Amulet", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::Cross, "Cross", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::HolyGrail, "Holy Grail", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::HolyLance, "Holy Lance", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::MagicBelt, "Magic Belt", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::OrbOfKnowledge, "Orb of Knowledge", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::PotionOfStrength, "Potion of Strength", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::Ring, "Ring", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::RuneSword, "Rune Sword", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::SolomonsCrown, "Solomon's Crown", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::Talisman, "Talisman", Card::MOBJECT));
	deck->addCard((Card*)new MObject(MObject::Talisman, "Talisman", Card::MOBJECT)); //60
	deck->addCard((Card*)new MObject(MObject::Wand ,"Wand", Card::MOBJECT));

	/// Objects
	deck->addCard((Card*)new Object(Object::Armour, "Armour", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Axe, "Axe", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::BagOfGold, "Bag of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::TwoBagsOfGold, "2 Bags of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::TwoBagsOfGold, "2 Bags of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::TwoBagsOfGold, "2 Bags of Gold", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Helmet, "Helmet", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Mule, "Mule", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Raft, "Raft", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Shield, "Shield", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::Sword, "Sword", Card::OBJECT));//90
	deck->addCard((Card*)new Object(Object::Sword, "Sword", Card::OBJECT));
	deck->addCard((Card*)new Object(Object::WaterBottle, "Water Bottle", Card::OBJECT));

	/// PLACES
	deck->addCard((Card*)new Place(Place::Cave, "Cave", Card::PLACE));
	deck->addCard((Card*)new Place(Place::FountainOfWisdom, "Fountain of Wisdom", Card::PLACE));
	deck->addCard((Card*)new Place(Place::MagicPortal, "Magic Portal", Card::PLACE));
	deck->addCard((Card*)new Place(Place::MagicStream, "Magic Stream", Card::PLACE));
	deck->addCard((Card*)new Place(Place::Market, "Market", Card::PLACE));
	deck->addCard((Card*)new Place(Place::Marsh, "Marsh", Card::PLACE));
	deck->addCard((Card*)new Place(Place::Maze, "Maze", Card::PLACE));
	deck->addCard((Card*)new Place(Place::PoolOfLife, "Pool of Life", Card::PLACE));
	deck->addCard((Card*)new Place(Place::Shrine, "Shrine", Card::PLACE));

	/// STRANGERS
	deck->addCard((Card*)new Stranger(Stranger::Enchanter, "Enchanter", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Fairy, "Fairy", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Healer, "Healer", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Hermit, "Hermit", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Mage, "Mage", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Phantom, "Phantom", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Siren, "Siren", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Sorcerer, "Sorcerer", Card::STRANGER));
	deck->addCard((Card*)new Stranger(Stranger::Witch, "Witch", Card::STRANGER));//110

	// The addCard function puts the new cards direction into the discard pile.
	// To finish initializing the deck, the discard pile must be shuffled back
	// into the normal deck.
	deck->shuffle();

	return deck;
}

Deck* initSpellDeck()
{
	Deck* deck = new Deck();

	// addCard function:
	//
	//   addCard(Card* cardToAdd);
	//     cardToAdd is the card to insert in the deck
	//
	//     Spell constructor:
	//       new Spell(void*(runFunction)(void*), void* parameters, char whenToCast);
	//         runFunction is a pointer to the function to be run when this
	//            card is pulled from the deck.  It defines what the card
	//            does.
	//         parameters is currently a sort of placeholder for future
	//            actual parameters.  Eventually this will be replaced with
	//            a void** (array of any number of parameters) so that each
	//            run function can access exactly the parameters that it needs.
	//        whenToCast is a bitfield specifying when the spell can be cast.
	//            Valid values are static variables in the Spell class, such as
	//            Spell::CAST_ANYTIME or Spell::CAST_START_TURN_PRE_MOVE

	deck->addCard((Card*)new Spell(Spell::Acquisition, "Acquisition", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Alchemy, "Alchemy", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::Barrier, "Barrier", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE | Spell::CAST_AFTER_MOVE_PRE_ENCOUNTER));
	deck->addCard((Card*)new Spell(Spell::Brainwave, "Brainwave", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Counterspell, "Counterspell", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::DestroyMagic, "Destroy Magic", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::Destruction, "Destruction", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE | Spell::CAST_AFTER_MOVE_PRE_ENCOUNTER));
	deck->addCard((Card*)new Spell(Spell::Displacement, "Displacement", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE | Spell::CAST_AFTER_MOVE_PRE_ENCOUNTER));
	deck->addCard((Card*)new Spell(Spell::Divination, "Divination", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::FingerOfDeath, "Finger of Death", Card::SPELL, Spell::CAST_DURING_ENCOUNTER));
	deck->addCard((Card*)new Spell(Spell::Fireball, "Fireball", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::GustOfWind, "Gust of Wind", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Healing, "Healing", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Hex, "Hex", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::Immobility, "Immobility", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Invisibility, "Invisibility", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::LightningBolt, "Lightning Bolt", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Mesmerism, "Mesmerism", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Metamorph, "Metamorph", Card::SPELL, Spell::CAST_AFTER_CARDS));
	deck->addCard((Card*)new Spell(Spell::MindSteal, "Mind-Steal", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Misdirection, "Misdirection", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Nullify, "Nullify", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Preservation, "Preservation", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::PsionicBlast, "Psionic Blast", Card::SPELL, Spell::CAST_DURING_ENCOUNTER));
	deck->addCard((Card*)new Spell(Spell::Random, "Random", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Reflection, "Reflection", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::SlowMotion, "Slow Motion", Card::SPELL, 0x20));
	deck->addCard((Card*)new Spell(Spell::Speed, "Speed", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::SummonStorm, "Summon Storm", Card::SPELL, Spell::CAST_ANYTIME));
	deck->addCard((Card*)new Spell(Spell::Teleport, "Teleport", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::TemporalWarp, "Temporal Warp", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));
	deck->addCard((Card*)new Spell(Spell::WaterWalking, "Water Walking", Card::SPELL, Spell::CAST_START_TURN_PRE_MOVE));

	// The addCard function puts the new cards direction into the discard pile.
	// To finish initializing the deck, the discard pile must be shuffled back
	// into the normal deck.
	deck->shuffle();

	return deck;
}

CircularList* initPlayers(int numPlayers)
{
	CircularList* ret = new CircularList;
	LinkedList characters;

	// append function:
	//
	//   append(void* objectToAdd);
	//     objectToAdd is the player to add to the queue
	//
	//     Character constructor:
	//       new Character(char* name, uint startStrength, uint startCraft,
	//                     uint startSpells, char alignment, Tile* startLocation);
	//         name is is the name of the character type
	//         startStrength is the character's starting strength
	//         startCraft is the character's starting craft
	//         startSpells is the number of spells the character starts with
	//         alignment is one of Character::EVIL, Character::NEUTRAL, or
	//            Character::GOOD
	//         startLocation is the tile where the character starts.  There are only
	//            eight valid starting tiles:  TILE_CITY, TILE_CRAGS, TILE_CHAPEL,
	//            TILE_GRAVEYARD, TILE_VILLAGE, TILE_FOREST, TILE_RUINS,
	//            and TILE_TAVERN

	characters.append(new Character("Assassin",   3,3,0,Character::EVIL,    TILE_CITY));
	characters.append(new Character("Druid",      3,4,1,Character::NEUTRAL, TILE_FOREST));
	//characters.append(new Character("Dwarf",      3,3,0,Character::NEUTRAL, TILE_CRAGS));
	//characters.append(new Character("Elf",        3,4,0,Character::GOOD,    TILE_FOREST));
	//characters.append(new Character("Ghoul",      2,4,0,Character::EVIL,    TILE_GRAVEYARD));
	//characters.append(new Character("Minstrel",   2,4,0,Character::GOOD,    TILE_TAVERN));
	//characters.append(new Character("Monk",       2,3,0,Character::GOOD,    TILE_VILLAGE));
	//characters.append(new Character("Priest",     2,4,1,Character::GOOD,    TILE_CHAPEL));
	//characters.append(new Character("Prophetess", 2,4,1,Character::GOOD,    TILE_CHAPEL));
	//characters.append(new Character("Sorceress",  2,4,1,Character::EVIL,    TILE_GRAVEYARD));
	//characters.append(new Character("Theif",      3,3,0,Character::NEUTRAL, TILE_CITY));
	//characters.append(new Character("Troll",      6,1,0,Character::NEUTRAL, TILE_CRAGS));
	//characters.append(new Character("Warrior",    4,3,0,Character::NEUTRAL, TILE_TAVERN));
	characters.append(new Character("Wizard",     2,5,2,Character::EVIL,    TILE_GRAVEYARD));

	// Randomize the players
	for(int i = 0; i < numPlayers; i++)
	{
		unsigned char temp = (unsigned char)(rand()%(characters.size()));
		//unsigned int temp = 0;
		ret->prepend(characters[temp]);
		characters.erase(temp);
	}

	for(unsigned int i = 0; i < characters.size(); i++)
		((Character*)characters.at(i))->_currentTile->removePlayer(characters.at(i));
	
	// IMPLEMENT
	//characters.empty();
	return ret;
}

#endif