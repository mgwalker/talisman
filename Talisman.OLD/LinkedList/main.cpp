#include <iostream>
using namespace std;
#include "linkedlist2.h"

void main(void)
{
	LinkedList<char> intList;

	Node<char> *thing1 = new Node<char>('O');
	Node<char> *thing2 = new Node<char>('o');
	Node<char> *thing3 = new Node<char>('T');
	
	intList.insertNode(thing1, NULL);
	intList.insertNode(thing2, thing1);
	intList.insertNode(thing3, thing2);
	intList.deleteNode(thing1);

intList.rewind();
intList.rewind();
intList.rewind();
	do
	{
		cout << intList.currentNode()->item << " - ";
	}
	while(intList.forward()); 

	cout << endl;
}