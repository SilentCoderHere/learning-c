#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, max;

	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	max = (a > b)
			  ? (a > c) ? a : c
			  : (b > c) ? b : c;

	printf("Max = %d", max);

	return 0;
}