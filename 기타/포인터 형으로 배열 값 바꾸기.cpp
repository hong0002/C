#include <stdio.h>

int* array_sum(int* a, int* b);
int main()
{
	int i;
	int a[] = { 15, 25 }, b[] = { 10,20 };
	int* p, * q;
	p = a;
	q = b;

	for(int i=0; i<2; i++)
		printf("%d ",array_sum(p, q));
	printf("\n");

	return 0;
}

int* array_sum(int *a, int *b)
{
	static int i = 0; //정적변수
	*(a + i) += *(b + i); //a[0] += b[0]
	i++;
	return *(a + i - 1); //a[0]
}
