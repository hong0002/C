#include <stdio.h>

int main()
{
	char arr[] = "abc def ghi jkl";
	char narr[16];
	int size;
	int count = 0;
	size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == ' ')
		{
			count++;
			continue;
		}
		narr[i-count] = arr[i];
	}
	for (int i = 0; i < size-count; i++)
	{
		printf("%c", narr[i]);
	}
	return 0;
}
