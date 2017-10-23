#ifndef CARDSTACK_H
#define CARDSTACK_H

#include "Card.h"

class CardStack {

private:

	/*
	 * An array of card pointers for easy
	 * stack operations like remove without the downside
	 * of setting blank cards were it an array
	 * of Card objects.
	 *
	 */
private:
	Card** cardDeck;


public:
	const int INIT_DECK_SIZE;
	Card* peek();
	Card* draw();
	Card** getDeck();
	void shuffle();
	CardStack();
	void printDeck();
	bool isEmpty();
	int CardStack::getDeckSize();

};


#endif
