#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str[50];
    char c;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    
    for(int i = 0; i < str[0].length(); i++)
    {
        c = str[0][i];
        for(int j = 0; j < n; j++)
        {
            if(c != str[j][i])
            {
                c = '?';
                break;
            }
        }    
        cout << c;    
    }
    
}
 
