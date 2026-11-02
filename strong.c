#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, d, f, s, r;
	s = 0;
	d = 0;
	f = 1;

	printf("Enter any number: ");
	scanf("%d", &n);

	r = n;

	while (n != 0)
	{
		d = n % 10;
		n /= 10;

		for (int i = 2; i <= d; i++)
		{
			f *= i;
		}
		s += f;
		f = 1;
	}

	if (s == r)
		printf("It is");
	else
		printf("It is not");
}