#include <stdio.h>
int main()
{
	int num[6] = { 40,30,10,20,60,50 };
	int i, j, tmp, min_index;

	printf("초기 값: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	for (int i = 0; i < 6; i++)
	{
		min_index = i;
		for (j = i + 1; j < 6; j++)
		{
			if (num[j] < num[min_index])
				min_index = j;
		}
		tmp = num[i];
		num[i] = num[min_index];
		num[min_index] = tmp;
	}
	printf("정렬 후: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}
