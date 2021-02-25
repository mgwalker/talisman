#ifndef _DECK_H
#define _DECK_H

#include "LinkedList.h"
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

class Card
{
	public:
		// Constructor
		Card(void(*funcName)(LinkedList), char* name, unsigned char type);

		// Destructor
		~Card();
		void Run();
		char* name();


		static const unsigned char ENEMY = 0x01;
		static const unsigned char EVENT = 0x02;
		static const unsigned char STRANGER = 0x04;
		static const unsigned char PLACE = 0x08;
		static const unsigned char OBJECT = 0x10;
		static const unsigned char MOBJECT = 0x20;
		static const unsigned char FOLLOWER = 0x40;
		static const unsigned char SPELL = 0x80;

	private:
		void		(*_cardFunction)(LinkedList);	// ptr to correct card function
		char*		_name;
		unsigned	_type;

		LinkedList  makeParamList()
		{
			LinkedList	params;	// paramters for tile function
			return params;
		}

};

class Spell : public Card
{
	public:
		Spell(void(*funcName)(LinkedList), char* name, unsigned char type, unsigned char whenToCast);
		bool castable(unsigned char);

		static const unsigned char CAST_START_TURN_PRE_MOVE = 0x01;
		static const unsigned char CAST_AFTER_MOVE_PRE_ENCOUNTER = 0x02;
		static const unsigned char CAST_DURING_ENCOUNTER = 0x04;
		static const unsigned char CAST_AFTER_CARDS = 0x08;
		// 0x10 -- start of target's turn
		// 0x20
		// 0x40
		static const unsigned char CASTABLE_ANYTIME = 0x80;
		static const unsigned char CAST_ANYTIME = 0xFF;

		static void Acquisition(LinkedList params);
		static void Alchemy(LinkedList params);
		static void Barrier(LinkedList params);
		static void Brainwave(LinkedList params);
		static void Counterspell(LinkedList params);
		static void DestroyMagic(LinkedList params);
		static void Destruction(LinkedList params);
		static void Displacement(LinkedList params);
		static void Divination(LinkedList params);
		static void FingerOfDeath(LinkedList params);
		static void Fireball(LinkedList params);
		static void GustOfWind(LinkedList params);
		static void Healing(LinkedList params);
		static void Hex(LinkedList params);
		static void Immobility(LinkedList params);
		static void Invisibility(LinkedList params);
		static void LightningBolt(LinkedList params);
		static void Mesmerism(LinkedList params);
		static void Metamorph(LinkedList params);
		static void MindSteal(LinkedList params);
		static void Misdirection(LinkedList params);
		static void Nullify(LinkedList params);
		static void Preservation(LinkedList params);
		static void PsionicBlast(LinkedList params);
		static void Random(LinkedList params);
		static void Reflection(LinkedList params);
		static void SlowMotion(LinkedList params);
		static void Speed(LinkedList params);
		static void SummonStorm(LinkedList params);
		static void Teleport(LinkedList params);
		static void TemporalWarp(LinkedList params);
		static void WaterWalking(LinkedList params);

	private:
		unsigned char _when2Cast; /* Bit 0 - anytime
								   Bit 1 - start turn, before move
								   Bit 2 - immediately after move
								   Bit 3 - encounter
								   Bit 4 - after drawing cards
								   Bit 5 - start of target's turn */

};

