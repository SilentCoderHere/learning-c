#include <stdio.h>

int main(int argc, char *argv[])
{
	int s, e, t, n;

	s = 0;
	e = 1;
	t = 0;

	printf("Enter any number: ");
	scanf("%d", &n);

	while (e <= n)
	{
		printf("%d\n", s);
		t = e + s;
		s = e;
		e = t;
	}
}