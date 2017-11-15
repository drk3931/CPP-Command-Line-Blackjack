#ifndef CARD_H
#define CARD_H

#include <string>

using std::string;

class Card {
	private:
		int intValue;
		string strValue;
		string suit;

	public:
		const static string diamonds;
		const static string clubs;
		const static string hearts;
		const static string spades;
		Card (int value, string s);
		Card(string value, string suit);

		int getIntValue() const;
		string getStrValue() const;
		const string& getSuit() const;
		void print();


};

#endif
