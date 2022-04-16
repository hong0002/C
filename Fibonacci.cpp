#include <stdio.h>

void fibo(int x)
{
	static a = 1, b = 1, c = 2;
	if (x == 0)
		return;
	printf("%d ", a);
	a = b;
	b = c;
	c = a + b;
	fibo(--x);
}
int main()
{
	int x;

	printf("몇 번째 항까지 구할까요? ");
	scanf_s("%d", &x);
	fibo(x);

	return 0;
}
