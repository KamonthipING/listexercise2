#include <iostream>
#include "list.h"
using namespace std;

template<class T>
List<T>::~List() {
	for (Node<T>* p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}
template<class T>
void List<T>::pushToHead(T el)
{
	head = new Node<T>(el, head, 0);
	if (tail == 0)
	{
		tail = head;
	}
	else
	{
		head->next->prev = head;
	}
}

template<class T>
void List<T>::pushToTail(T el)
{
	Node<T>* p = new Node<T>(el);
	if (isEmpty()) {
		head = tail = p;
	}
	else {
		tail->next = p;
		p->prev = tail;
		tail = p;
	}
}

template<class T>
T List<T>::popHead()
{
	T el = head->data;
	Node<T>* tmp = head;
	if (head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
		head->prev = 0;
	}
	delete tmp;
	return el;
}

template<class T>
T List<T>::popTail()
{
	T el = tail->data;
	Node<T>* p = tail;
	if (isEmpty())
	{
		head = tail = 0;
	}
	else
	{
		tail = p->prev;
		tail->next = 0;
	}
	delete p;
	return el;
}

template<class T>
bool List<T>::search(T el)
{
	if (isEmpty())
	{
		head = tail = 0;
	}
	else
	{
		Node<T>* p = head;
		while (p->data != el)
		{
			if (p->next == 0)
			{
				return false;
			}
			p = p->next;
		}
	}
	return true;
}

template<class T>
void List<T>::print()
{
	if (head == tail)
	{
		cout << head->data;
	}
	else
	{
		Node<T>* tmp = head;
		while (tmp != tail)
		{
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
		cout << tmp->data << " ";
	}
}
