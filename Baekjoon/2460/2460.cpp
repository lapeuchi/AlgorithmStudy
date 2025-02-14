#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        int exit, enter;
        cin >> exit >> enter;
        
        cnt -= exit;
        if (cnt <= 0)
            cnt = 0;
        
        cnt += enter;
        if (cnt > max)
            max = cnt;
    }

    cout << max;

}

