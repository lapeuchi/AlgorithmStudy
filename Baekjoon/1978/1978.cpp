#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

bool IsPrime(int n)
{
    if (n < 3)
    {
        if (n == 2)
        {
            return true;
        }    
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (IsPrime(a))
            cnt++;
    }

    cout << cnt;
}
