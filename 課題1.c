#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
//#define max(a,b)

int main(void)
{
	int a, b, i;
	printf("enter a: ");
	scanf("%d", &a);
	printf("enter b: ");
	scanf("%d", &b);

	int s = 0;

	if (a<b)
	{
		for (i = a; i <= b; i++)
		{
			s += i;
		}
	}
	else if (a>b)
	{
		for (i = a; i >= b; i--)
		{
			s += i;
		}
	}

	printf("sum from a to b: %d\n", s);
	
	system("pause");
	return 0;
}

