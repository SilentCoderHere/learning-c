#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, t;

	printf("Enter any 2 numbers: ");
	scanf("%d%d", &a, &b);

	t = b;
	b = a;
	a = t;

	printf("A = %d\nB = %d", a, b);
}