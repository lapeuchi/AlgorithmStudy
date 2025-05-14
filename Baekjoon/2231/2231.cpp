#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int creator = 0;

	for (int i = 1; i < n; i++)
	{
		int t = i;
		int sum = 0;

		// 자릿수 별 합 구하기
		while (t != 0) 
		{
			sum += t % 10;
			t /= 10;
		}

		// i + (i의 자릿수 별 합)이 같으면? -> 생성자
		if (i + sum == n)
		{
			creator = i;
			break;
		}
	}

	cout << creator;
}
