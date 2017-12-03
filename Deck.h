#include "Stack.h"


class Deck {

private:
	Stack cardStack;
public:
	Deck();

	void addCardToTop(Card* c);
	void shuffle();
	Card* draw();
	int cardsLeft();
	void printAll();

};
