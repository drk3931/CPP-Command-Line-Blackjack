#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using std::string;

class Card {
	private:
		int value;
		string suit;

		const static string diamonds;
		const static string clubs;
		const static string hearts;
		const static string spades;
		Card (int value, string s);
};

#endif
