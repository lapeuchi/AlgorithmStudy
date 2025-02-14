#include <iostream>
using namespace std;


int Func(int n)
{
    if (n <= 1)
        return n;

    return Func(n - 1) + Func(n - 2);
}

int main()
{
    int n;

    cin >> n;

    cout << Func(n);
    
}
