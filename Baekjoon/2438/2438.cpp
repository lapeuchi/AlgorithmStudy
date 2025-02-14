#include <iostream>
using namespace std;

int main()
{
 	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}		
		cout << "\n";
	}
	
	return 0;
}
