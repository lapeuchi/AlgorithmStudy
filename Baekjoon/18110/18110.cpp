#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	vector<int> dif;
	for (int i = 0; i < n; i++)
	{
		int d;
		cin >> d;
		dif.push_back(d);
	}

	sort(dif.begin(), dif.end());
	
	int a = round(dif.size() * 0.15);

	int sum = 0;
	int cnt = 0;
	for (int i = a; i < dif.size() - a; i++)
	{
		sum += dif[i];
		cnt++;
	}

	cout << round((float)sum / cnt);
}