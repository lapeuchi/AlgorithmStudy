#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

stack<int> s;

int main()
{
    int n;
    cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        
        if (a == 0)
        {
            s.pop();
            continue;
        }
        
        s.push(a);
    }

    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;
}