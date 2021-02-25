#include <stdlib.h>

template<class Type>
class Node
{
	public:
		Node(Type _object)
		{
			previous = NULL;
			next = NULL;
			item = _object;
		}
		Node *previous;
		Node *next;
		Type item;
};

template<class Type>
class LinkedList
{
	public:
		LinkedList()
		{
			head = NULL;
			current = head;
		}
		void insertNode(Node<Type>* newNode, Node<Type>* previous)
		{
			if(previous == NULL)
			{
				head = newNode;
				newNode->next = NULL;
				newNode->previous = NULL;
			}
			else
			{
				newNode->next = previous->next;
				newNode->previous = previous;
				if(previous->next != NULL)
					previous->next->previous = newNode;
				previous->next = newNode;
			}
			current = newNode;
		}
		void deleteNode(Node<Type>* deadNode)
		{
			if(deadNode->previous == NULL)
				head = deadNode->next;
			else
				deadNode->previous->next = deadNode->next;
			if(deadNode->next != NULL)
				deadNode->next->previous = deadNode->previous;

			if(current == deadNode)
				current = head;
			delete deadNode;
		}
		Node<Type> *currentNode()
		{
			return current;
		}
		bool forward()
		{
			if(current->next != NULL)
			{
				current = current->next;
				return true;
			}
			return false;
		}
		bool rewind()
		{
			if(current->previous != NULL)
			{
				current = current->previous;
				return true;
			}
			return false;
		}

	private:
		Node<Type> *head;
		Node<Type> *current;
};