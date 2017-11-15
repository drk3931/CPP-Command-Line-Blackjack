#include <iostream>
#include "CardStack.h"
#include "LinkedList.h"


int main()
{

	CardStack c;


	LinkedList l;
	l.insertAtHead(new Card(3,Card::clubs));
	l.insertAtHead(new Card(4,Card::clubs));
	l.insertAtHead(new Card(10,Card::clubs));
	l.insertAtHead(new Card(5,Card::clubs));

	l.insertAtTail(c.draw());
	l.insertAtTail(c.draw());
	l.insertAtTail(c.draw());

	l.insertAtIndex( 3, new Card(1, Card::diamonds));


	l.display();


}
