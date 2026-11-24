#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char *argv[])
{
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);

	printf("Value before swap, a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);

	return 0;
}