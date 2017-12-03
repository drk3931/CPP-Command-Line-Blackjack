#include "Deck.h"
#include <algorithm>
#include <random>
#include <iostream>

void Deck::shuffle()
{
	Card** deck = cardStack.asArray();
	for(int i = 0; i < cardStack.getSize(); i++)
		{
			int randomDeckPos = rand() % cardStack.getSize();

			//choose again if randomindex ends up being equal to index
			//we are trying to swap
			while(randomDeckPos == i)
			{
				randomDeckPos = rand() % cardStack.getSize();
			}

			std::swap(deck[i],deck[randomDeckPos]);

		}

}

Deck::Deck():cardStack(52)
{
		//for the shuffle function
		std::srand(time(0));

		//Card** deckAsArray = cardStack.asArray();

		int offset = 0;
		string cardSuit = Card::clubs;

		for(int i = 0; i < 4; i++)
		{
			offset = i*13;


			offset == 13 ? cardSuit = Card::diamonds: cardSuit;
			offset == 26 ? cardSuit = Card::hearts: cardSuit;
			offset == 39 ? cardSuit = Card::spades: cardSuit;


			for(int j = 1; j  <= 13; j++)
			{
				cardStack.push(new Card(j , cardSuit));

			}




		}




}
void Deck::addCardToTop(Card* c)
{
	cardStack.push(c);
}

Card* Deck::draw()
{
	return cardStack.pop();
}

void Deck::printAll()
{
	Card** deckAsArray = cardStack.asArray();
	for(int i = 0; i < cardStack.getSize(); i++)
	{
			Card& c = *(deckAsArray[i]);
			c.print();
	}

}
