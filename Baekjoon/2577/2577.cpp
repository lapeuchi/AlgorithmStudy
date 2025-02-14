#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char *argv[]) 
{
 
	int count[10] = {};
	int a, b, c;
 
	cin >> a >> b >> c;
 
	int res = a * b * c;

	string s = to_string(res);
 
	for (char ch : s) 
	{
		count[ch - '0']++;
	}

	for (int v : count) 
	{
		cout << v << "\n";
	}
	return 0;
}
