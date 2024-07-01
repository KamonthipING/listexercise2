#ifndef LIST
#define LIST

template<class T>
class Node {
public:
	T data;
	Node<T>* next, * prev;
	Node()
	{
		next = prev = 0;
	}
	Node(T el, Node<T>* n = 0, Node<T>* p = 0)
	{
		data = el; next = n; prev = p;
	}
};

template<class T>
class List {
public:
	List() { head = tail = 0; }
	T isEmpty() { return head == 0; }
	~List();
	void pushToHead(T el);
	void pushToTail(T el);
	T popHead();
	T popTail();
	bool search(T el);
	void print();
private:
	Node<T>* head, * tail;
};

#endif
