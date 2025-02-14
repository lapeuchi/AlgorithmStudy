#include <iostream>
using namespace std;

void Print(int n)
{
    int bin = 0;

    int p = 0;

    while (n != 0)
    {
        //s.push(n % 2);
        if (n % 2 == 1)
            cout << p << " ";
        p++;
        n /= 2;
    }
    
}

int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Print(n);
    }

}
