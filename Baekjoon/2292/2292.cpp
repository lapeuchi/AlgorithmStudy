#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	int i = 1;
	
	int rangeMax = 1;

	while (true)
	{
		if (x <= rangeMax)
		{
			break;
		}

		rangeMax += 6 * i;
		 
		i++;
	}

	cout << i;
}
