#include "linkedlist.h"

template<class Type>
LinkedList<Type>::LinkedList()
{
	head = NULL;
	current = head;
}

template<class Type>
void LinkedList<Type>::insertNode(Node<Type> *newNode, Node<Type> *previous)
{
	if(previous != NULL)
	{
		Node<Type> *temp = previous->next;
		previous->next = newNode;
		newNode->next = temp;

		newNode->previous = previous;
		temp->previous = newNode;
	}
	else
	{
		head = newNode;
		newNode->next = NULL;
		newNode->previous = NULL;
		current = newNode;
	}
}

template<class Type>
void LinkedList<Type>::deleteNode(Node<Type> *deadNode)
{
	Node<Type> *prev = deadNode->previous;
	Node<Type> *next = deadNode->next;

	if(prev != NULL && next != NULL)
	{
		prev->next = next;
		next->prev = prev;
	}
	else if(prev == NULL && next != NULL)
	{
		next->previous = NULL;
		head = next;
	}
	else if(prev == NULL && next == NULL)
	{
		head = NULL;
	}
	else if(prev != NULL && next == NULL)
		prev->next = NULL;

	if(deadNode == current)
		current = head;

	delete deadNode;
}

template<class Type>
Node<Type> *LinkedList<Type>::currentNode()
{
	return current;
}

template<class Type>
void LinkedList<Type>::forward()
{
	if(current->next != NULL)
		current = current->next;
}

template<class Type>
void LinkedList<Type>::rewind()
{
	if(current->previous != NULL)
		current = current->previous;
}

template<class Type>
Node<Type>::Node(Type& _object)
{
	previous = NULL;
	next = NULL;
	item = _object;
}
