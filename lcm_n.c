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

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main(int argc, char *argv[])
{
	int length, number, result;

	printf("Enter total numbers: ");
	scanf("%d", &length);

	printf("Enter number: ");
	scanf("%d", &result);

	for (int i = 1; i < length; i++)
	{
		scanf("%d", &number);
		result = lcm(result, number);
	}

	printf("LCM = %d", result);

	return 0;
}