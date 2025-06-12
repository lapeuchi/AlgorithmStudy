#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1) 
        return 1;

    return n * factorial(n - 1);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    
    int parent = factorial(n - k) * factorial(k);
    int child = factorial(n);

    cout << child / parent;
    
    return 0;
}

