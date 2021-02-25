/************************************************
 *												*
 * Talisman Character Base Class Declaration	*
 *												*
 * Declares the Character base class, from		*
 * which all other Character classes are		*
 * derived.										*
 *												*
 ************************************************/

#ifndef CHARACTER_CLASS
#define CHARACTER_CLASS
#include <string>

using namespace std;
/*@========================================================================
	@Class	Character	void

	@Created	"Jason Pike"	"9/21/02"
	@Modified	"Greg Walker"	"10/2/02"
	@Modified	"Jason Pike"	"11/16/02"

	@MFunction	void	public	Character	"Character constructor."

	@MFunction	short int		public	getAlign	"Returns the character's alignment."
	@MFunction	short int		public	getCraft	"Returns the character's craft poshort ints."
	@MFunction	short int		public	getGold		"Returns the amount of gold the character has."
	@MFunction	short int		public	getId		"Returns the character's id number."
	@MFunction	short int		public	getLives	"Returns the number of lives the character has."
	@MFunction	short int		public	getLocation	"Returns the map id for the tile the character is on."
	@MFunction	string	public	getName		"Returns the character's name."
	@MFunction	short int		public	getStr		"Returns the character's strength poshort ints."
	@MFunction	short int		public	getRegion	"Returns the id number of the region the character is in."

	@MFunction	void	public	modAlign	"Modify the character's alignment."
	@MFunction	void	public	modCraft	"Modify the character's craft."
	@MFunction	void	public	modExp		"Modify the character's experience in either craft or strength."
	@MFunction	void	public	modGold		"Modify the amount of gold the character has."
	@MFunction	void	public	modLives	"Modify the number of lives the character has."
	@MFunction	short int		public	modLocation	"Modify the character's map location."
	@MFunction	void	public	modStr		"Modify the character's strength."

	@MFunction	void	public	charRoll	"Perform a dice roll for this character."
	@MFunction	void	public	preRoll		"Perform this character's pre-roll abilities."

	@MData		short int		private	_align		"The character's alignment."
	@MData		short int		private	_craft		"The character's craft."
	@MData		short int		private	_craftExp	"Number of craft experience poshort ints the character has."
	@MData		short int		private	_dice		"Number of dice the character can roll for movement."
	@MData		short int		private	_gold		"How much gold the character has."
	@MData		short int		private	_id			"The character's id number."
	@MData		short int		private	_lives		"How many lives the character has.
	@MData		short int		private	_location	"The character's location on the map."
	@MData		char*	public	_name		"The character's name."
	@MData		short int		private	_region		"The region the character is in."
	@MData		short int		private	_str		"The character's strength."
	@MData		short int		private	_strExp		"Number of strength experience poshort ints the character has."

	@Desc	"Generic character class.  Specific character classes are derived from this.  The preRoll 
	         and charRoll functions must be defined in the derived classes."
========================================================================@*/
class Character
{
	public:
		Character();

		bool chkAlive();
		bool chkMissTurns();

		short int getAlign();
		short int getCraft();
		short int getGold();
		short int getId();
		short int getLives();
		short int getLocation();
		short int getMissTurns();
		string getName();
		short int getRegion();
		short int getStr();

		void modAlign(short int);
		void modCraft(short int);
		void modExp(char, short int);
		void modFollower(char, Acards *);
		void modGold(short int);
		void modLives(short int);
		void modLocation(short int);
		void modMissTurns(short int);
		void modObject(char, Acards *);
		void modRegion(short int);
		void modStr(short int);

		void display();
		//void toad();

		virtual short int charRoll() = 0;
		virtual void preRoll() = 0;

	protected:
		short int _align;
		bool _alive;
		short int _craft;
		short int _craftExp;
		short int _dCraft;
		short int _dice;
		short int _dStr;
		short int _gold;
		short int _id;
		short int _lives;
		short int _location;
		short int _missTurns;
		string _name;
		short int _region;
		short int _str;
		short int _strExp;
		short int _toad;
		LinkedList _followers;
		LinkedList _objects;
};
#endif

#ifndef AMAZON_CHARACTER_CLASS
#define AMAZON_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Amazon	Character

	@Created	"Greg Walker"	"10/2/02"
	@Modified	"Greg Walker"	"9/22/02"

	@MFunction	void	public	CHR_Amzaon	"Character constructor"
	@MFunction	void	public	preRoll		"Perform this character's
											 pre-roll action"
	@MFunction	short int		public	charRoll	"Perform a dice roll for
											 this character"
	@MData		short int		private	_dice		"The number of dice the
											 character will roll"

	@Desc	"Amazon character class."
