#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<int> q;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str == "push_front")
        {
            int n;
            cin >> n;
            q.push_front(n);
        }
        else if (str == "push_back")
        {
            int n;
            cin >> n;
            q.push_back(n);
        }
        else if (str == "pop_front")
        {
            if (q.empty() == true)
            {
                cout << "-1\n";
                continue;
            }
            cout << q.front() << "\n";
            q.pop_front();
        }
        else if (str == "pop_back")
        {
            if (q.empty() == true)
            {
                cout << "-1\n";
                continue;
            }
            cout << q.back() << "\n";
            q.pop_back();
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