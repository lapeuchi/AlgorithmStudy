#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    queue<int> q;
    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    int cnt = 0;
    cout << "<";
    k--;
    while (true)
    {
        if (cnt < k)
        {
            cnt++;
            q.push(q.front());
            q.pop();
         
        }
        else
        {
            cnt = 0;
            cout << q.front();
            q.pop();
            if (q.empty())
                break;
            cout << ", ";
        }
        
    }

    cout << ">";
    
}