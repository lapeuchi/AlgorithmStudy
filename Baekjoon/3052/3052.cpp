#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[]) 
{ 
	int count[42] = {};		
	int v;
	for(int i = 0; i < 10; i++) 
	{
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;	
	}
 
	int result = 0;

	for(int i=0; i < 42; i++) 
	{
		if(count[i] > 0) 
		{		
			result++;
		}
	}
	cout << result;
 
	return 0;
 
 
}