#ifndef _CHARACTER_H
#define _CHARACTER_H

#define uint  unsigned int
#define uchar unsigned char

#include <string>
#include "LinkedList.h"

// Character
class Character
{
	public:

		// Constructor
		Character(std::string name, unsigned char str, unsigned char craft, unsigned char spells, unsigned char align, Tile* startTile);

		// Destructor
		~Character();

		unsigned short int roll(unsigned short int dice);

		// Character constants - character stat constants
		static const unsigned char STR		= 0;
		static const unsigned char CRAFT	= 1;
		static const unsigned char GOLD		= 2;
		static const unsigned char ALIGN	= 3;
		static const unsigned char LIVES	= 4;

		// Character constants - character alignment constants
		static const unsigned char GOOD		= 5;
		static const unsigned char EVIL		= 6;
		static const unsigned char NEUTRAL	= 7;

		// modStat
		//   Modifies a character's strength, craft, gold,
		//   lives, or alignment. Keeps gold and lives at 0 
		//   or above. Keeps str and craft at starting value
		//   or above.
		//
		//   stat  - stat being modified
		//   value - value to modify stat with
		void modStat(unsigned char stat, unsigned char value);

		// getStat
		//   Returns a character's strength, craft, gold,
		//   number of lives, or alignment
		//
		//   stat  - stat being requested
		//   mask  - describes which objects, followers, etc can be applied to the stat
		//           the first 4 bits represent the following
		//                 3 - Spells allowed
		//                 2 - Magic objects allowed
		//                 1 - Objects allowed
		//                 0 - Followers allowed
		unsigned char getStat(unsigned char stat, unsigned char mask);

		// Character constants - character combat constants
		static const bool WIN	= true;
		static const bool LOSE	= false;
		static const unsigned char SPELLS = 0x04;
		static const unsigned char MOBJECTS = 0x03;
		static const unsigned char OBJECTS = 0x02;
		static const unsigned char FOLLOWERS = 0x01;

		// PVP
		//    Player Vs. Player Combat
		//
		//    challenger - pointer to challenging player
		//	  mode       - craft or strength
		//    rules      - describes which objects, followers, etc can be used by each player
		//                 bits 7,6,5,4 describe the current player,  bits 3,2,1,0 describe the opponent player
		//                 the 4 bits for each character represent the following
		//                 7,3 - Spells allowed
		//                 6,2 - Magic objects allowed
		//                 5,1 - Objects allowed
		//                 4,0 - Followers allowed
		//
		bool PVP(Character *challenger, unsigned char mode, unsigned char rules);

		void doTurn();

		/*void stats()
		{
			std::cout << "\t" << _name << std::endl;
			std::cout << "\t\t" << "Strength: " << (int)_str << std::endl;
			std::cout << "\t\t" << "Craft:    " << (int)_craft << std::endl;
			std::cout << "\t\t" << "Gold:     " << (int)_gold << std::endl;
			std::cout << "\t\t" << "Align:    " << (int)_alignment << std::endl;
			std::cout << "\t\t" << "Lives:    " << (int)_lives << std::endl;
			std::cout << "\t\t" << "Spells:   " << std::endl;
			for(unsigned int i = 0; i < spells.size(); i++)
				((Card*)spells.at(i))->Run();

			std::cout << "\t\t" << "Objects:   " << std::endl;
			for(unsigned int i = 0; i < objects.size(); i++)
				((Card*)objects.at(i))->Run();

			std::cout << "\t\t" << "Followers: " << std::endl;
			for(unsigned int i = 0; i < followers.size(); i++)
				((Card*)followers.at(i))->Run();
		}*/

		LinkedList* castableSpells(uchar when);

		Tile*			_currentTile;	// Crap II
		std::string		_name;			// name

	private:
	
		// Stats
		unsigned char	_str;			// strength
		unsigned char	_craft;			// craft
		unsigned char	_gold;			// gold
		unsigned char	_alignment;		// alignment
		unsigned char	_lives;			// number of lives
		unsigned char	_missTurnCnt;	// number of turns to miss

		// Start values
		unsigned char	_startStr;		// starting strength
		unsigned char	_startCraft;	// starting craft
		unsigned char	_startSpells;	// starting spells
		Tile*			_startTile;		// starting tile

		// Turn-related functions
		void preRoll();
		uint preMove();
		void move(uint roll);
		void preEncounter();
		void encounter();
		void endTurn();

	public:
		// Cards
		LinkedList		spells;			// spells
		LinkedList		objects;		// objects
		LinkedList		followers;		// followers

		LinkedList		nextTurn;		// list of tasks to perform at beginning of next turn
		static void		nop(void*);		// example next-turn function

		// Other
		void(*anytime)(void*);			// function ptr to anytime function	
};

#endif
