#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, r, rev = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n != 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}

	printf("Number is %d", rev);
	return 0;
}