#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string a;
    stack<char> stack;

    cin >> a;

    for (char c : a)
    {
        stack.push(c);
    }

    for (char c : a)
    {
        char o = stack.top(); 
        stack.pop();

        if (c != o)
        {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
}