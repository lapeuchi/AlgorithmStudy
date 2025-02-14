#include <iostream>
using namespace std;

int main()
{
 	cin.tie(NULL);
//	sync_with_stdio(false);
	
	int n;
	cin >> n;
	int a, b;
	int sum = 0;
	for(int i=0; i < n; i++)
	{
		cin >> a >> b;
		cout << a+b << "\n";	
	}	
}