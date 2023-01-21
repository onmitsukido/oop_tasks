#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int func(string str)
{
    stack <int> stack;
    istringstream stroka(str);
    char c;
    int val;

    while (!stroka.eof())
    {
        while (stroka >> val)
        {
            stack.push(val);
        }
        if (!stroka.eof())
        {
            stroka.clear();
            stroka.unget();
            stroka >> c;
            if (stack.size() < 2)
            {
                cout << "invalid string!" << endl;
                return 0;
            }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (c)
            {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
                    stack.push(a / b);
                    break;
                default:
                    break;
            }
        }
    }

    if (stack.size() != 1)
    {
        cout << "invalid string!" << endl;
        return 0;
    }
    
    cout << "result: " << stack.top() << endl;

    return stack.top();
}