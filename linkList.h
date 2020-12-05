#pragma once
#include <cassert>
#include <iostream>

template <typename T>
struct Node 
{
	T value;
	Node<T>* next;
};

template <typename T>
std::ostream& operator << (std::ostream& streamP, const Node<T>& node)
{
	streamP << node->value;
	return streamP;
}


template <typename T>
class List
{
	Node<T>* head = NULL;

public:
	List():head(NULL)
	{

	}

	List(const List<T>& list)
	{
		Node<T>* pointer = head;
		while (pointer)
		{
			Node<T>* newPointer = pointer->next;
			delete pointer;
			pointer = newPointer;
		}

		head = NULL;
		pointer = list.head;
		while (pointer)
		{
			this->pushFront(pointer->value);
			pointer = pointer->next;
		}
	}

	~List()
	{
		Node<T>* pointer = head;
		while (pointer)
		{
			Node<T>* newPointer = pointer->next;
			delete pointer;
			pointer = newPointer;
		}
	}

	List& operator = (List<T>& list)
	{
		Node<T>* pointer = head;
		while (pointer)
		{
			Node<T>* newPointer = pointer->next;
			delete pointer;
			pointer = newPointer;
		}

		head = NULL;
		Node<T>* pointer = list.head;
		while (pointer)
		{
			this->pushFront(pointer->value);
			pointer = pointer->next;
		}
	}

	void pushFront(const T value)
	{
		head = new Node<T>{ value, head };
	}

	T popFront()
	{
		assert(head);
		Node<T>* newHead = head->next;
		T res = head->value;
		delete head;
		head = newHead;
		return res;
	}

	T removeByIndex(const int index)
	{
		Node<T>* pointer = head;
		for (int i = 0; i < index - 1; ++i)
		{
			assert(pointer);
			pointer = pointer->next;
		}
		Node<T>* newHead = pointer->next->next;
		T res = pointer->next->value;
		delete pointer->next;
		pointer->next = newHead;
		return res;
	}

	T getValue(int index)
	{
		Node<T>* pointer = head;
		for (int i = 0; i < index; ++i)
		{
			assert(pointer);
			pointer = pointer->next;
		}
		T res = pointer->value;
		return res;
	}

	Node<T>* getHead()
	{
		return head;
	}

	List operator + (List<T> lista)
	{
		List<T> res;
		Node<T>* pointer = head;
		while(pointer)
		{
			res.pushFront(pointer->value);
			pointer = pointer->next;
		}
		pointer = lista.head;
		while (pointer)
		{
			res.pushFront(pointer->value);
			pointer = pointer->next;
		}
		return res;
	}

	void operator += (List<T> lista)
	{
		Node<T>* pointer = head;
		while (pointer)
		{
			pointer = pointer->next;
		}
		pointer = lista.head;
		while (pointer)
		{
			this->pushFront(pointer->value);
			pointer = pointer->next;
		}
	}

	int len()
	{
		Node<T>* pointer = head;
		int i = 0;
		while (pointer)
		{
			i++;
			pointer = pointer->next;
		}
		return i;
	}
};

template <typename T>
std::ostream& operator << (std::ostream& streamP, List<T>& list)
{
	Node<T>* pointer = list.getHead();
	while (pointer)
	{
		streamP << pointer->value << ' ';
		pointer = pointer->next;
	}
	return streamP;
}
