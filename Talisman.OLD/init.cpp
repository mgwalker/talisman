#include "stdInclude.h"

/*@======================================= 
  @Function initACards void
  @Created "Jason Pike" "10/17/02"
  @Modified "Greg Walker" "12/03/02"
  @Modified "Jason Pike" "12/26/02"
 
  @Desc "This function creates adventure card objects and places 
		 them in a linked list representing the adventure card deck."
=======================================@*/
void initACards()
{
  // UNCOMMENT ADVENTURE CARDS AS THEY ARE IMPLEMENTED... 

	/*
	Adventure cards include all cards from these talisman sets:
		2nd Edition
		Expansion
		Adventure
	*/

	AdventureDeck.push_back(new Enemy(3,0,"animal","Ape",1));
//	AdventureDeck.push_back(new Enemy(4,0,"monster","Bandit",2));
//	AdventureDeck.push_back(new Enemy(4,0,"monster","Bandit",2));
//	AdventureDeck.push_back(new Enemy(2,0,"monster","Band of Zombies",3));
	AdventureDeck.push_back(new Enemy(0,3,"spirit","Banshee",4));
	AdventureDeck.push_back(new Enemy(3,0,"animal","Bear",5));
//	AdventureDeck.push_back(new Enemy(3,0,"monster","Berserker",6));
	AdventureDeck.push_back(new Enemy(1,0,"animal","Boar",7));
	AdventureDeck.push_back(new Enemy(1,0,"animal","Boar",7));
//	AdventureDeck.push_back(new Enemy(6,0,"monster","Cave Troll",8));
//	AdventureDeck.push_back(new Enemy(6,6,"monster","Chinese Dragon",9));
	AdventureDeck.push_back(new Enemy(0,10,"spirit","Demon",10));
//	AdventureDeck.push_back(new Enemy(0,0,"monster","Doppleganger",11));
	AdventureDeck.push_back(new Enemy(7,0,"dragon","Dragon",12));
	AdventureDeck.push_back(new Enemy(7,0,"dragon","Dragon",12));
	AdventureDeck.push_back(new Enemy(7,0,"dragon","Dragon",12));
	AdventureDeck.push_back(new Enemy(5,0,"monster","Gargoyle",13));
//	AdventureDeck.push_back(new Enemy(0,5,"spirit","Ghast",14));
//	AdventureDeck.push_back(new Enemy(0,4,"spirit","Ghost",15));
//	AdventureDeck.push_back(new Enemy(0,4,"spirit","Ghost",15));
	AdventureDeck.push_back(new Enemy(6,0,"monster","Giant",16));
	AdventureDeck.push_back(new Enemy(3,0,"animal","Giant Lizard",17));
	AdventureDeck.push_back(new Enemy(2,0,"monster","Goblin",18));
	AdventureDeck.push_back(new Enemy(2,0,"monster","Goblin",18));
	AdventureDeck.push_back(new Enemy(2,0,"monster","Goblin",18));
//	AdventureDeck.push_back(new Enemy(5,0,"monster","Golem",19));
	AdventureDeck.push_back(new Enemy(5,0,"monster","Griffon",20));
//	AdventureDeck.push_back(new Enemy(0,4,"monster","Harpy",21));
	AdventureDeck.push_back(new Enemy(3,0,"monster","Hobgoblin",22));
	AdventureDeck.push_back(new Enemy(3,0,"monster","Hobgoblin",22));
//	AdventureDeck.push_back(new Enemy(0,4,"spirit","Lich",23));
	AdventureDeck.push_back(new Enemy(3,0,"animal","Lion",24));
	AdventureDeck.push_back(new Enemy(4,0,"monster","Ogre",25));
	AdventureDeck.push_back(new Enemy(4,0,"monster","Ogre",25));
	AdventureDeck.push_back(new Enemy(4,0,"monster","Serpent",26));
	AdventureDeck.push_back(new Enemy(0,2,"spirit","Shade",27));
//	AdventureDeck.push_back(new Enemy(0,2,"spirit","Shadow",28));
	AdventureDeck.push_back(new Enemy(0,3,"spirit","Spectre",29));
//	AdventureDeck.push_back(new Enemy(0,6,"spirit","Vampire",30));
//	AdventureDeck.push_back(new Enemy(0,4,"spirit","Vampire Bats",31));
	AdventureDeck.push_back(new Enemy(2,0,"animal","Wolf",32));
	AdventureDeck.push_back(new Enemy(0,5,"spirit","Wraith",33));

	AdventureDeck.push_back(new Event("Angel",34));
//	AdventureDeck.push_back(new Event("Blizzard",35));
//	AdventureDeck.push_back(new Event("Book of Spells",36));
	AdventureDeck.push_back(new Event("Devil",37));
//	AdventureDeck.push_back(new Event("Earthquake",38));
//	AdventureDeck.push_back(new Event("Evil Darkness",39));
	AdventureDeck.push_back(new Event("Fool's Gold",40));
//	AdventureDeck.push_back(new Event("Halloween",41));
	AdventureDeck.push_back(new Event("Imp",42));
//	AdventureDeck.push_back(new Event("Magical Vortex",43));
//	AdventureDeck.push_back(new Event("Market Day",44));
//	AdventureDeck.push_back(new Event("Mephistopheles",45));
//	AdventureDeck.push_back(new Event("Patrol",46));
//	AdventureDeck.push_back(new Event("Pestilence",47));
//	AdventureDeck.push_back(new Event("Raiders",48));
//	AdventureDeck.push_back(new Event("Storm",49));
//	AdventureDeck.push_back(new Event("Taxation",50));
//	AdventureDeck.push_back(new Event("Volcano",51));
//	AdventureDeck.push_back(new Event("Werewolf",52));
//	AdventureDeck.push_back(new Event("Whirlwind",53));

//	AdventureDeck.push_back(new Follower("Alchemist",54));
//	AdventureDeck.push_back(new Follower("Archer",55));
//	AdventureDeck.push_back(new Follower("Champion",56));
//	AdventureDeck.push_back(new Follower("Cursed by a Hag",57));
//	AdventureDeck.push_back(new Follower("Familiar",58));
//	AdventureDeck.push_back(new Follower("Genie",59));
//	AdventureDeck.push_back(new Follower("Gnome",60));
//	AdventureDeck.push_back(new Follower("Guide",61));
//	AdventureDeck.push_back(new Follower("Guide",61));
//	AdventureDeck.push_back(new Follower("Jester",62));
//	AdventureDeck.push_back(new Follower("Maiden",63));
//	AdventureDeck.push_back(new Follower("Man-at-Arms",64));
//	AdventureDeck.push_back(new Follower("Mercenary",65));
//	AdventureDeck.push_back(new Follower("Pixie",66));
//	AdventureDeck.push_back(new Follower("Poltergeist",67));
//	AdventureDeck.push_back(new Follower("Porter",68));
//	AdventureDeck.push_back(new Follower("Porter",68));
//	AdventureDeck.push_back(new Follower("Prince",69));
//	AdventureDeck.push_back(new Follower("Princess",70));
//	AdventureDeck.push_back(new Follower("Unicorn",71));

//	AdventureDeck.push_back(new MObjects("Amulet",72));
//	AdventureDeck.push_back(new MObjects("Ancient Artifact",73));
//	AdventureDeck.push_back(new MObjects("Bag of Carrying",74));
//	AdventureDeck.push_back(new MObjects("Cross",75));
//	AdventureDeck.push_back(new MObjects("Holy Grail",76));
//	AdventureDeck.push_back(new MObjects("Holy Lance",77));
//	AdventureDeck.push_back(new MObjects("Magic Belt",78));
//	AdventureDeck.push_back(new MObjects("Orb of Knowledge",79));
//	AdventureDeck.push_back(new MObjects("Potion of Strength",80));
//	AdventureDeck.push_back(new MObjects("Ring",81));
//	AdventureDeck.push_back(new MObjects("Rod of Ruin",82));
//	AdventureDeck.push_back(new MObjects("Rune Sword",83));
//	AdventureDeck.push_back(new MObjects("Solomon's Crown",84));
//	AdventureDeck.push_back(new MObjects("Staff of Mastery",85));
//	AdventureDeck.push_back(new MObjects("Talisman",86));
//	AdventureDeck.push_back(new MObjects("Talisman",86));
//	AdventureDeck.push_back(new MObjects("Talisman",86));
//	AdventureDeck.push_back(new MObjects("Talisman",86));
//	AdventureDeck.push_back(new MObjects("Wand",87));
//	AdventureDeck.push_back(new MObjects("Winged Boots",88));

//	AdventureDeck.push_back(new Objects("Armour",89));
//	AdventureDeck.push_back(new Objects("Axe",90));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("Bag of Gold",91));
//	AdventureDeck.push_back(new Objects("2 Bags of Gold",92));
//	AdventureDeck.push_back(new Objects("2 Bags of Gold",92));
//	AdventureDeck.push_back(new Objects("2 Bags of Gold",92));
//	AdventureDeck.push_back(new Objects("Casket",93));
//	AdventureDeck.push_back(new Objects("Concealed Pouch",94));
//	AdventureDeck.push_back(new Objects("Golden Statue",95));
//	AdventureDeck.push_back(new Objects("Helmet",96));
//	AdventureDeck.push_back(new Objects("Horse and Cart",97));
//	AdventureDeck.push_back(new Objects("Horse and Cart",97));
//	AdventureDeck.push_back(new Objects("Horse",98));
//	AdventureDeck.push_back(new Objects("Horse",98));
//	AdventureDeck.push_back(new Objects("Map",99));
//	AdventureDeck.push_back(new Objects("Mule",100));
//	AdventureDeck.push_back(new Objects("Raft",101));
//	AdventureDeck.push_back(new Objects("Shield",102));
//	AdventureDeck.push_back(new Objects("Shovel",103));
//	AdventureDeck.push_back(new Objects("Sword",104));
//	AdventureDeck.push_back(new Objects("Sword",104));
//	AdventureDeck.push_back(new Objects("Warhorse",105));
//	AdventureDeck.push_back(new Objects("Water Bottle",106));

//	AdventureDeck.push_back(new Places("Arena",107));
//	AdventureDeck.push_back(new Places("Cave",108));
//	AdventureDeck.push_back(new Places("Fountain of Wisdom",109));
//	AdventureDeck.push_back(new Places("Idol",110));
//	AdventureDeck.push_back(new Places("Magic Portal",111));
//	AdventureDeck.push_back(new Places("Magic Stream",112));
//	AdventureDeck.push_back(new Places("Market",113));
//	AdventureDeck.push_back(new Places("Marsh",114));
//	AdventureDeck.push_back(new Places("Maze",115));
//	AdventureDeck.push_back(new Places("Pool of Life",116));
//	AdventureDeck.push_back(new Places("Secret Door",117));
//	AdventureDeck.push_back(new Places("Shrine",118));
//	AdventureDeck.push_back(new Places("Tomb",119));

//	AdventureDeck.push_back(new Strangers("Centaur",120));
//	AdventureDeck.push_back(new Strangers("Cyclops",121));
//	AdventureDeck.push_back(new Strangers("Demigod",122));
//	AdventureDeck.push_back(new Strangers("Enchanter",123));
//	AdventureDeck.push_back(new Strangers("Fairy",124));
//	AdventureDeck.push_back(new Strangers("Healer",125));
//	AdventureDeck.push_back(new Strangers("Hermit",126));
//	AdventureDeck.push_back(new Strangers("Instructor",127));
//	AdventureDeck.push_back(new Strangers("Judge",128));
//	AdventureDeck.push_back(new Strangers("Leper",129));
//	AdventureDeck.push_back(new Strangers("Mage",130));
//	AdventureDeck.push_back(new Strangers("Magician",131));
//	AdventureDeck.push_back(new Strangers("Outlaw",132));
//	AdventureDeck.push_back(new Strangers("Pedlar",133));
//	AdventureDeck.push_back(new Strangers("Pegasus",134));
//	AdventureDeck.push_back(new Strangers("Phantom",135));
//	AdventureDeck.push_back(new Strangers("Siren",136));
//	AdventureDeck.push_back(new Strangers("Sorcerer",137));
//	AdventureDeck.push_back(new Strangers("Sphinx",138));
//	AdventureDeck.push_back(new Strangers("Witch",139));

	int deckSize = AdventureDeck.size(), i1 = 0, i2 = 0;
	for(short int i = 0; i < (deckSize); i++)
	{
		i1 = rand()%deckSize;
		i2 = rand()%deckSize;
		AdventureDeck.swap(AdventureDeck[i1], AdventureDeck[i2]);
	}

}

