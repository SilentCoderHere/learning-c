#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, f, s;
	f = 1;
	s = 0;

	printf("Enter any number: ");
	scanf("%d", &n);

	while (n / 2 >= f)
	{
		if (n % f == 0)
		{
			s += f;
		}
		f++;
	}

	if (s == n)
		printf("It is");

	else
		printf("It is not");
}