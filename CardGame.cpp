
#include <iostream>
#include "CardStack.h"
#include "Card.h"

int main()
{
	CardStack c;
	c.printDeck();
	c.shuffle();

	c.printDeck();
	return 0;




}
