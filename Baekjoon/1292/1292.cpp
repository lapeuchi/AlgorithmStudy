#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
	int a, b;
	cin >> a >> b;
	
	vector<int> arr(b);

	int f = 1;
	int j = 0;
	for (int i = 0; i < b; i++)
	{
		arr[i] = f;
		j++;
		if (j >= f)
		{
			j = 0;
			f++;
		}

	}

	int sum = 0;
	for (int i = a-1; i < b; i++)
	{
		sum += arr[i];
	}

	cout << sum;
}
