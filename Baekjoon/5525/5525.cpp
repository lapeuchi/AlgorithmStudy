#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int m;
    string s;

    cin >> n >> m >> s;

    int cnt = 0;
    int check = 0;

    for (int i = 1; i < m - 1; i++)
    {
        if (s[i - 1] == 'I' && s[i] == 'O' && s[i + 1] == 'I')
        {
            check++;

            if (check >= n)
            {
                cnt++;
            }
            i++;
        }
        else
        {
            check = 0;
        }
    }

    cout << cnt;
}
