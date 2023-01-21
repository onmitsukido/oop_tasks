#pragma once

#include <iostream>
using namespace std;

struct node
{
	int value;
	node* next;
	node* prev;
};

struct list
{
	node* first;
	node* last;

	void init(int length);
	void insert(int val);

	void print();
};