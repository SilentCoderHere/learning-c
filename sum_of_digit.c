#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, s;
	s = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n != 0)
	{
		s += n % 10;
		n /= 10;
	}

	printf("Sum of its digit is %d", s);
}