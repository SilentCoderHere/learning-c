#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, prime = 1;

	printf("Enter any number: ");
	scanf("%d", &n);

	if (n == 2)
	{
		prime = 1;
	}

	for (int i = 3; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}

	if (prime == 1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}