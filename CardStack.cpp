#include "CardStack.h"
#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>


using std::string;

Card** CardStack::getDeck()
{
	return cardDeck;
}

bool CardStack::isEmpty(){
	return *cardDeck == NULL;
}

void CardStack::printDeck()
{
	Card** deckptr = cardDeck +INIT_DECK_SIZE -1 ;
	while(*deckptr != NULL)
	{
		(*deckptr)->print();
		deckptr--;


		//dont go past 0th index
		if(deckptr < cardDeck )
		{
			return;
		}
	}


}

int CardStack::getDeckSize()
{

	Card** deckptr = cardDeck +INIT_DECK_SIZE -1 ;
	int drawnCards = 0;
	while(*deckptr == NULL)
	{
		drawnCards--;
		deckptr--;
	}
	return INIT_DECK_SIZE - drawnCards;
}

void CardStack::shuffle()
{
	Card** deckptr = cardDeck;
	for(int i = 0; i < INIT_DECK_SIZE; i++)
	{
		int randomDeckPos = rand() % getDeckSize();

		//choose again if randomindex ends up being equal to index
		//we are trying to swap
		while(randomDeckPos == i)
		{
			randomDeckPos = rand() % getDeckSize();
		}

		std::swap(deckptr[i],deckptr[randomDeckPos]);

	}


}

Card* CardStack::peek()
{
	Card** cardptr = cardDeck + INIT_DECK_SIZE -1;


	while(*cardptr == NULL){
		cardptr--;
	}

	return *cardptr;
}

Card* CardStack::draw()
{
	Card** cardptr = cardDeck + INIT_DECK_SIZE - 1;


	while(*cardptr == NULL){
		cardptr--;
	}

	Card* tmp = *cardptr;

	//set the element to null in this array but
	//dont deallocate from the heap the card itself.
	*cardptr = NULL;

	return tmp;

}

//avoid hard coding every card...
CardStack::CardStack():INIT_DECK_SIZE(52)
{

	std::srand(time(0));
	cardDeck = new Card*[INIT_DECK_SIZE];

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
			cardDeck[(j + offset) - 1] = new Card(j , cardSuit);
		}




	}

}