/*@======================================= 
  @Function initOuterRegion void
  @Created "Jason Pike" "10/17/02"
  @Modified "Jason Pike" "12/26/02"
  @Modified "Greg Walker" "1/5/02"

  @Param Region outer_region "The empty array of tiles that make up the outer region."
  @Returns Region "The loaded array of tiles that make up the outer region."
 
  @Desc "This function loads the tile objects that represent the outer region 
		 into an array and returns it."
=======================================@*/
Region initOuterRegion(Region outer_region)
{
	outer_region[23] = new DrawTile(23, 1, "Fields");
	outer_region[22] = new DrawTile(22, 1, "Hills");
	outer_region[21] = new DrawTile(21, 1, "Plains");
	outer_region[20] = new DrawTile(20, 1, "Woods");
	outer_region[19] = new DrawTile(19, 1, "Plains");
	outer_region[18] = new Tavern();
	outer_region[17] = new DrawTile(17, 1, "Fields");
	outer_region[16] = new DrawTile(16, 2, "Ruins");
	outer_region[15] = new DrawTile(15, 1, "Plains");
	outer_region[14] = new Forest();
	outer_region[13] = new DrawTile(13, 1, "Fields");
	outer_region[12] = new Village();
	outer_region[11] = new DrawTile(11, 1, "Fields");
	outer_region[10] = new Graveyard();
	outer_region[9] = new DrawTile(9, 1, "Woods");
	outer_region[8] = new Sentinel();
	outer_region[7] = new DrawTile(7, 1, "Hills");
	outer_region[6] = new Chapel();
	outer_region[5] = new DrawTile(5, 1, "Fields");
	outer_region[4] = new Crags();
	outer_region[3] = new DrawTile(3, 1, "Plains");
	outer_region[2] = new DrawTile(2, 1, "Woods");
	outer_region[1] = new DrawTile(1, 1, "Fields");
	outer_region[0] = new City();

	return outer_region;
}

