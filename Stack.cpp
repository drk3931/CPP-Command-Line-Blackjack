#include "Stack.h"

Stack::Stack(int capacity):DEFAULT_CAPACITY(10),sentinel(0)
{
	cards = new Card*[capacity];
	this->capacity = capacity;
}

Stack::Stack():DEFAULT_CAPACITY(10), sentinel(0)
{
	cards = new Card*[DEFAULT_CAPACITY];
	this->capacity = DEFAULT_CAPACITY;
}

Stack::~Stack()
{
	for(int i = 0; i < sentinel; i++)
	{
		delete cards[i];
	}
	delete cards;
}

void Stack::push(Card* c)
{
	if(sentinel == capacity)
	{
		grow();
	}

	cards[sentinel] = c;
	//note the sentinel ends up being one greater
	//than the size
	sentinel++;
}

bool Stack::isEmpty()
{
	return sentinel == 0;
}

Card* Stack::peek()
{
	return 	cards[sentinel];

}

Card* Stack::pop()
{

	if(isEmpty())
	{
		return NULL;
	}

	Card* tmp = cards[sentinel - 1];
	cards[sentinel -1] = NULL;
	sentinel--;
	return tmp;

}

void Stack::grow()
{
	Card** newDeck = new Card*[capacity * 2];

	for(int i = 0; i < capacity; i++){
		newDeck[i] = cards[i];
	}


	delete[] cards;
	cards = newDeck;

	capacity*=2;

}

void Stack::shrink(int newLen)
{
	if(newLen > capacity)
	{
		return;
	}

}

int Stack::getSize()
{
	//the number of elements in the array not using
	//array based indexing.

	return sentinel;
}

int Stack::getCapacity()
{
	return capacity;
}

Card** Stack::asArray()
{
	return cards;
}

