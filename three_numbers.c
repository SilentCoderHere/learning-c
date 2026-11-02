#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	printf("A = %d\nB = %d\nC = %d\n", a, b, c);

	if (a > b)
	{
		if (a > c)
		{
			printf("A");
		}
		else
		{
			printf("C");
		}
	}
	else
	{
		if (b > c)
		{
			printf("B");
		}
		else
		{
			printf("C");
		}
	}

	return 0;
}