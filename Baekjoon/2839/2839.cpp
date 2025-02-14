#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt3 = 0;
    int cnt5 = n / 5;
    n = n % 5;

    while (n != 0)
    {    
        if (n < 3)
        {
            if (cnt5 == 0)
            {
                cout << -1;
                return 0;
            }
            cnt5--;
            n += 5;
        }
        else
        {
            cnt3 += n / 3;
            n = n % 3;
        }
    }

    cout << cnt5 + cnt3;
}