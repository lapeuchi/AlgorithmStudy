#include <iostream>
using namespace std;

int main()
{
	int hh, mm, m;
	
	cin >> hh >> mm;
	
	m = hh * 60 + mm;
	m -= 45;
	hh = m / 60;
	mm = m % 60;
	
	if(m < 0)
	{
		hh -= 1;
		hh += 24;
		mm+=60;
	}
	
	cout << hh << " ";
	cout << mm;
} 