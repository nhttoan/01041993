#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main(void)
{
	//int store[10], i;

	int store[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int i;

	//for (i = 0; i < 9; i++)
	//{
	//	store[i] = i + 1;
	//}

	//store[9] = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", store[i]);
	}

	int h ;
	printf("\nenter h: ");
	scanf("%d", &h);

	int m;
	m = (h % 10);

	//printf("%d\n", m);

	int j;
	if (h > 10)
	{
		for (j = 0; j < h / 10; j++)														
		{
			for (i = 0; i < 10; i++)
			{
				printf("%d", store[i]);
			}
		}
		for (i = 0; i < m; i++)
		{
			printf("%d", store[i]);
		}
		//for (i = 1; i <= h; i++)
		//{
		//	printf("%d", i % 10);
		//}
	}
	else
	{
		for (i = 0; i < h; i++)
		{
			printf("%d", store[i]);
		}
	}

	system("pause");
	return 0;
}
