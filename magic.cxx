#include <stdio.h>

int main()
{
	int n, s;

	printf("Enter n: ");
	scanf("%d", &n);

	while (n > 9)
	{
		s = 0;
		
		while (n > 0)
		{
			s += n % 10;
			n = n / 10;
		}

		n = s;
	}

	if (s == 1)
		printf("Magic");
	else
		printf("No");

	return 0;
}