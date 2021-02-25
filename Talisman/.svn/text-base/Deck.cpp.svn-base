
#include "Deck.h"


Card::Card(void(*funcName)(LinkedList), char* name, unsigned char type)
{
	_name = name;
	_cardFunction = funcName;
	_type = type;
}

// Destructor
Card::~Card()
{

}

// Perform card operations
void Card::Run()
{
	_cardFunction(makeParamList());
}

char* Card::name()
{
	return _name;
}

Spell::Spell(void(*funcName)(LinkedList), char* name, unsigned char type, unsigned char whenToCast) : Card(funcName, name, type)
{
	_when2Cast = whenToCast;
}

bool Spell::castable(unsigned char turnStage)
{
	return ((turnStage & _when2Cast) == 0) ? false : true;
}

void Spell::Acquisition(LinkedList params)
{
}

void Spell::Alchemy(LinkedList params)
{
}

void Spell::Barrier(LinkedList params)
{
}

void Spell::Brainwave(LinkedList params)
{
}

void Spell::Counterspell(LinkedList params)
{
}

void Spell::DestroyMagic(LinkedList params)
{
}

void Spell::Destruction(LinkedList params)
{
}

void Spell::Displacement(LinkedList params)
{
}

void Spell::Divination(LinkedList params)
{
}

void Spell::FingerOfDeath(LinkedList params)
{
}

void Spell::Fireball(LinkedList params)
{
}

void Spell::GustOfWind(LinkedList params)
{
}

void Spell::Healing(LinkedList params)
{
}

void Spell::Hex(LinkedList params)
{
}

void Spell::Immobility(LinkedList params)
{
}

void Spell::Invisibility(LinkedList params)
{
}

void Spell::LightningBolt(LinkedList params)
{
}

void Spell::Mesmerism(LinkedList params)
{
}

void Spell::Metamorph(LinkedList params)
{
}

void Spell::MindSteal(LinkedList params)
{
}

void Spell::Misdirection(LinkedList params)
{
}

void Spell::Nullify(LinkedList params)
{
}

void Spell::Preservation(LinkedList params)
{
}

void Spell::PsionicBlast(LinkedList params)
{
}

void Spell::Random(LinkedList params)
{
}

void Spell::Reflection(LinkedList params)
{
}

void Spell::SlowMotion(LinkedList params)
{
}

void Spell::Speed(LinkedList params)
{
}

void Spell::SummonStorm(LinkedList params)
{
}

void Spell::Teleport(LinkedList params)
{
}

void Spell::TemporalWarp(LinkedList params)
{
}

void Spell::WaterWalking(LinkedList params)
{
}


