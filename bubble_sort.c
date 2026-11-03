#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, j, t;

	printf("Enter the length of array: ");
	scanf("%d", &n);

	int a[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter %dth element: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	printf("Sorted array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	return 0;
}