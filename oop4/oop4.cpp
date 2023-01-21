#include <iostream>
using namespace std;

#include "functions4.h"

int main()
{
	list l;
	l.init(4);
	l.insert(1);
	l.insert(1);
	l.insert(3);
	l.insert(2);
	l.insert(5);
	l.insert(19);
	l.print();

	return 0;
}