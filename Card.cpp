#include <iostream>
#include <string>
#include "Card.h"
using namespace std;


	const string Card::diamonds = "Diamonds";
	const string Card::clubs = "Clubs";
	const string Card::hearts = "Hearts";
	const string Card::spades = "Spades";
	
	Card::Card(int value, string s):suit("")
	{
		
		if (value > 13)
			exit;
		switch (value) {
				case 1:
				suit = "Ace";
				break;
				case 2:
				suit = "2";
				break;
				case 3:
				suit = "3";
				break;
				case 4:
				suit = "4";
				break;
				case 5:
				suit = "5";
				break;
				case 6:
				suit = "6";
				break;
				case 7:
				suit = "7";
				break;
				case 8:
				suit = "8";
				break;
				case 9:
				suit = "9";
				break;
				case 10:
				suit = "10";
				break;
				case 11:
				suit = "Jack";
				break;
				case 12:
				suit = "Queen";
				break;
				case 13:
				suit = "King";
				break;
		}
		
		
		cout << "The card is the " << suit << " of " << suit << endl;
	}
