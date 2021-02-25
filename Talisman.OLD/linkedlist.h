/************************************************
 *												*
 * Talisman Generic LinkedList and Node			*
 *   Declaration and Definition					*
 *												*
 * Declares and defines the template Node		*
 * and template LinkedList classes.				*
 *												*
 ************************************************/
#include <stdlib.h>

#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS

/*@****************************************************************************
@CLASS		Node	void
@MFUNCTION	void	public	Node		"Constructor.  There are two constructors.  One is a null
										 constructor taking no arguments and creating an empty node.
										 The other takes a pointer and uses that as the node's payload."
@MFUNCTION	void	public	Node		""
@MDATA		Node*	public	previous	"A pointer to the previous node in a linked list."
@MDATA		Node*	public	next		"A pointer to the next node in a linked list."
@MDATA		void*	public	item		"A pointer to the node's payload."
@DESC		"Each item in a LinkedList object is a Node.  A Node is an object containing a pointer to
			 both the previous and next nodes in the linked list, as well as a pointer to the node's payload."
****************************************************************************@*/
class Node
{
	public:
		/*@********************************************************************
		@FUNCTION	Node	Node
		@RETURNS	void
		@DESC		"Null constructor.  Creates an empty node."
		********************************************************************@*/
		Node()
		{
			previous = NULL;
			next = NULL;
			item = NULL;
		}
		/*@********************************************************************
		@FUNCTION	Node	Node
		@PARAM		void*	obj		"The node payload."
		@RETURNS	void
		@DESC		"Creates a node with the specified payload."
		********************************************************************@*/
		Node(void* obj)
		{
			previous = NULL;
			next = NULL;
			item = obj;
		}
		Node *previous;	// Pointer to previous node in the list
		Node *next;		// Pointer to next node in the list
		void* item;
};

/*@****************************************************************************
@CLASS		LinkedList	void
@MFUNCTION	void	public	LinkedList	"Constructor."
@MFUNCTION	void	public	push_back	"Inserts a new node at the head of the list."
@MFUNCTION	void*	public	pop_back	"Returns the object in the node at the head of the
										 list and removes the node from the list."
@MFUNCTION	void	public	erase		"Removes a specific node from the list."
@MFUNCTION	void	public	erase		"Removes a specific node from the list."
@MFUNCTION	int		public	size		"Returns the number of nodes in the list."
@MFUNCTION	int		public	length		"Returns the number of nodes in the list."
@MFUNCTION	void*	public	at			"Returns the object in the node at a location in the list."
@MFUNCTION	void*	public	operator[]	"Returns the object in the node at a location in the list."
@MFUNCTION	Node*	public	exists		"Returns the node an object appears in if the object is found
										 in the list; otherwise returns NULL."
@MFUNCTION	Node*	public	currentNode	"Returns the current node in the list."
@MFUNCTION	void	public	rewind		"Moves the current pointer backwards one node in the list."
@MFUNCTION	void	public	forward		"Moves the current pointer forward one node in the list."
@MFUNCTION	void	public	start		"Moves the current pointer to the head of the list."
@MFUNCTION	void	public	end			"Moves the current pointer to the end of the list."
****************************************************************************@*/
class LinkedList
{
	public:
		/*********************************************************************
		@FUNCTION	LinkedList	LinkedList
		@RETURNS	void
		@DESC		"Constructor"
		********************************************************************@*/
		LinkedList()
		{
			head = NULL;
			current = head;
		}

		/*@********************************************************************
		@FUNCTION	push_back	LinkedList
		@PARAM		void*		obj			"The object to add to the list"
		@RETURNS	void
		@DESC		"Adds an object to the head of the linked list."
		********************************************************************@*/
		void push_back(void* obj)
		{
			Node* pushNode = new Node(obj);

			pushNode->next = head;
			if(head != NULL)
				head->previous = pushNode;

			head = pushNode;

			if(current == NULL)
				current = head;
		}

