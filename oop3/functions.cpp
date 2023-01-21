#include <iostream>
#include <string>
#include <vector>
using namespace std;

const string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

string encode(string input)
{
    string output;
    int a = 0;
    int b = -6;

    for (char c : input)
    {
        a = (a << 8) + c;
        b += 8;
        while (b >= 0)
        {
            output.push_back(str[(a >> b) & 0x3F]);
            b -= 6;
        }
    }

    if (b > -6)
    {
        output.push_back(str[((a << 8) >> (b + 8)) & 0x3F]);
    }

    while (output.size() % 4)
    {
        output.push_back('=');
    }

    input = output;
    return input;
}

string decode(string input)
{
    string output;
    vector <int> m(256, -1);
    for (int i = 0; i < 64; i++)
    {
        m[str[i]] = i;
    }
    int a = 0;
    int b = -8;

    for (char c: input)
    {
        if (m[c] == -1)
        {
            break;
        }

        a = (a << 6) + m[c];
        b += 6;

        if (b >= 0)
        {
            output.push_back(char((a >> b) & 0xFF));
            b -= 8;
        }
    }
    
    input = output;
    return input;
}