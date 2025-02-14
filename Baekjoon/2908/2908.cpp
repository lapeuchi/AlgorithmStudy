#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int Reverse(int n)
{
    // 1 -> 100
    int x = (n % 10) * 100;

    // 10 -> 10
    int y = ((n % 100) / 10)*10;

    // 100 -> 1
    int z = n / 100;

    return x + y + z;
}

int main()
{
    int a = 0, b = 0;
    int c, d;
    cin >> a >> b;

    c = Reverse(a);
    d = Reverse(b);

    if (c > d)
        cout << c;
    else
        cout << d;
}
