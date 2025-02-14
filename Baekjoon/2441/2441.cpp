#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // n줄 만큼
    for (int i = n; i > 0; i--)
    {
        // n번 출력
        int nu = n - i;
        for (int j = 0; j < n; j++)
        {
            if (j < nu)
                cout << " ";
            else
                cout << "*";
        }

        cout << "\n";
    }
}
