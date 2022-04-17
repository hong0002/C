#include <stdio.h>

int main()
{
	int num[] = { 30,20,10,50,60,40 };
	int tmp;

	printf("초기 값: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	for (int i = 6 - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[j + 1] < num[j])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	printf("정렬 후: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
