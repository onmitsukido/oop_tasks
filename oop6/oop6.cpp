#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
    string strr;
    cout << "string input:" << endl;
    getline(cin,strr);
    cout << func(strr) << endl;
}