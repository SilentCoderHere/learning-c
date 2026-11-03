#include <stdio.h>

int sum(int array[], int n)
{
	if (n == 0)
		return 0;
	return array[n - 1] + sum(array, n - 1);
}

int main(int argc, char *argv[])
{
	int n, num;

	printf("Enter length of the array: ");
	scanf("%d", &n);

	int nums[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		nums[i] = num;
	}

	printf("Sum = %d", sum(nums, n));
	return 0;
}