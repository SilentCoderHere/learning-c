#include <stdio.h>

int power(int b, int p)
{
	if (p == 0)
		return 1;

	return b * power(b, p - 1);
}

int main(int argc, char *argv[])
{
	int b, p;

	printf("Enter b and p: ");
	scanf("%d%d", &b, &p);

	printf("%d", power(b, p));

	return 0;
}