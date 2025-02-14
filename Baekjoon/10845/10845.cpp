#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> q;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (str == "pop")
        {
            if (q.empty() == true)
            {
                cout << "-1\n";
                continue;
            }
            cout << q.front() << "\n";
            q.pop();
        }
        else if (str == "size")
        {
            cout << q.size() << "\n";
        }

        else if (str == "empty")
        {
            cout << q.empty() << "\n";
        }

        else if (str == "front")
        {
            if (q.empty() == true)
            {
                cout << "-1\n";
                continue;
            }
            cout << q.front() << "\n";
        }

        else if (str == "back")
        {
            if (q.empty() == true)
            {
                cout << "-1\n";
                continue;
            }
            cout << q.back() << "\n";
        }
    }

}