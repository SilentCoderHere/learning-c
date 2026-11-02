#include <stdio.h>

int sum(int n)
{
	if (n == 0)
		return 0;
	return n % 10 + sum(n / 10);
}

int main(int argc, char *argv[])
{
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d", sum(n));

	return 0;
}