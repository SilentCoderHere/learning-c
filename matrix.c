#include <stdio.h>

int d_2(int a11, int a12, int a21, int a22)
{
	return (a11 * a22) - (a12 * a21);
}

int main(int argc, char *argv[])
{
	int m[3][3];
	int n, d;

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%d", &n);

			m[i][j] = n;
		}
	}

	d =
		+ (m[0][0] * d_2(m[1][1], m[1][2], m[2][1], m[2][2])) 
		- (m[0][1] * d_2(m[1][0], m[1][2], m[2][0], m[2][2])) 
		+ (m[0][2] * d_2(m[1][0], m[1][1], m[2][0], m[2][1]));

	printf("Determinat = %d", d);
	
	return 0;
}