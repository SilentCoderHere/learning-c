#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, j, t, min;

	printf("Enter the length of array: ");
	scanf("%d", &n);

	int a[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter %dth element: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			t = a[i];
			a[i] = a[min];
			a[min] = t;
		}
	}

	printf("Sorted array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	return 0;
}