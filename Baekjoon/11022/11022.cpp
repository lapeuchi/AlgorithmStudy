#include <iostream>
using namespace std;

int main()
{
 	cin.tie(NULL);
	
	int n, a, b;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;		
	}
	
	return 0;
}