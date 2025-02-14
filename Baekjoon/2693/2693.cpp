#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int a[10];
		for (int i = 0; i < 10; i++) 
		{
			int input;
			cin >> input;
			a[i] = input;
		}
		sort(a, a + 10, greater<>());
		cout << a[2] << "\n";

	}	

}
