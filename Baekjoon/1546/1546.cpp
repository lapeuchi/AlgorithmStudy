#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float arr[n];
	float max = 0.0f;
	for(int i=0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] > max)
			max = arr[i];			
	}
	
	float sum = 0.0f;
	for(int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100.0f;
		sum += arr[i];
	}
	
	
	cout << fixed;
	cout << sum / n;
	
}
