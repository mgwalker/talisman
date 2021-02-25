#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H
#define NULL 0

/******************************************
 * NODE class
 *   Contains data and links to neighboring
 *   nodes in a linked list
 ******************************************/
class NODE
{
	public:
		// Constructor
		NODE(void* object)
		{
            data = object;
			next = NULL;
			previous = NULL;
		}
		~NODE()
		{
			//delete data;
			//if(next != NULL)
			//	delete next;
			//if(previous != NULL)
			//	delete previous;
		}
		NODE* next;		// next node in the list
		NODE* previous;	// previous node in the list
		void* data;		// data for this node
};

/******************************************
 * LinkedList class
 *   A generic linked list, capable of
 *   holding any amount of any type of
 *   data, limited only by memory.
 ******************************************/
class LinkedList
{
	public:
		// Constructor
		LinkedList()
		{
			_head    = NULL;
			_current = NULL;
			_tail    = NULL;
			_nodes   = 0;
		}
		~LinkedList()
		{
		/*	if(_head != NULL)
			{
				while(_head->next != NULL)
				{
					_head = _head->next;
					delete _head->previous;
				}
				delete _head;
			}*/
		}

		// Add an object to the head of the list.
		void prepend(void* object)
		{
			// Node to insert
			NODE* newNode = new NODE(object);

			// If the head is not null, then the list already has objects
			// in it, so put the new node before the head.
			if(_head != NULL)
			{
				newNode->next = _head;
				_head->previous = newNode;
				_head = newNode;
			}
			// The head is null.  That means that the list is empty, so the
			// head, tail, and current nodes are all the new node.
			else
				_head = _current = _tail = newNode;

			// Increment the node counter
			_nodes++;
		}

		// Add an object to the end of the list.
		void append(void* object)
		{
			// Node to insert
			NODE* newNode = new NODE(object);

			// If the tail is not null, then the list already has objects
			// in it, so put the new node after the tail.
			if(_tail != NULL)
			{
				newNode->previous = _tail;
				_tail->next = newNode;
				_tail = newNode;
			}
			// The tail is null.  That means that the list is empty, so the
			// head, tail, and current nodes are all the new node.
			else
				_head = _current = _tail = newNode;
			_nodes++;
		}

		// Remove the object from the top of the list and return in.  If the list is empty, return NULL.
		void* pop()
		{
			// If the head is not null, the list is not empty, so return the top object.
			if(_head != NULL)
			{
				NODE* ret = _head;
				if(_tail == _head)
					_tail = NULL;
				if(_current == _head)
					_current = _head->next;
				_head = _head->next;
				if(_head != NULL)
					_head->previous = NULL;
				_nodes--;
				return ret->data;
				delete ret;
			}
			// If the list is empty, return null.
			return NULL;
		}

		// Remove a particular object from the list, if it's in the list.
		void erase(void* object)
		{
			// Get the object index and erase it, if it's in the list.
			int index = exists(object);
			if(index >= 0)
				erase(index);
		}

		// Remove an object in a particular place in the list, if it exists.
		void erase(unsigned int index)
		{
			// If the index is positive and not out-of-range, erase the node.
			if(index < _nodes && index >= 0)
			{
				NODE* n = _head;
				for(unsigned int i = 0; i < index; i++)
					n = n->next;
				if(_head == n)
					_head = _head->next;
				if(_current == n)
					_current = _head;
				if(_tail == n)
					_tail = n->previous;
				if(n->previous != NULL)
					n->previous->next = n->next;
				if(n->next != NULL)
					n->next->previous = n->previous;
				_nodes--;
			}
		}

		// Return the number of objects in the list.
		unsigned int size()
		{
			return _nodes;
		}

		// Return the object at a particular place in the list, if it exists.  If not, return NULL.
		void* at(unsigned int index)
		{
			// If the index is positive and not out-of-range, return the node.
			if(index < _nodes && index >= 0)
			{
				NODE* ret = _head;
				for(unsigned int i = 0; i < index; i++)
					ret = ret->next;
				return ret->data;
			}
			return NULL;
		}

		// Return the object at a particular place in the list, if it exists.
		void* operator[](unsigned int index)
		{
			return at(index);
		}

		// Return the position of an object in the list, if it exists.  If not, return -1.
		unsigned int exists(void* object)
		{
			NODE* n = _head;
			for(unsigned int index = 0; index < _nodes; index++)
			{
				if(n->data == object)
					return index;
				if(n->next != NULL)
					n = n->next;
			}
			return -1;
		}

		// Return the object at the current position in the list, if the list is not empty.  If it is, return NULL.
		void* current()
		{
			if(_current != NULL)
				return _current->data;
			return NULL;
		}

		// Rewind the current pointer to the previous node in the list.
		void rewind()
		{
			if(_current->previous != NULL)
				_current = _current->previous;
		}

