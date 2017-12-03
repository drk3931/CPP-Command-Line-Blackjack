#include <iostream>
#include "Deck.h"
#include "LinkedList.h"


int m2()
{

	Deck deck;

	deck.shuffle();


	deck.printAll();

	LinkedList list;
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());
	list.insertAtTail(deck.draw());


	list.display();








}