/*@======================================= 
  @Function initMiddleRegion void
  @Created "Jason Pike" "12/03/02"
  @Modified "Jason Pike" "12/26/02"
  @Modified "Greg Walker" "1/5/02"

  @Param Region middle_region "The empty array of tiles that make up the middle region."
  @Returns Region "The loaded array of tiles that make up the middle region."
 
  @Desc "This function loads the tile objects that represent the middle region 
		 into an array and returns it."
=======================================@*/
Region initMiddleRegion(Region middle_region)
{
	middle_region[15] = new Desert(15);
	middle_region[14] = new Oasis();
	middle_region[13] = new Desert(13);
	middle_region[12] = new Temple();
	middle_region[11] = new DrawTile(11, 1, "Woods");
	middle_region[10] = new Runes(2,10);
	middle_region[9] = new Castle();
	middle_region[8] = new PortalOfPower();
	middle_region[7] = new BlackKnight();
	middle_region[6] = new HiddenValley();
	middle_region[5] = new DrawTile(5, 1, "Hills");
	middle_region[4] = new CursedGlade();
	middle_region[3] = new Runes(3,3);
	middle_region[2] = new Chasm();
	middle_region[1] = new Runes(2,1);
	middle_region[0] = new WarlockCave();

	return middle_region;
}

