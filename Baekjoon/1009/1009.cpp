#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n;
	while (n--) 
    {
		cin >> a >> b;
		int c = 1;
		for (int i = 1; i <= b; i++)
        {
			c = (c * a) % 10;
		}
		if (c == 0) 
            cout << 10 << "\n";
		else
            cout << c << "\n";
	}
}
