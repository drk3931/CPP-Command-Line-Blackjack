#include "LinkedList.h"
#include <iostream>
#include <algorithm>

LinkedList::Node::Node():data(NULL),next(NULL)
{
}

LinkedList::Node::Node(Card* c,Node* next):data(c),next(next)
{}

LinkedList::Node::Node(Card* c):data(c),next(NULL)
{}

LinkedList::LinkedList():head(NULL),tail(NULL), size(0)
{}

bool LinkedList::cardEqual(Card& c, Node* nodeptr)
{
	return nodeptr->data->getIntValue() == c.getIntValue()
			&& nodeptr->data->getSuit() == c.getSuit();
}




void LinkedList::remove(Card& card)
{
	Node* nodeptr = head;
	Node* nodelast = head;

	if(nodeptr == head && cardEqual(card, nodeptr))
	{
		Node* tmp = head;
		head = head->next;
		delete tmp;
		return;

	}

	while(nodeptr->next != NULL)
	{
		if(cardEqual(card, nodeptr))
		{
			nodelast->next = nodeptr->next;
			delete nodeptr;
		}

		nodelast = nodeptr;
		nodeptr = nodeptr->next;
	}

}

bool LinkedList::isEmpty()
{
	return size==0;
}

int LinkedList::getCount()
{
	return size;
}

void LinkedList::insertAtIndex(int index, Card * data)
{

	Node* ptr = head;
	if(index > getCount())
	{
		return;
	}

	for(int i = 0; i < index; i++)
	{

		ptr = ptr->next;
	}

	delete ptr->data;
	ptr->data = data;


}

void LinkedList::insertAtTail(Card* data)
{
	if(head == NULL)
	{
		head = new Node(data,NULL);
		return;
	}

	Node* nodeptr = head;
	while(nodeptr->next != NULL)
	{
		nodeptr = nodeptr->next;
	}
	tail = nodeptr;
	tail->next = new Node(data, NULL);
	size++;

}

void LinkedList::insertAtHead(Card* data)
{
	if(head == NULL)
	{
		head = new Node(data,NULL);
		return;

	}
	else{

		Node* n = new Node(data,head);


		head = n;

	}


	size++;

}


int LinkedList::search(Card * data)
{
	Node* nodeptr = head;
	for(int i = 0; i < getCount(); i++)
	{

		if(data->getIntValue() == nodeptr->data->getIntValue()
		   && data->getSuit() == nodeptr->data->getSuit())
		{
			return i;
		}

		nodeptr= nodeptr ->next;
	}
	return -1;

}

void LinkedList::display()
{

	Node* nodeptr = head;
	while(nodeptr != NULL)
	{
		Card c = *(nodeptr->data);
		std::cout << c.getSuit() << " " << c.getStrValue()<< std::endl;
		nodeptr = nodeptr ->next;
	}
}
