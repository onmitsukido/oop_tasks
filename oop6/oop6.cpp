#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите выражение в обратной польской записи:" << endl;
    string str;
    getline(cin, str);
    stack<int> stack;
    istringstream s(str);
    int val;
    char c;
    while (!s.eof())
    {
        while (s >> val)
        {
            stack.push(val);
        }
        if (!s.eof())
        {
            s.clear();
            s.unget();
            s >> c;
            if (stack.size() < 2)
            {
                cout << "Неверный формат входных данных." << endl;
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
        cout << "Ошибка в стеке." << endl;
        return 0;
    }
    cout << "Результат: " << stack.top() << endl;

    return 0;
}   