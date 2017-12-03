
#include "Card.h"

class Stack{

private:
	const int DEFAULT_CAPACITY;
	int capacity;

	Card** cards;
	void grow();
	void shrink(int newcap);

public:
	int sentinel;
	Stack(int capacity);
	Stack();
	~Stack();
	void push(Card* c);
	Card* pop();
	Card* peek();
	Card** asArray();
	bool isEmpty();
	int getSize();
	int getCapacity();


};
