#include <iostream>
#include "functions4.h"
using namespace std;

	void list::init(int length)
	{
		first = new node;
		node* cur = first;

		for (int i = 0; i < length - 1; i++)
		{
			cur->next = new node;
			cur = cur->next;
		}
		last = cur;
		last->next = first;
	}

	void list::insert(int val)
	{
		first->value = val;
		first = first->next;
	}

	void list::print()
	{
		cout << first->value << " ";
		node* cur = first->next;
		while (cur != first)
		{
			cout << cur->value << " ";
			cur = cur->next;
		}
		cout << endl;
	};