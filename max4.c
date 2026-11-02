#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d;

	printf("Enter 4 numbers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
				printf("Max = %d", a);
			else
				printf("Max = %d", d);
		}

		else
		{
			if (c > d)
				printf("Max = %d", c);
			else
				printf("Max = %d", d);
		}
	}
	else
	{
		if (b > d)
			printf("Max = %d", b);
		else
			printf("Max = %d", d);
	}

	return 0;
}