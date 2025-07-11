#include <iostream>
#include<queue>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}

	int cnt = 0;
	cout << "<";
	while (q.size() > 1)
	{
		int front = q.front();
		cnt++;
		if (cnt == k)
		{
			cout << front << ", ";
			cnt = 0;
		}
		else
		{
			q.push(front);
		}

		q.pop();
	}

	cout << q.front() << ">";
	return 0;
}