		/*@********************************************************************
		@FUNCTION	pop_back	LinkedList
		@RETURNS	void*		"The pointer to the object at the head of the linked list."
		@DESC		"Returns and removes an object fromt he node at the head of the list."
		********************************************************************@*/
		void* pop_back()
		{
			if(head == NULL)
				return NULL;

			Node* ret = head;
			head = ret->next;
			ret->next = NULL;
			
			if(head != NULL)
				head->previous = NULL;

			if(current == ret)
				current = head;

			return ret->item;
		}

		/*@********************************************************************
		@FUNCTION	erase		LinkedList
		@PARAM		Node*		delNode		"The node to be deleted from the linked list."
		@RETURNS	void
		@DESC		"Deletes a node from the list."
		********************************************************************@*/
		void erase(Node* delNode)
		{
			if(delNode != NULL)
			{
				if(delNode->previous != NULL)
					delNode->previous->next = delNode->next;
				if(delNode->next != NULL)
					delNode->next->previous = delNode->previous;

				if(delNode == head)
				{
					if(delNode->previous != NULL)
						head = delNode->previous;
					else
						head = delNode->next;
				}

				if(current == delNode)
					current = head;
				}
		}

		/*@********************************************************************
		@FUNCTION	erase		LinkedList
		@PARAM		int			index		"The index of the node to be
											 deleted from the linked list."
		@RETURNS	void
		@DESC		"Deletes a node from the list."
		********************************************************************@*/
		void erase(int index)
		{
			Node* delNode = exists(at(index));
			erase(delNode);
		}

		/*@********************************************************************
		@FUNCTION	size		LinkedList
		@RETURNS	int		"The number of nodes in the linked list"
		@DESC		"Returns the number of nodes in the linked list"
		********************************************************************@*/
		short int size()
		{
			Node* tmp = head;
			short int ret = 0;
			while(tmp != NULL)
			{
				ret++;
				tmp = tmp->next;
			}
			return ret;
		}

		/*@********************************************************************
		@FUNCTION	length	LinkedList
		@RETURNS	int		"The number of nodes in the linked list"
		@DESC		"Returns the number of nodes in the linked list"
		********************************************************************@*/
		short int length()
		{
			return size();
		}

		/*@********************************************************************
		@FUNCTION	at		LinkedList
		@PARAM		int		index		"The index of the node whose payload is wanted"
		@RETURNS	void*	"A pointer to the object in a node at the location specified by the index."
		@DESC		"Returns a pointer to the object that is stored in the node specified."
		********************************************************************@*/
		void* at(int index)
		{
			Node* tmp = head;
			if(index >= size())
				return NULL;

			for(int i = 0; i < index; i++)
				tmp = tmp->next;

			return tmp->item;
		}

		/*@********************************************************************
		@FUNCTION	operator[]	LinkedList
		@PARAM		int	index	"The index of the node being referenced."
		@RETURNS	void*		"A pointer to the object in a node at the location specified by the index."
		@DESC		"Returns a pointer to the object that is stored in the node specified."
		********************************************************************@*/
		void* operator[](int index)
		{
			return at(index);
		}

		void swap(void* obj1, void* obj2)
		{
			if(obj1 == obj2)
				return;

			Node* n1 = exists(obj1);
			Node* n2 = exists(obj2);

			if(n1 == NULL || n2 == NULL)
				return;

			n1->item = obj2;
			n2->item = obj1;
		}

		/*@********************************************************************
		@FUNCTION	exists		LinkedList
		@PARAM		void*	find	"The object to find in the list."
		@RETURNS	Node*	"A pointer to the node where the object is found.  NULL if the object is not found."
		@DESC		"Attempts to find an object in a linked list.  If the object is not found, NULL is returned;
					 otherwise, a pointer to the node in which the object exists is returned."
		********************************************************************@*/
		Node* exists(void* find)
		{
			Node* tmp = head;
			for(int i = 0; i < size(); i++)
			{
				if(tmp->item == find)
					return tmp;
				tmp = tmp->next;
			}
			return NULL;
		}

