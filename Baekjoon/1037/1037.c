#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int max = 0, min = 9999099;
	for(int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		
		if(a > max)
			max = a;
		if(a < min)
			min = a;
	}

	printf("%d", max * min);		
}

