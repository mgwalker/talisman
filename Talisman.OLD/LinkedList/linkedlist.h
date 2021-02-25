template<class Type>
class Node
{
	public:
		Node(Type&);
		Node *previous;
		Node *next;
		Type item;
};

template<class Type>
class LinkedList
{
	public:
		LinkedList();
		void insertNode(Node<Type>*, Node<Type>*);
		void deleteNode(Node<Type>*);
		Node<Type> *currentNode();
		void forward();
		void rewind();

	private:
		Node<Type> *head;
		Node<Type> *current;
};
