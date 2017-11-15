#include <string>
#include <iostream>

#include "Card.h"

using std::string;

const string Card::diamonds = "Diamonds";
const string Card::clubs = "Clubs";
const string Card::hearts = "Hearts";
const string Card::spades = "Spades";

string Card::getStrValue() const{
	return strValue;
}

const string& Card::getSuit() const{
	return suit;
}

int Card::getIntValue() const{
	return intValue;
}

void Card::print()
{
	std::cout << "Card Value: " + strValue
	<< std::endl << "Card Suit: " << suit << std::endl << std::endl;
}

Card::Card(string value, string s): suit(s)
{
	if(value == "Jack")
	{
		intValue = 11;
	}

	if(value == "Queen")
	{
		intValue = 12;
	}

	if(value == "King")
	{
		intValue = 13;
	}

	if(value == "Ace")
	{
		intValue = 1;
	}

	intValue = std::atoi(value.c_str());

	if(intValue < 1 || intValue > 13)
	{
		std::cerr << "Error: invalid card value \n";
		exit(-1);
	}



}

Card::Card(int value, string s):suit(s), intValue(value)
{

	if (value > 13 || value < 1)
	{
		std::cerr << "Error: invalid card value \n";
		exit(-1);
	}

	switch (value) {
			case 1:
			strValue = "Ace";
			break;
			case 2:
			strValue = "2";
			break;
			case 3:
			strValue = "3";
			break;
			case 4:
			strValue = "4";
			break;
			case 5:
			strValue = "5";
			break;
			case 6:
			strValue = "6";
			break;
			case 7:
			strValue = "7";
			break;
			case 8:
			strValue = "8";
			break;
			case 9:
			strValue = "9";
			break;
			case 10:
			strValue = "10";
			break;
			case 11:
			strValue = "Jack";
			break;
			case 12:
			strValue = "Queen";
			break;
			case 13:
			strValue = "King";
			break;
	}
	


}
