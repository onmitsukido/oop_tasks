#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "functions.h"

int main()
{
    string str;
    cout << "string input:" << endl;
    getline(cin, str);
    cout << "encoded string: " << encode(str) << endl << "decoded string: " << decode(str) << endl;
    return 0;
}