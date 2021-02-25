/****************************************************
 *										     		*
 * Talisman Adventure cards Base Class Declaration	*
 *													*
 * Declares the Adventure cards base class, from	*
 * which all other Adventure cards classes are		*
 * derived.											*
 *													*
 ****************************************************/
#include <stdlib.h>
#include <string>

using namespace std;

#ifndef ACARDS_CLASS
#define ACARDS_CLASS

/*@========================================================================
	@Class		Acards	void

	@Created	"Jason Pike"	"9/21/02"
	@Modified	"Greg Walker"	"10/2/02"

	@MFunction	void	public	Run		"Virtual function. Executes the card instructions."

	@MData		int		public	_id		"The Adventure card's id number."
	@MData		string	public	_name	"The Adventure card's name."

	@Desc	"Generic Adventure Card class.  Specific Adventure Card classes are derived from this."
========================================================================@*/
class Acards
{
	public:
		virtual bool Run() = 0;
		short int _id;
		string _name;
};
#endif

#ifndef ECARDS_CLASS
#define ECARDS_CLASS

/*@======================================= 
  @Class Enemy Acards
  @Created "Jason" "9/29/02"

  @MFunction none public Enemy "Constructor"
  @MFunction void public Run "Virtual function that executes card function."

  @MFunction void private Bandit		"Bandit: Enemy requiring special function."
  @MFunction void private BandOfZombies "BandOfZombies: Enemy requiring special function."
  @MFunction void private Berserker		"Berserker: Enemy requiring special function."
  @MFunction void private CaveTroll		"CaveTroll: Enemy requiring special function."
  @MFunction void private ChineseDragon "ChineseDragon: Enemy requiring special function."
  @MFunction void private CraftFight	"Fight using craft."
  @MFunction void private Doppleganger	"Doppleganger: Enemy requiring special function."
  @MFunction void private Ghast			"Ghast: Enemy requiring special function."
  @MFunction void private Ghost			"Ghost: Enemy requiring special function."
  @MFunction void private Golem			"Golem: Enemy requiring special function."
  @MFunction void private Harpy			"Harpy: Enemy requiring special function."
  @MFunction void private Lich			"Lich: Enemy requiring special function."
  @MFunction void private Shadow		"Shadow: Enemy requiring special function."
  @MFunction void private StrFight		"Fight using strength."
  @MFunction void private Vampire		"Vampire: Enemy requiring special function."
  @MFunction void private VampireBats	"VampireBats: Enemy requiring special function."

  @MData int	private _craft		"Enemy's craft."  
  @MData string private _name		"The name of the enemy."  
  @MData int	private _str		"Enemy's Strength."  
  @MData int	private _special	"If the enemy requires a special function it is assigned a number."  
  @MData string private _type		"The type of enemy (animal, monster, spirit)."

  @Desc "This class is used to create enemy cards for the adventure card deck."
=======================================@*/
class Enemy : public Acards
{
	public:
		Enemy(short int, short int, string, string, short int);
		bool Run();
	private:
		void Bandit();
		void BandOfZombies();
		void Berserker();
		void CaveTroll();
		void ChineseDragon();
		bool CraftFight();
		void Doppleganger();
		void Ghast();
		void Ghost();
		void Golem();
		void Harpy();
		void Lich();
		void Shadow();
		bool StrFight();
		void Vampire();
		void VampireBats();
		short int _craft;
		short int _str;
		string _type;
};
#endif

#ifndef EVENT_CARDS_CLASS
#define EVENT_CARDS_CLASS
class Event : public Acards
{
	public:
		Event(string, short int);
		bool Run();
	private:
		void Angel();
		void Blizzard();
		void BookOfSpells();
		void Devil();
		void Earthquake();
		void EvilDarkness();
		void FoolsGold();
		void Halloween();
		void Imp();
		void MagicalVortex();
		void MarketDay();
		void Mephistopheles();
		void Patrol();
		void Pestilence();
		void Raiders();
		void Storm();
		void Taxation();
		void Volcano();
		void Werewolf();
		void WhirlWind();
};
#endif

#ifndef FOLLOWER_CARDS_CLASS
#define FOLLOWER_CARDS_CLASS
class Follower : public Acards
{
	public:
		Follower(string, short int);
		bool Run();
	private:
		void Alchemist();
		void Archer();
		void Champion();
		void CursedByAHag();
		void Familiar();
		void Genie();
		void Gnome();
		void Guide();
		void Maiden();
		void Jester();
		void ManAtArms();
		void Mercenary();
		void Pixie();
		void Poltergeist();
		void Porter();
		void Prince();
		void Princess();
		void Unicorn();
};
#endif

#ifndef MOBJECTS_CARDS_CLASS
#define MOBJECTS_CARDS_CLASS
class MObjects : public Acards
{
	public:
		MObjects(string, short int);
		bool Run();
	private:
		void Amulet();
		void AncientArtifact();
		void BagOfCarrying();
		void Cross();
		void HolyGrail();
		void HolyLance();
		void MagicBelt();
		void OrbOfKnowledge();
		void PotionOfStrength();
		void Ring();
		void RodOfRuin();
		void RuneSword();
		void SolomonsCrown();
		void StaffOfMastery();
		void Talisman();
		void Wand();
		void WingedBoots();
};
#endif

#ifndef OBJECTS_CARDS_CLASS
#define OBJECTS_CARDS_CLASS
class Objects : public Acards
{
	public:
		Objects(string, short int);
		bool Run();
	private:
		void Armour();
		void Axe();
		void BagsOfGold(short int numBags);
		void Casket();
		void ConcealedPouch();
		void GoldenStatue();
		void Helmet();
		void Horse();
		void HorseAndCart();
		void Map();
		void Mule();
		void Raft();
		void Shield();
		void Shovel();
		void Sword();
		void WarHorse();
		void WaterBottle();
};
#endif

#ifndef PLACES_CARDS_CLASS
#define PLACES_CARDS_CLASS
class Places : public Acards
{
	public:
		Places(string, short int);
		bool Run();
	private:
		void Arena();
		void Cave();
		void FountainOfWisdom();
		void Idol();
		void MagicPortal();
		void MagicStream();
		void Market();
		void Marsh();
		void Maze();
		void PoolOfLife();
		void SecretDoor();
		void Shrine();
		void Tomb();
};
#endif

#ifndef STRANGERS_CARDS_CLASS
#define STRANGERS_CARDS_CLASS
class Strangers : public Acards
{
	public:
		Strangers(string, short int);
		bool Run();
	private:
		void Centaur();
		void Cyclops();
		void Demigod();
		void Enchanter();
		void Fairy();
		void Healer();
		void Hermit();
		void Instructor();
		void Judge();
		void Leper();
		void Mage();
		void Magician();
		void Outlaw();
		void Pedlar();
		void Pegasus();
		void Phantom();
		void Siren();
		void Sorcerer();
		void Sphinx();
		void Witch();
};
#endif
#include "character.h"
#include "tile.h"