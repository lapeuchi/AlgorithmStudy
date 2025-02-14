#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	if (n == 2)
		return true;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int m, n;
	
	cin >> m;
	cin >> n;

	int foundMin = -1;
	int sum = 0;
	for (int i = m; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (foundMin == -1)
			{
				foundMin = i;
			}
			
			sum += i;
		}
	}
	
	if (foundMin == -1)
		cout << -1;
	else 
		cout << sum << "\n" << foundMin;

}

