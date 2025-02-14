#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string arr[n];
	bool check;
	int score;
	int plus = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		score = 0;
		plus = 1;
		for(int j = 0; j < arr[i].size(); j++)
		{			
			if (arr[i][j] == 'X')
			{
				check = false;
				plus = 0;
			}
			if(arr[i][j] == 'O' && !check)
			{
				check = true;
				plus = 1;
			}
			if(arr[i][j] == 'O' && check)
			{
				score += plus;	
				plus+=1;	
			}
		}
		cout << score << '\n';
	
	} 
}