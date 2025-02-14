#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
    
        if(i == 0)
        {
            a -= 1;
        }
        else if (i == 1)
        {
            a -= 1;
        }
        else if (i==2)
        {
            a -= 2;
        }
        else if (i==3)
        {
            a -= 2;
        }
        else if (i==4)
        {
            a -= 2;
        }
        else if (i==5)
        {
            a -= 8;
        }

        cout << -1 * a << " ";
    }
}