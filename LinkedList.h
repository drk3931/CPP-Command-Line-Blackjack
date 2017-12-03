#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Card.h"

class LinkedList {
public:
	class Node {
	public:
		Card * data;
		Node * next;
		Node();
		Node(Card * data);
		Node(Card* data, Node* next = NULL);
	};
private:
	Node * head;
	Node * tail;
	int size;

	bool cardEqual(Card& c,  Node* nodeptr);

public:
	LinkedList();
	int getCount();
	void insertAtIndex(int index, Card * data);
	void remove(Card& data);
	Card * removeAtIndex(int index);
	int search(Card * data);
	void display();


	bool isEmpty();
	void insertAtHead(Card * data);
	void insertAtTail(Card * data);
	Card * removeAtHead();
	Card * removeAtTail();
};

	

#endif
