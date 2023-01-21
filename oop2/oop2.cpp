#include <iostream>
#include <string>

using namespace std;

#include "functions.h"

int main()
{
    string str;
    cout << "string input:" << endl;
    getline(cin, str);
    cout << add_hashtag(str) << endl;
}