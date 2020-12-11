
#pragma once
#include "String.h"
#include <iostream>
#include "linkList.h"

int main()
{
	/*
	char str1[] = "My sfhcrt";
	char str2[] = "My kbjhfrgtyvnh";
	String str = arrCharMerge(str1, str2);
	std::cout << str << std::endl;
	//delete[] str;
	std::cout << std::endl;
	*/
	/*
	char str3[] = "ugjmfh";
	String str01(str3);
	std::cout << 1;
	String str02 = str01.split(3);
	std::cout << str01 << std::endl;
	std::cout << str02 << std::endl;
	std::cout << std::endl;

	String str04 ("afrhas");
	bool a = str04.foundStr("as");
	std::cout << a << std::endl;
	*/
	/*
	String str01(str1);
	String str02(str2);
	String str03 = str01 + str02;
	std::cout << str03 << std::endl;
	std::cout << std::endl;

	std::cout << str01.len() << std::endl;
	std::cout << std::endl;

	str01 += str02;
	std::cout << str01 << std::endl;
	std::cout << std::endl;

	std::cout << str01[0] << std::endl;
	std::cout << std::endl;

	str01 = str02;
	std::cout << str01 << std::endl;
	std::cout << std::endl;


	String str04("asasa");
	std::cout << str04.countChar('a') << std::endl;
	std::cout << str04.findFirstOf('a') << std::endl;
	std::cout << std::endl;

	*/
	while (true)
	{
		List<int> l1;
		l1.pushFront(11);
		l1.pushFront(12);
		l1.pushFront(13);

		List<int> l2;
		l2.pushFront(22);
		l2.pushFront(29);
		std::cout << l1 << '\n';
		std::cout << l2 << '\n';
		List<int> l3 = l1 + l2;
		std::cout << l3 << std::endl;
		l1 += l3;
		std::cout << l1 << std::endl;

		std::cout << l1.popFront() << std::endl;
		std::cout << l1 << std::endl;
		l1.removeByIndex(4);
		std::cout << l1 << std::endl;
		std::cout << l1.getValue(3) << std::endl;
		std::cout << l1.len() << std::endl;

		//l1.removeByIndex(-10);
	}
	return 0;
}
/*
#include <iostream>


	struct Node
	{
		int* value;
		Node* next;

		Node(int* v, Node* h) :
			value(v),
			next(h)
		{}
	};

	class List
	{
	public:
		Node* _head;

	public:
		List()
		{
			_head = 0;
		}

		void pushfront(int* value)
		{
			_head = new Node(value, _head);
		}
	};


	int main()
	{
		List L = List();

		//int* a;
		int a = 5;

		L.pushfront(&a);

		std::cout << *(L._head->value) << std::endl;

		//int* b;
		int b = 7;

		L.pushfront(&b);

		std::cout << *(L._head->value) << std::endl;
	}*/

	//return 0;
//}