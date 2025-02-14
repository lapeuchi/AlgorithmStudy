#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int time = 0;
    int k = 0;

    while (true)
    {
        k++;        
        if(n == 0) break;
        if(n < k) k = 1;

        n -= k;
        time++;
    }
    cout << time;
}

