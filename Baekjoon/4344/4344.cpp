#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int sum = 0;
	int cnt = 0;
	float avg = 0;
	cin >> n;
	cout << fixed;
	cout.precision(3);
	
	for(int i = 0; i < n; i++)
	{
		sum = 0;
		avg = 0;
		cnt = 0;
		scanf("%d", &m);
		int arr[m];
		for(int j = 0; j < m; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		
		avg = sum / m;
		
		for(int k = 0; k < m; k++)
		{
			if(arr[k] > avg)
				cnt++;	
		}
		cout << float(cnt) / m * 100 << '%' << '\n';
	//	printf("%.3f%\n", float(cnt) / m * 100);
		
	}
}