		// Move the current pointer to the next node in the list.
		void forward()
		{
			if(_current->next != NULL)
				_current = _current->next;
		}

		// Move the current pointer to the head of the list.
		void start()
		{
			_current = _head;
		}

		// Move the current pointer to the end of the list.
		void end()
		{
			_current = _tail;
		}

	private:
		NODE* _head;
		NODE* _current;
		NODE* _tail;
		unsigned int   _nodes;
};

class CircularList : public LinkedList
{
	public:
		// Constructor
		CircularList()
		{
			_head    = NULL;
			_current = NULL;
			_tail    = NULL;
			_nodes   = 0;
		}
		~CircularList()
		{
			if(_head != NULL)
			{
				_head->previous->next = NULL;
				while(_head->next != NULL)
				{
					_head = _head->next;
					delete _head->previous;
				}
				delete _head;
			}
		}

		// Add an object to the head of the list.
		void prepend(void* object)
		{
			// Node to insert
			NODE* newNode = new NODE(object);

			// If the head is not null, then the list already has objects
			// in it, so put the new node before the head.
			if(_head != NULL)
			{
				newNode->next = _head;
				newNode->previous = _head->previous;
				_head->previous->next = newNode;
				_head->previous = newNode;
				_head = newNode;
			}
			// The head is null.  That means that the list is empty, so the
			// head, tail, and current nodes are all the new node.
			else
			{
				_head = _current = _tail = newNode;
				_head->next = _head->previous = _head;
			}

			// Increment the node counter
			_nodes++;
		}

		// Add an object to the end of the list.
		void append(void* object)
		{
			prepend(object);
			/*
			// Node to insert
			NODE* newNode = new NODE(object);

			// If the tail is not null, then the list already has objects
			// in it, so put the new node after the tail.
			if(_tail != NULL)
			{
				newNode->previous = _tail;
				_tail->next = newNode;
				_tail = newNode;
			}
			// The tail is null.  That means that the list is empty, so the
			// head, tail, and current nodes are all the new node.
			else
				_head = _current = _tail = newNode;
			_nodes++;
			*/
		}

		// Remove the object from the top of the list and return in.  If the list is empty, return NULL.
		void* pop(){}

		// Remove a particular object from the list, if it's in the list.
		void erase(void* object)
		{
			// Get the object index and erase it, if it's in the list.
			int index = exists(object);
			if(index >= 0)
				erase(index);
		}

		// Remove an object in a particular place in the list, if it exists.
		void erase(unsigned int index)
		{
			// If the index is positive and not out-of-range, erase the node.
			if(index < _nodes && index >= 0)
			{
				NODE* n = _head;
				for(unsigned int i = 0; i < index; i++)
					n = n->next;
				if(_head == n)
					_head = _head->next;
				if(_current == n)
					_current = _head;
				//if(_tail == n)
				//	_tail = n->previous;
				//if(n->previous != NULL)
				n->previous->next = n->next;
				//if(n->next != NULL)
				n->next->previous = n->previous;
				_nodes--;
			}
		}

		// Return the number of objects in the list.
		unsigned int size()
		{
			return _nodes;
		}

		// Return the object at a particular place in the list, if it exists.  If not, return NULL.
		void* at(int index)
		{
			// If the index is positive and not out-of-range, return the node.
			//if(index < _nodes && index >= 0)
			//{
			NODE* ret = _head;
			if(index > 0)
				for(int i = 0; i < index; i++)
					ret = ret->next;
			else
				for(int i = 0; i > index; i--)
					ret = ret->previous;
			return ret->data;
			//}
			//return NULL;
		}

		// Return the object at a particular place in the list, if it exists.
		void* operator[](int index)
		{
			return at(index);
		}

		// Return the position of an object in the list, if it exists.  If not, return -1.
		unsigned int exists(void* object)
		{
			NODE* n = _head;
			for(unsigned int index = 0; index < _nodes; index++)
			{
				if(n->data == object)
					return index;
				if(n->next != NULL)
					n = n->next;
			}
			return -1;
		}

		// Return the object at the current position in the list, if the list is not empty.  If it is, return NULL.
		void* current()
		{
			if(_current != NULL)
				return _current->data;
			return NULL;
		}

		// Rewind the current pointer to the previous node in the list.
		void rewind()
		{
			if(_current->previous != NULL)
				_current = _current->previous;
		}

		// Move the current pointer to the next node in the list.
		void forward()
		{
			if(_current->next != NULL)
				_current = _current->next;
		}

		// Move the current pointer to the head of the list.
		void start()
		{
			_current = _head;
		}

		// Move the current pointer to the end of the list.
		void end()
		{
			_current = _tail;
		}

	private:
		NODE* _head;
		NODE* _current;
		NODE* _tail;
		unsigned int   _nodes;
};

#endif