#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        string n;
        cin >> n;

        if (n == "0")
            return 0;
        
        string m;
        stack<char> s;
        for (char ch : n) 
        {
            s.push(ch);
        }

        bool result = true;

        for (int i = 0; i < n.size(); i++)
        {
            char c = s.top();
            s.pop();

            if (n[i] != c)
            {
                result = false;
                break;
            }
        }

        if (result)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
