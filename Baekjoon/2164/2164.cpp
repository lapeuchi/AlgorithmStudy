#include <iostream>
#include <queue>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	
	queue<int> s;
	for (int i = 1; i < n + 1; i++)
	{
		s.push(i);
	}
		
	bool c = true;
	while (s.size() > 1)
	{
		if (c)
		{
			s.pop();
		}
		else
		{
			int tmp = s.front();
			s.pop();
			s.push(tmp);
		}

		c = !c;
	}

	cout << s.front();
}
