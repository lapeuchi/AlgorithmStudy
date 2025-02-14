#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    
    int ia, ib, ic;
    ia = stoi(a);
    ib = stoi(b);
    ic = stoi(c);
    
    cout << ia + ib - ic << endl;

    string ab = a + b;
    int iab = stoi(ab);
 
    cout << iab - ic;
}
