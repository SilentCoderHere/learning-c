#include <stdio.h>

int[100] factors(int n)
{
	int factors[100];
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			factors[count] = i;
			count++;
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int n1, n2;

	printf("Enter 2 numbers: ");
	scanf("%d%d", &n1, &n2);

	int[100] fact = factors(n1);
	for (int i = 0; i < 100; i++)
	{
		printf("%d", fact[i]);
	}
}