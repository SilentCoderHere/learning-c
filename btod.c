#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int b, n = 0, p = 0;

	printf("Enter binary: ");
	scanf("%d", &b);

	while (b != 0)
	{
		n += (b % 10) * pow(2, p);
		b /= 10;
		p++;
	}

	printf("Decimal %d", n);
}