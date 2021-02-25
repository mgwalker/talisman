/************************************************
 *												*
 * Talisman Tile Class Definition				*
 *												*
 * Defines the Tile class, sets the values of	*
 * Tile "constants" (though they can			*
 * changed), and defines actions to be taken	*
 * when a player lands on a tile.				*
 *												*
 ************************************************/
#include "stdInclude.h"
	
/*@****************************************************************************
@function	modPlayer	Tile
@param		char		op			"Operation to perform"
@returns	void
@desc		"Add or remove a character from a tile.  If op is '+' the
			 character is added.  If op is '-' the character is removed."
****************************************************************************@*/
void Tile::modPlayer(char op)
{
	if(op=='+')
		_playersOnTile.push_back(currentPlayer);

	else if(op=='-')
		_playersOnTile.erase(_playersOnTile.exists(currentPlayer));

	else
		cout << "modPlayer in Tile class isn't working.";
}

short int Tile::getCardNum()
{
	return _cardsOnTile.size();
}

Acards* Tile::getCard()
{
	if(_cardsOnTile.size() > 0)
	{
		Acards* tmp = (Acards*)_cardsOnTile.at(_cardsOnTile.size() - 1);
		modCard('-',tmp);
		return tmp;
	}
	return NULL;
}

/*@****************************************************************************
@function	modCard	Tile
@param		char	op		"Operation to perform"
@param		Acards*	card	"The card to add/remove"
@returns	void
@desc		"Add or remove a card from a tile.  If op is '+' the card is
			 added.  If op is '-' the card is removed."
****************************************************************************@*/
void Tile::modCard(char op, Acards *card)
{
	if(op=='+')
		_cardsOnTile.push_back(card);
	else if(op=='-')
		_cardsOnTile.erase(_cardsOnTile.exists(card));
	else
		cout << "modCard in Tile class isn't working.";
}

/*@****************************************************************************
@function	display	Tile
@returns	void
@desc		"Displays all cards and character on the tile"
****************************************************************************@*/
void Tile::display()
{
	unsigned short int i = 0;
	cout << "\nPlayers on space: ";
	for(i = 0; i < _playersOnTile.size(); i++)
	{
		cout << ((Character*)_playersOnTile[i])->getName();
		if(i < _playersOnTile.size() - 1)
			cout << ", ";
	}
	cout << "\nAdventure Cards on space: ";
	for(i = 0; i < _cardsOnTile.size(); i++)
	{
		cout << "\t" << ((Acards*)_cardsOnTile[i])->_name << endl;
	}
}

/*@****************************************************************************
@function	getName	Tile
@returns	string	"The tile's name"
@desc		"Returns the tile's name"
****************************************************************************@*/
string Tile::getName()
{
	return _name;
}

/*@****************************************************************************
@function	getId	Tile
@returns	short int		"The tile's ID number"
@desc		"Returns the tile's ID number"
****************************************************************************@*/
short int Tile::getId()
{
	return _id;
}

/*@****************************************************************************
@function	DrawTile	DrawTile
@param		short int	id	"The new tile's ID number"
@param		short int	cardLimit	"The maximum number of cards the tile
									 can hold."
@param		string		name		"The new tile's name"
@returns	void
@desc		"DrawTile class constructor"
****************************************************************************@*/
DrawTile::DrawTile(short int id, short int cardLimit, string name)
{
	_id = id;
	_cardLimit = cardLimit;
	_name = name;
}

/*@****************************************************************************
@function	Run		DrawTile
@returns	void
@desc		"Performs the action for a DrawTile tile."
****************************************************************************@*/
void DrawTile::Run()
{
	unsigned short int i = 0;

	if(AdventureDeck.size() < 4)
	{
		LinkedList oldDeck = AdventureDeck;
		initACards();

		for(i = 0; i < oldDeck.size(); i++)
			AdventureDeck.push_back(oldDeck.at(i));
	}

	cout << "You are now in the " << _name << "." << endl;
	Acards *tmp;
	bool won;

	short int cardsOnTile = getCardNum();
	LinkedList fought;
	
	for(i = 0; i < (unsigned)cardsOnTile; i++)
	{
		tmp = getCard();
		cout << "\nALREADY ON TILE: ";
		won = tmp->Run();

		if(!won)
			fought.push_back(tmp);
			//modCard('+',tmp);
	}

	for(i = 0; i < (unsigned)fought.size(); i++)
		_cardsOnTile.push_back(fought[i]);
	
	if(cardsOnTile < _cardLimit)
	{
		tmp = (Acards*)AdventureDeck.pop_back();
		won = tmp->Run();

		if(!won)
			modCard('+',tmp);
	}
	display();
}
