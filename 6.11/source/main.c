#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[5];
	int i, j, k, temp;

	printf("請輸入5個你要排序的數:");
	for (i = 0; i <= 4; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");

	for (i = 0; i <= 4; i++)
	{
		for (j = i; j <= 3; j++)
		{
			if (a[i] > a[j + 1])
			{
				temp = a[i];
				a[i] = a[j + 1];
				a[j + 1] = temp;

				for (k = 0; k <= 4; k++)
				{
					printf("%d ", a[k]);
				}
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}