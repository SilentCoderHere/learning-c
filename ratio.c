#include <stdio.h>

int gcd(int a, int b)
{
	int t;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}

	return a;
}

int main(int argc, char *argv[])
{
	int a, b, c;

	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);

	c = gcd(a, b);
	printf("%d:%d", a / c, b / c);

	return 0;
}