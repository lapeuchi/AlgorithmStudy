#include <iostream>
#include <string>

using namespace std;

void NO()
{
    cout << "NO\n";
}

void YES()
{
    cout << "YES\n";
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str.size() % 2 == 1)
        {
            NO();
            continue;
        }
        
        int l = 0, r = 0;

        for (int j = 0; j < str.size(); j++)
        {
            char a = str[j];

            if (a == '(')
            {
                l++;
            }
            else
            {
                r++;
                if (r > l)
                {
                    break;
                }
            }
        }

        if (r == l)
        {
            YES();
        }
        else
        {
            NO();
        }
    }
    
}