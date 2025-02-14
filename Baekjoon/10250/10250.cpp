#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int h, w, n;
		cin >> h >> w >> n;

		int curH = 0;
		int curW = 0;
		for (int j = 0; j < n; j++)
		{
			if (j >= n - 1)
			{
				break;
			}

			// 꼭대기 층
			if (curH >= h - 1)
			{
				curH = 0;
				curW++;
			}
			else
			{
				curH++;
			}

		}

		curW++;
		curH++;

		cout << curH;
		
		if (curW < 10)
			cout << 0 << curW;
		else
			cout << curW;

		cout << "\n";

	}
	
}