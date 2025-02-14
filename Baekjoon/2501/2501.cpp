#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (cnt == k)
            {
                cout << i;
                return 0;
            }
        }
    }
    
    cout << 0;

}
