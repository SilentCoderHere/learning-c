#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	int g = 0, p = 1, gcd, lcm;

	printf("Enter length of array: ");
	scanf("%d", &n);

	int arr[n];
	int num;

	printf("Enter numbers:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num > g)
		{
			g = num;
		}
		arr[i] = num;
		p *= num;
	}

	int cf;

	for (int j = g; j > 0; j--)
	{
		cf = 1;
		for (int k = 0; k < n; k++)
		{
			if (arr[k] % j != 0)
			{
				cf = 0;
				break;
			}
		}
		if (cf == 1)
		{
			gcd = j;
			break;
		}
	}

	printf("GCD = %d", gcd);
}