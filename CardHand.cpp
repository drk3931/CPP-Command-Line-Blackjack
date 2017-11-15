#include "Card.h"


class CardHand {
public:
	CardHand():head(NULL),nodeptr(NULL)
	{}

private:

	struct Node {

		Card* card;
		Node* next;

	};

	void createNode(Node* n, Card* c, Node* next)
	{
		n = new Node();
		n->card = c;
		n->next = next;
	}


	Node* head;
	Node* nodeptr;

	void insertAtEnd(Card* c)
	{
		nodeptr = head;
		while(nodeptr->next != NULL)
		{
			nodeptr = nodeptr -> next;
		}
		createNode(nodeptr, c, NULL);

	}

	void insertAfter(Card* target, Card* c)
	{
		nodeptr =head;
		while(nodeptr->card != target)
		{
			nodeptr = nodeptr-> next;
		}
		Node* tmp = nodeptr->next;

		createNode(nodeptr->next, c, tmp);




	}

	void insertAft(Card* targ, Card* c)
	{

	}









};
