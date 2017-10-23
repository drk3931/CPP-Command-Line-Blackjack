#ifndef CARDSTACK_H
#define CARDSTACK_H

#include "Card.h"

class CardStack {


public:
	Card* draw();
	void shuffle();

};


#endif
