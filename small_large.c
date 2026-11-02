#include <stdio.h>

int main()
{
	int n, s = 0, l = 0;

	printf("Enter array size: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter %d numbers:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		int num = arr[i];

		if (num < s)
		{
			s = num;
		}
		if (num > l)
		{
			l = num;
		}
	}

	printf("Smallest = %d\nLargest = %d", s, l);

	return 0;
}