/*@======================================= 
  @Function initInnerRegion void
  @Created "Jason Pike" "12/03/02"
  @Modified "Jason Pike" "12/26/02"
  @Modified "Greg Walker" "1/5/02"

  @Param Region inner_region "The empty array of tiles that make up the inner region."
  @Returns Region "The loaded array of tiles that make up the inner region."
 
  @Desc "This function loads the tile objects that represent the inner region 
		 into an array and returns it."
=======================================@*/
Region initInnerRegion(Region inner_region)
{
	inner_region[7] = new TheMines();
	inner_region[6] = new VampiresTower();
	inner_region[5] = new ThePits();
	inner_region[4] = new ValleyOfFire();
	inner_region[3] = new WerewolfDen();
	inner_region[2] = new DiceWithDeath();
	inner_region[1] = new Crypt();
	inner_region[0] = new PlainOfPeril();

	return inner_region;
}

/*@======================================= 
  @Function initPlayers void
  @Created "Jason Pike" "10/17/02"
  @Modified "Jason Pike" "12/26/02"

  @Param CircularList players "The empty circularly linked list of players in the game."
  @Returns CircularList "The loaded circularly linked list of players in the game."
 
  @Desc "This function loads the player objects in the game into a circularly linked list 
		 and returns it."
=======================================@*/
CircularList initPlayers(CircularList players)
{
	cout << "Enter number of players: ";
	short int num = 0, choice = 0;
	numPlayers = num;
	cin >> num;

	if(num == 0)
	{
		cout << "0 players";
		exit(1);
	}

	for(short int i = 1; i < num + 1; i++)
	{
		choice = 0;
		cout << "(0)  RANDOM SELECT (1)  Amazon         (2)  Assassin       (3)  Barbarian\n";
		cout << "(4)  Centaur       (5)  Druid          (6)  Dwarf          (7)  Elf\n";
		cout << "(8)  Ghoul         (9)  Gladiator      (10) Hafling        (11) Hobgoblin\n";
		cout << "(12) Knight        (13) Leprechaun     (14) Merchant       (15) Minstrel\n";
		cout << "(16) Monk          (17) Necromancer    (18) Ninja          (19) Orc\n";
		cout << "(20) Philosopher   (21) Pilgrim        (22) Priest         (23) Prophetess\n";
		cout << "(24) Ranger        (25) Rogue          (26) Samurai        (27) Satyr\n";
		cout << "(28) Soldier       (29) Sorceress      (30) Thief          (31) Troll\n";
		cout << "(32) Warrior       (33) WarriorOfChaos (34) Witch Doctor   (35) Wizard\n";
		cout << "(36) Woodsman\n";
		cout << "Player " << i << " select your character:\n";
		cin >> choice;

		while(choice > 36 || choice < 0)
		{
			cout << "You must pick a number 0-36: ";
			cin >> choice;
		}

		while(choice==0)
			choice = (roll(7)-6);

		switch(choice)
		{
			case 1:	players.prependNode(new CHR_Amazon); break;
			case 2: players.prependNode(new CHR_Assassin);	break;
			case 3: players.prependNode(new CHR_Barbarian); break;
			case 4: players.prependNode(new CHR_Centaur); break;
			case 5: players.prependNode(new CHR_Druid); break;
			case 6: players.prependNode(new CHR_Dwarf); break;
			case 7: players.prependNode(new CHR_Elf); break;
			case 8: players.prependNode(new CHR_Ghoul); break;
			case 9: players.prependNode(new CHR_Gladiator); break;
			case 10: players.prependNode(new CHR_Halfling); break;
			case 11: players.prependNode(new CHR_Hobgoblin); break;
			case 12: players.prependNode(new CHR_Knight); break;
			case 13: players.prependNode(new CHR_Leprechaun); break;
			case 14: players.prependNode(new CHR_Merchant); break;
			case 15: players.prependNode(new CHR_Minstrel); break;
			case 16: players.prependNode(new CHR_Monk); break;
			case 17: players.prependNode(new CHR_Necromancer); break;
			case 18: players.prependNode(new CHR_Ninja); break;
			case 19: players.prependNode(new CHR_Orc); break;
			case 20: players.prependNode(new CHR_Philosopher); break;
			case 21: players.prependNode(new CHR_Pilgrim); break;
			case 22: players.prependNode(new CHR_Priest); break;
			case 23: players.prependNode(new CHR_Prophetess); break;
			case 24: players.prependNode(new CHR_Ranger); break;
			case 25: players.prependNode(new CHR_Rogue); break;
			case 26: players.prependNode(new CHR_Samurai); break;
			case 27: players.prependNode(new CHR_Satyr); break;
			case 28: players.prependNode(new CHR_Soldier); break;
			case 29: players.prependNode(new CHR_Sorceress); break;
			case 30: players.prependNode(new CHR_Thief); break;
			case 31: players.prependNode(new CHR_Troll); break;
			case 32: players.prependNode(new CHR_Warrior); break;
			case 33: players.prependNode(new CHR_WarriorOfChaos); break;
			case 34: players.prependNode(new CHR_WitchDoctor); break;
			case 35: players.prependNode(new CHR_Wizard); break;
			case 36: players.prependNode(new CHR_Woodsman); break;
			default: cout << "Character select failed!"; break;
		}
		players.rewind();
	}
	return players;
}