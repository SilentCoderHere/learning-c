#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, d = 2, i = 0, pf[100];

	printf("Enter any number: ");
	scanf("%d", &n);

	while (n != 1)
	{
		if (n % d == 0)
		{
			pf[i] = d;
			n /= d;
			d = 1;
			i++;
		}
		d++;
	}

	for (int j = 0; j < i; j++)
	{
		printf("%d ", pf[j]);
	}
}