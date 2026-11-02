#include <stdio.h>

int fab(int n)
{
	if (n == 1)
		return 0;

	else if (n == 2)
		return 1;

	return fab(n - 1) + fab(n - 2);
}

int main(int argc, char *argv[])
{
	int n, s;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		s = fab(i);
		printf("%d, ", s);
	}

	return 0;
}