Object::Object(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Object::Armour(LinkedList params)
{
}

void Object::Axe(LinkedList params)
{
}

void Object::BagOfGold(LinkedList params)
{
}

void Object::TwoBagsOfGold(LinkedList params)
{
}

void Object::Helmet(LinkedList params)
{
}

void Object::Mule(LinkedList params)
{
}

void Object::Raft(LinkedList params)
{
}

void Object::Shield(LinkedList params)
{
}

void Object::Sword(LinkedList params)
{
}

void Object::WaterBottle(LinkedList params)
{
}

MObject::MObject(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void MObject::Amulet(LinkedList params)
{
}

void MObject::Cross(LinkedList params)
{
}

void MObject::HolyGrail(LinkedList params)
{
}

void MObject::HolyLance(LinkedList params)
{
}

void MObject::MagicBelt(LinkedList params)
{
}

void MObject::OrbOfKnowledge(LinkedList params)
{
}

void MObject::PotionOfStrength(LinkedList params)
{
}

void MObject::Ring(LinkedList params)
{
}

void MObject::RuneSword(LinkedList params)
{
}

void MObject::SolomonsCrown(LinkedList params)
{
}

void MObject::Talisman(LinkedList params)
{
}

void MObject::Wand(LinkedList params)
{
}


Follower::Follower(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Follower::Alchemist(LinkedList params)
{
}

void Follower::Gnome(LinkedList params)
{
}

void Follower::Guide(LinkedList params)
{
}

void Follower::Maiden(LinkedList params)
{
}

void Follower::Mercenary(LinkedList params)
{
}

void Follower::Pixie(LinkedList params)
{
}

void Follower::Prince(LinkedList params)
{
}

void Follower::Princess(LinkedList params)
{
}

void Follower::Unicorn(LinkedList params)
{
}


Stranger::Stranger(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Stranger::Enchanter(LinkedList params)
{
}

void Stranger::Fairy(LinkedList params)
{
}

void Stranger::Healer(LinkedList params)
{
}

void Stranger::Hermit(LinkedList params)
{
}

void Stranger::Mage(LinkedList params)
{
}

void Stranger::Phantom(LinkedList params)
{
}

void Stranger::Siren(LinkedList params)
{
}

void Stranger::Sorcerer(LinkedList params)
{
}

void Stranger::Witch(LinkedList params)
{
}

Place::Place(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Place::Cave(LinkedList params)
{
}

void Place::FountainOfWisdom(LinkedList params)
{
}

void Place::MagicPortal(LinkedList params)
{
}

void Place::MagicStream(LinkedList params)
{
}

void Place::Market(LinkedList params)
{
}

void Place::Marsh(LinkedList params)
{
}

void Place::Maze(LinkedList params)
{
}

void Place::PoolOfLife(LinkedList params)
{
}

void Place::Shrine(LinkedList params)
{
}


Enemy::Enemy(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Enemy::Ape(LinkedList params)
{
}

void Enemy::Bandit(LinkedList params)
{
}

void Enemy::Bear(LinkedList params)
{
}

void Enemy::Boar(LinkedList params)
{
}

void Enemy::Demon(LinkedList params)
{
}

void Enemy::Dragon(LinkedList params)
{
}

void Enemy::Ghost(LinkedList params)
{
}

void Enemy::Giant(LinkedList params)
{
}

void Enemy::Goblin(LinkedList params)
{
}

void Enemy::Hobgoblin(LinkedList params)
{
}

void Enemy::Lion(LinkedList params)
{
}

void Enemy::Ogre(LinkedList params)
{
}

void Enemy::Serpent(LinkedList params)
{
}

void Enemy::Spectre(LinkedList params)
{
}

void Enemy::Wolf(LinkedList params)
{
}

void Enemy::Wraith(LinkedList params)
{
}


Event::Event(void(*funcName)(LinkedList), char* name, unsigned char type) : Card(funcName, name, type)
{
}

void Event::Angel(LinkedList params)
{
}

void Event::Blizzard(LinkedList params)
{
}

void Event::BookOfSpells(LinkedList params)
{
}

void Event::CursedByAHag(LinkedList params)
{
}

void Event::Devil(LinkedList params)
{
}

void Event::EvilDarkness(LinkedList params)
{
}

void Event::Imp(LinkedList params)
{
}

void Event::MagicalVortex(LinkedList params)
{
}

void Event::MarketDay(LinkedList params)
{
}

void Event::Mephistopheles(LinkedList params)
{
}

void Event::Pestilence(LinkedList params)
{
}

void Event::Raiders(LinkedList params)
{
}

void Event::Storm(LinkedList params)
{
}


Deck::Deck()
{
}

Deck::Deck(Card** cards, short int numCards)
{
	for(short int i = 0; i < numCards; i++)
		_discardPile.prepend(cards[i]);
	this->shuffle();
}

// Destructor
Deck::~Deck()
{
}

// addCard
//  Adds a card to the deck
void Deck::addCard(Card* newCard)
{
	_discardPile.prepend(newCard);
	//std::cout << _discardPile.size() << " " << newCard->getDesc() << std::endl;
}

// shuffle
//   Shuffles the cards on the discard pile and
//   appends to the back of the active deck
void Deck::shuffle()
{
	int size = _discardPile.size();
	for(int i = 0; i < size; i++)
	{
		int card = (int)(rand()%(_discardPile.size()));
		//Card* x = (Card*)_discardPile.at(card);
		_activeDeck.append(_discardPile[card]);
		_discardPile.erase(card);
	}
}

// getCard
//   Gets one card from the top of
//   the active deck
Card* Deck::getCard()
{
	Card* card = (Card*)_activeDeck[0];
	_discardPile.append(card);
	_activeDeck.erase((unsigned int)0);

	if(_activeDeck.size() < 25)
		shuffle();

	return card;
}

// getCard
//   Gets some number of cards from the top of
//   the active deck
//
//   numCards - the number of cards to draw
Card** Deck::getCard(unsigned char numCards)
{
	Card** cards = new Card*[numCards];
	for(unsigned char i = 0; i < numCards; i++)
	{
		cards[i] = (Card*)_activeDeck[i];
		_discardPile.append(_activeDeck.at(i));
		_activeDeck.erase(i);
	}

	if(_activeDeck.size() < 25)
		shuffle();

	return cards;
}

// getCard
//   Gets some number of cards from the top of
//   the active deck
//
//   numCards - the number of cards to draw
//   selected - which cards to draw
Card** Deck::getCard(unsigned char numCards, unsigned char selected)
{
	Card** cards = new Card*[numCards];
	unsigned char cardsChosen = 0;
	for(unsigned char i = 0; i < 8; i++)
	{
		if((selected & (1 << i)) && cardsChosen < numCards)
		{
			cards[cardsChosen] = (Card*)_activeDeck[i-cardsChosen];
			_discardPile.append(_activeDeck.at(i-cardsChosen));
			_activeDeck.erase(i-cardsChosen);
			cardsChosen++;
		}
	}

	if(_activeDeck.size() < 25)
		shuffle();

	return cards;
}

// peek
//   Peek at some number of cards from the top
//   of the deck
//
//   numCards - the number of cards to peek at
Card** Deck::peek(unsigned char numCards)
{
	Card** cards = new Card*[numCards];
	for(unsigned char i = 0; i < numCards; i++)
		cards[i] = (Card*)_activeDeck[i];
	return cards;
}

// discard
//   Adds the card to the discard pile
//
//   card - the card to discard
void Deck::discard(Card* card)
{
	_discardPile.prepend(card);
}
