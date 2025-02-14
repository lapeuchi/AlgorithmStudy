#include <iostream>
using namespace std;

int main()
{
	int arr[9];
    int max_n = 0;
	int max_i = 0;
	
	for(int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if(arr[i] > max_n)
		{
			max_n = arr[i];
			max_i = i + 1;
		}
	}
	
	cout << max_n << endl << max_i;
}
