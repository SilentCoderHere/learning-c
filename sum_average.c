#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, num, s = 0;
	float a = 0.0;

	printf("Enter length of array: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter numbers:\n");

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int j = 0; j < n; j++)
	{
		s += arr[j];
	}

	a = s / n;
	
	printf("Sum = %d\nAverage = %f", s, a);
}