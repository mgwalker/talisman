/************************************************
 *												*
 * Talisman Tile Class Declaration				*
 *												*
 * Declares the Tile class.						*
 *												*
 ************************************************/

// Tiles for a region will be loaded short into a circularly linked list named after the region
// when a player leaves a region to go another, he will use the linked list named after the new
// region... these list are created at the beginning of each game.

#ifndef TILE_CLASS
#define TILE_CLASS

class Tile
{
	public:
		virtual void Run() = 0;
		void modPlayer(char);	// modPlayer('-', character1) to remove character
											// modPlayer('+', character1) to add character
		void modCard(char, Acards *);		// same principle as modPlayer
		void display();						// displays all cards and characters on the tile
		short int getCardNum();					// number of cards on tile already, stupid
		Acards* getCard();					// card
		string getName();
		short int getId();
	protected:
		LinkedList _cardsOnTile;		//existing cards on tile
		LinkedList _playersOnTile;	//existing players on tile
		short int _cardLimit;						//number of cards the tile can hold
		string _name;	
		short int _id;							//id number	

};

class DrawTile : public Tile
{
	public:
		DrawTile(short int, short int, string); //  idnum, cardlimit, name
		void Run();

};

class City : public Tile
{
	public:
		City();
		void Run();
};

class Crags : public Tile
{
	public:
		Crags();
		void Run();
};

class Chapel : public Tile
{
	public:
		Chapel();
		void Run();
};

class Sentinel : public Tile
{
	public:
		Sentinel();
		void Run();
};

class Graveyard : public Tile
{
	public:
		Graveyard();
		void Run();
};

class Village : public Tile
{
	public:
		Village();
		void Run();
};

class Forest : public Tile
{
	public:
		Forest();
		void Run();
};

class Tavern : public Tile
{
	public:
		Tavern();
		void Run();
};

class WarlockCave : public Tile
{
	public:
		WarlockCave();
		void Run();
};

class Runes : public Tile
{
	public:
		Runes(short int AddToEnemy, short int idNum);
		void Run();
	private:
		short int _addToEnemy;
};

class Chasm : public Tile
{
	public:
		Chasm();
		void Run();
};

class CursedGlade : public Tile
{
	public:
		CursedGlade();
		void Run();
};

class HiddenValley : public Tile
{
	public:
		HiddenValley();
		void Run();
};

class BlackKnight : public Tile
{
	public:
		BlackKnight();
		void Run();
};


class PortalOfPower : public Tile
{
	public:
		PortalOfPower();
		void Run();
};

class Castle : public Tile
{
	public:
		Castle();
		void Run();
};

class Temple : public Tile
{
	public:
		Temple();
		void Run();
};

class Desert : public Tile
{
	public:
		Desert(short int idNum);
		void Run();
};

class Oasis : public Tile
{
	public:
		Oasis();
		void Run();
};

class PlainOfPeril : public Tile
{
	public:
		PlainOfPeril();
		void Run();
};

class Crypt : public Tile
{
	public:
		Crypt();
		void Run();
};

class DiceWithDeath : public Tile
{
	public:
		DiceWithDeath();
		void Run();
};

class WerewolfDen : public Tile
{
	public:
		WerewolfDen();
		void Run();
};

class ValleyOfFire : public Tile
{
	public:
		ValleyOfFire();
		void Run();
};

class ThePits : public Tile
{
	public:
		ThePits();
		void Run();
};

class VampiresTower : public Tile
{
	public:
		VampiresTower();
		void Run();
};

class TheMines : public Tile
{
	public:
		TheMines();
		void Run();
};
#endif