		/*@********************************************************************
		@FUNCTION	currentNode	LinkedList
		@RETURNS	Node*	"The current node in the list"
		@DESC		"Returns the current node in the linked list."
		********************************************************************@*/
		Node* currentNode()
		{
			return current;
		}

		/*@********************************************************************
		@FUNCTION	rewind		LinkedList
		@RETURNS	void
		@DESC		"Moves the current pointer backwards through the list."
		********************************************************************@*/
		void rewind()
		{
			if(current != NULL)
				if(current->previous != NULL)
					current = current->previous;
		}

		/*@********************************************************************
		@FUNCTION	forward		LinkedList
		@RETURNS	void
		@DESC		"Moves the current pointer forward through the list."
		********************************************************************@*/
		void forward()
		{
			if(current != NULL)
                if(current->next != NULL)
					current = current->next;
		}

		/*@********************************************************************
		@FUNCTION	start		LinkedList
		@RETURNS	void
		@DESC		"Moves the current pointer to the head of the list."
		********************************************************************@*/
		void start()
		{
			current = head;
		}

		/*@********************************************************************
		@FUNCTION	end		LinkedList
		@RETURNS	void
		@DESC		"Moves the current pointer to the end of the list."
		********************************************************************@*/
		void end()
		{
			while(current->next != NULL)
				current = current->next;
		}

	protected:
		Node *head;		// Pointer to the first node in the list
		Node *current;	// Pointer to the current node in the list
};

// CircularList class
//
// The CircularList class is a non-ending LinkedList.  That is, the last
// node points to the first node and the first node points to the last.
class CircularList : public LinkedList
{
	public:
		// Constructor
		//
		// Initialize the head and current pointers by creating a
		// LinkedList.
		CircularList()
		{
			LinkedList::LinkedList();
		}

		void erase(void* obj)
		{
			Node* tmp = head;

			if(head->item == obj && head->previous->item == obj && head->next->item == obj)
			{
				head = NULL;
				current = NULL;
			}
			else
			{
				if(tmp->item == obj)
				{
					Node* tmp2 = tmp->next->previous;
					tmp->next->previous = tmp->previous->next;
					tmp->previous->next = tmp2;
	
					if(current == tmp)
						current = tmp->next;
				}
				else
				{
					do
					{
						tmp = tmp->next;
	
						if(tmp->item == obj)
						{
							Node* tmp2 = tmp->next->previous;
							tmp->next->previous = tmp->previous->next;
							tmp->previous->next = tmp2;
					
							if(current == tmp)
								current = tmp->next;
						}
					}while(tmp != head);
				}
			}
		}

		// prependNode
		//
		// Prepend a node to the list.  newNode is the node
		// to be prepended.  This is the preferred method
		// for adding a node to the list
		void prependNode(void* obj)
		{
			Node* newNode = new Node(obj);
			// If the head is null, then this is the first
			// node to be added to the list.
			if(head == NULL)
			{
				// Make the head the new node and make
				// the new node point to itself as it's
				// next and previous.  Then, make the
				// current node the new node.
				head = newNode;
				newNode->next = newNode;
				newNode->previous = newNode;
				current = newNode;
			}
			// If the head is not null, at least one
			// other node is already in the list.
			else
			{
				// Make the new node's next the head
				// and it's previous the same as the
				// head's previous.
				newNode->next = head;
				newNode->previous = head->previous;

				// Make the head's previous's next
				// node and the head's previous
				// node the new node.
				head->previous->next = newNode;
				head->previous = newNode;

				// Make the head and current point
				// to the new node.
				head = newNode;
				current = newNode;
			}
		}

		// contains
		//
		// This function does not work for CircularLists
		// (because the calls to forward()
		// inside the while() loop would create an
		// infinite loop (there does not exist
		// any node in the list with a next
		// poiinter set to NULL), so the function
		// is overloaded to do nothing.
		Node* contains(void *findNode)
		{
			findNode;
			return NULL;
		}
};

#endif