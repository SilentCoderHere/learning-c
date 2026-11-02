#include <stdio.h>

int main(int argc, char *argv[])
{
	int n1, n2;
	int g, gcd, lcm;

	printf("Enter 2 numbers: ");
	scanf("%d%d", &n1, &n2);

	if (n1 > n2)
		g = n1;

	else
		g = n2;

	for (int i = g; i > 0; i--)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
			break;
		}
	}

	lcm = (n1 * n2) / gcd;

	printf("GCD %d\nLCM %d\n", gcd, lcm);
}