========================================================================@*/
class CHR_Amazon : public Character
{
	public:
		CHR_Amazon();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef ASSASSIN_CHARACTER_CLASS
#define ASSASSIN_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Assassin	Character

	@Created	"Greg Walker"	"10/2/02"
	@Modified	"Greg Walker"	"9/22/02"

	@MFunction	void	public	CHR_Assassin	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Assassin character class."
========================================================================@*/
class CHR_Assassin : public Character
{
	public:
		CHR_Assassin();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef BARBARIAN_CHARACTER_CLASS
#define BARBARIAN_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Barbarian	Character

	@Created	"Greg Walker"	"10/2/02"
	@Modified	"Greg Walker"	"9/22/02"

	@MFunction	void	public	CHR_Barbarian	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Barbarian character class."
========================================================================@*/
class CHR_Barbarian : public Character
{
	public:
		CHR_Barbarian();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef CENTAUR_CHARACTER_CLASS
#define CENTAUR_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Centaur	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Centaur	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Centaur character class."
========================================================================@*/
class CHR_Centaur : public Character
{
	public:
		CHR_Centaur();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef DRUID_CHARACTER_CLASS
#define DRUID_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Druid	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Druid	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Druid character class."
========================================================================@*/
class CHR_Druid : public Character
{
	public:
		CHR_Druid();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef DWARF_CHARACTER_CLASS
#define DWARF_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Dwarf	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Dwarf	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Dwarf character class."
========================================================================@*/
class CHR_Dwarf : public Character
{
	public:
		CHR_Dwarf();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef ELF_CHARACTER_CLASS
#define ELF_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Elf	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Elf	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Elf character class."
========================================================================@*/
class CHR_Elf : public Character
{
	public:
		CHR_Elf();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef GHOUL_CHARACTER_CLASS
#define GHOUL_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Ghoul	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Ghoul	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Ghoul character class."
========================================================================@*/
class CHR_Ghoul : public Character
{
	public:
		CHR_Ghoul();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef GLADIATOR_CHARACTER_CLASS
#define GLADIATOR_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Gladiator	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Gladiator	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Gladiator character class."
========================================================================@*/
class CHR_Gladiator : public Character
{
	public:
		CHR_Gladiator();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef HALFLING_CHARACTER_CLASS
#define HALFLING_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Halfling	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Halfling	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Halfling character class."
========================================================================@*/
class CHR_Halfling : public Character
{
	public:
		CHR_Halfling();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef HOBGOBLIN_CHARACTER_CLASS
#define HOBGOBLIN_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Hobgoblin	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Hobgoblin	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Hobgoblin character class."
========================================================================@*/
class CHR_Hobgoblin : public Character
{
	public:
		CHR_Hobgoblin();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef KNIGHT_CHARACTER_CLASS
#define KNIGHT_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Knight	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Knight	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Knight character class."
========================================================================@*/
class CHR_Knight : public Character
{
	public:
		CHR_Knight();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef LEPRECHAUN_CHARACTER_CLASS
#define LEPRECHAUN_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Leprechaun	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Leprechaun	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Leprechaun character class."
========================================================================@*/
class CHR_Leprechaun : public Character
{
	public:
		CHR_Leprechaun();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef MERCHANT_CHARACTER_CLASS
#define MERCHANT_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Merchant	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Merchant	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Merchant character class."
========================================================================@*/
class CHR_Merchant : public Character
{
	public:
		CHR_Merchant();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef MINSTREL_CHARACTER_CLASS
#define MINSTREL_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Minstrel	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Minstrel	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Minstrel character class."
========================================================================@*/
class CHR_Minstrel : public Character
{
	public:
		CHR_Minstrel();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef MONK_CHARACTER_CLASS
#define MONK_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Monk	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Monk	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Monk character class."
========================================================================@*/
class CHR_Monk : public Character
{
	public:
		CHR_Monk();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef NECROMANCER_CHARACTER_CLASS
#define NECROMANCER_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Necromancer	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Necromancer	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Necromancer character class."
========================================================================@*/
class CHR_Necromancer : public Character
{
	public:
		CHR_Necromancer();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef NINJA_CHARACTER_CLASS
#define NINJA_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Ninja	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Ninja	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Ninja character class."
========================================================================@*/
class CHR_Ninja : public Character
{
	public:
		CHR_Ninja();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef ORC_CHARACTER_CLASS
#define ORC_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Orc	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Orc	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Orc character class."
========================================================================@*/
class CHR_Orc : public Character
{
	public:
		CHR_Orc();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef PHILOSOPHER_CHARACTER_CLASS
#define PHILOSOPHER_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Philosopher	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Philosopher	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Philosopher character class."
========================================================================@*/
class CHR_Philosopher : public Character
{
	public:
		CHR_Philosopher();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef PILGRIM_CHARACTER_CLASS
#define PILGRIM_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Pilgrim	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Pilgrim	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Pilgrim character class."
========================================================================@*/
class CHR_Pilgrim : public Character
{
	public:
		CHR_Pilgrim();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef PRIEST_CHARACTER_CLASS
#define PRIEST_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Priest	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Priest	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Priest character class."
========================================================================@*/
class CHR_Priest : public Character
{
	public:
		CHR_Priest();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef PROPHETESS_CHARACTER_CLASS
#define PROPHETESS_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Prophetess	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Prophetess	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Prophetess character class."
========================================================================@*/
class CHR_Prophetess : public Character
{
	public:
		CHR_Prophetess();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef RANGER_CHARACTER_CLASS
#define RANGER_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Ranger	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Ranger	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Ranger character class."
========================================================================@*/
class CHR_Ranger : public Character
{
	public:
		CHR_Ranger();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef ROGUE_CHARACTER_CLASS
#define ROGUE_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Rogue	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Rogue	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Rogue character class."
========================================================================@*/
class CHR_Rogue : public Character
{
	public:
		CHR_Rogue();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef SAMURAI_CHARACTER_CLASS
#define SAMURAI_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Samurai	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Samurai	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Samurai character class."
========================================================================@*/
class CHR_Samurai : public Character
{
	public:
		CHR_Samurai();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef SATYR_CHARACTER_CLASS
#define SATYR_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Satyr	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Satyr	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Satyr character class."
========================================================================@*/
class CHR_Satyr : public Character
{
	public:
		CHR_Satyr();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef SOLDIER_CHARACTER_CLASS
#define SOLDIER_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Soldier	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Soldier	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Soldier character class."
========================================================================@*/
class CHR_Soldier : public Character
{
	public:
		CHR_Soldier();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef SORCERESS_CHARACTER_CLASS
#define SORCERESS_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Sorceress	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Sorceress	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Sorceress character class."
========================================================================@*/
class CHR_Sorceress : public Character
{
	public:
		CHR_Sorceress();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef THIEF_CHARACTER_CLASS
#define THIEF_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Thief	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Thief	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Thief character class."
========================================================================@*/
class CHR_Thief : public Character
{
	public:
		CHR_Thief();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef TROLL_CHARACTER_CLASS
#define TROLL_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Troll	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Troll	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Troll character class."
========================================================================@*/
class CHR_Troll : public Character
{
	public:
		CHR_Troll();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef WARRIOR_CHARACTER_CLASS
#define WARRIOR_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Warrior	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Warrior	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Warrior character class."
========================================================================@*/
class CHR_Warrior : public Character
{
	public:
		CHR_Warrior();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef WARRIOROFCHAOS_CHARACTER_CLASS
#define WARRIOROFCHAOS_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_WarriorOfChaos	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_WarriorOfChaos	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"WarriorOfChaos character class."
========================================================================@*/
class CHR_WarriorOfChaos : public Character
{
	public:
		CHR_WarriorOfChaos();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef WITCHDOCTOR_CHARACTER_CLASS
#define WITCHDOCTOR_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_WitchDoctor	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_WitchDoctor	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"WitchDoctor character class."
========================================================================@*/
class CHR_WitchDoctor : public Character
{
	public:
		CHR_WitchDoctor();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef WIZARD_CHARACTER_CLASS
#define WIZARD_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Wizard	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Wizard	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Wizard character class."
========================================================================@*/
class CHR_Wizard : public Character
{
	public:
		CHR_Wizard();
		void preRoll();
		short int charRoll();
};
#endif

#ifndef WOODSMAN_CHARACTER_CLASS
#define WOODSMAN_CHARACTER_CLASS

/*@========================================================================
	@Class	CHR_Woodsman	Character

	@Created	"Jason Pike"	"12/3/02"

	@MFunction	void	public	CHR_Woodsman	"Character constructor"
	@MFunction	void	public	preRoll			"Perform this character's
												 pre-roll action"
	@MFunction	short int		public	charRoll		"Perform a dice roll for
												 this character"
	@MData		short int		private	_dice			"The number of dice the
												 character will roll"

	@Desc	"Woodsman character class."
========================================================================@*/
class CHR_Woodsman : public Character
{
	public:
		CHR_Woodsman();
		void preRoll();
		short int charRoll();
};
#endif