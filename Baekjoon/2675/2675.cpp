#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int n; 
    cin >> n;
   
    for(int i = 0; i < n; i++)
    {
        int a;
        string str;
        cin >> a >> str;

        for(int j = 0; j < str.length(); j++)
        {
            for(int k = 0; k < a; k++)
            {
                cout << str[j];
            }
        }
        cout << "\n";
    }
}
