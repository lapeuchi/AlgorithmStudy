#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	
	int min = 9999999, max = -9999999;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i]; 
	}
	
	cout << min << " " << max;
}