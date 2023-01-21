#include <iostream>
#include <string>

using namespace std;

#include "functions.h"

int main()
{
    string tag = "#";
    string str;
    cout << "string input: ";
    getline(cin, str);
    int length = str.length();
    if ((length <= 100) && (length != 0))
    {
        uppercase(str);
        remove_spaces(str);
        str = tag + str;
        cout << str << endl;
    }
    else
    {
        cout << "the string has 0 or more than 100 symbols" << endl;
        cout << "string length: " << length << endl;
    }

    return 0;
}