class Object : Card
{
	public:
		Object(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Armour(LinkedList params);
		static void Axe(LinkedList params);
		static void BagOfGold(LinkedList params);
		static void TwoBagsOfGold(LinkedList params);
		static void Helmet(LinkedList params);
		static void Mule(LinkedList params);
		static void Raft(LinkedList params);
		static void Shield(LinkedList params);
		static void Sword(LinkedList params);
		static void WaterBottle(LinkedList params);


		bool _purchase; // if true, do not put in discard pile
						// since purchase cards are created as
						// needed and do not belong to the deck
};

class MObject : Card
{
	public:
		MObject(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Amulet(LinkedList params);
		static void Cross(LinkedList params);
		static void HolyGrail(LinkedList params);
		static void HolyLance(LinkedList params);
		static void MagicBelt(LinkedList params);
		static void OrbOfKnowledge(LinkedList params);
		static void PotionOfStrength(LinkedList params);
		static void Ring(LinkedList params);
		static void RuneSword(LinkedList params);
		static void SolomonsCrown(LinkedList params);
		static void Talisman(LinkedList params);
		static void Wand(LinkedList params);
};

class Follower : Card
{
	public:
		Follower(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Alchemist(LinkedList params);
		static void Gnome(LinkedList params);
		static void Guide(LinkedList params);
		static void Maiden(LinkedList params);
		static void Mercenary(LinkedList params);
		static void Pixie(LinkedList params);
		static void Prince(LinkedList params);
		static void Princess(LinkedList params);
		static void Unicorn(LinkedList params);
};

class Stranger : Card
{
	public:
		Stranger(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Enchanter(LinkedList params);
		static void Fairy(LinkedList params);
		static void Healer(LinkedList params);
		static void Hermit(LinkedList params);
		static void Mage(LinkedList params);
		static void Phantom(LinkedList params);
		static void Siren(LinkedList params);
		static void Sorcerer(LinkedList params);
		static void Witch(LinkedList params);//110
};

class Place : Card
{
	public:
		Place(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Cave(LinkedList params);
		static void FountainOfWisdom(LinkedList params);
		static void MagicPortal(LinkedList params);
		static void MagicStream(LinkedList params);
		static void Market(LinkedList params);
		static void Marsh(LinkedList params);
		static void Maze(LinkedList params);
		static void PoolOfLife(LinkedList params);
		static void Shrine(LinkedList params);
};

class Enemy : Card
{
	public:
		Enemy(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Ape(LinkedList params);
		static void Bandit(LinkedList params);
		static void Bear(LinkedList params);
		static void Boar(LinkedList params);
		static void Demon(LinkedList params);
		static void Dragon(LinkedList params);
		static void Ghost(LinkedList params);
		static void Giant(LinkedList params);
		static void Goblin(LinkedList params);
		static void Hobgoblin(LinkedList params);
		static void Lion(LinkedList params);
		static void Ogre(LinkedList params);
		static void Serpent(LinkedList params);
		static void Spectre(LinkedList params);
		static void Wolf(LinkedList params);
		static void Wraith(LinkedList params);
};

class Event : Card
{
	public:
		Event(void(*funcName)(LinkedList), char* name, unsigned char type);

		static void Angel(LinkedList params);
		static void Blizzard(LinkedList params);
		static void BookOfSpells(LinkedList params);
		static void CursedByAHag(LinkedList params);
		static void Devil(LinkedList params);
		static void EvilDarkness(LinkedList params);
		static void Imp(LinkedList params);
		static void MagicalVortex(LinkedList params);
		static void MarketDay(LinkedList params);
		static void Mephistopheles(LinkedList params);
		static void Pestilence(LinkedList params);
		static void Raiders(LinkedList params);
		static void Storm(LinkedList params);
};

class Deck
{
	public:
		// Constructor
		Deck();
		Deck(Card** cards, short int numCards);

		// Destructor
		~Deck();

		// addCard
		//  Adds a card to the deck
		void addCard(Card* newCard);

		// shuffle
		//   Shuffles the cards on the discard pile and
		//   appends to the back of the active deck
		void shuffle();

		Card* getCard();

		// getCard
		//   Gets some number of cards from the top of
		//   the active deck
		//
		//   numCards - the number of cards to draw
		Card** getCard(unsigned char numCards);

		// getCard
		//   Gets some number of cards from the top of
		//   the active deck
		//
		//   numCards - the number of cards to draw
		//   selected - which cards to draw
		Card** getCard(unsigned char numCards, unsigned char selected);

		// peek
		//   Peek at some number of cards from the top
		//   of the deck
		//
		//   numCards - the number of cards to peek at
		Card** peek(unsigned char numCards);

		// discard
		//   Adds the card to the discard pile
		//
		//   card - the card to discard
		void discard(Card* card);

	private:
		LinkedList _activeDeck;
		LinkedList _discardPile;
};

#endif