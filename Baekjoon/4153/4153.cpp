#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a == 0 && b == 0 && c == 0)
			return 0;

        if (a >= b) 
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if (b >= c) 
        {
            int temp = c;
            c = b;
            b = temp;
        }
        if (a >= b) 
        {
            int temp = b;
            b = a;
            a = temp;
        }
		
        if (c * c == a * a + b * b)
            cout << "right\n";
        else
            cout << "wrong\n";

	}

}