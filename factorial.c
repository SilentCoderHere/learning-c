#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, f;

	f = 1;

	printf("Enter a number: ");

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		f *= i;
	}

	printf("Factorial = %ld", f);

	return 0;
}