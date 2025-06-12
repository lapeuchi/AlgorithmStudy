#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    int max = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = v[i] + v[j] + v[k];
               
                if (sum > m)
                    continue;
                
                if (sum == m)
                {
                    cout << sum;
                    return 0;
                }

                if (sum > max)
                    max = sum;
            }
        }
    }

    cout << max;

    return 0;
}
