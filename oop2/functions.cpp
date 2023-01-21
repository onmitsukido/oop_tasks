#include <iostream>
#include <string>

using namespace std;

void remove_spaces(string& str)
{
    string::iterator del = remove(str.begin(), str.end(), ' ');
    str.erase(del, str.end());
};

void uppercase(string& str)
{
    str[0] = (char)toupper(str[0]);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = (char)toupper(str[i + 1]);
    }
};