#include <stdio.h>

int main(int argc, char *argv[])
{
	float n1, n2;
	char s;

	printf("Enter 2 numbers: ");
	scanf("%f%f", &n1, &n2);

	printf("Enter symbol: ");
	scanf(" %c", &s);

	switch (s)
	{
	case '+':
		printf("Add = %f", n1 + n2);
		break;

	case '-':
		printf("Substract = %f", n1 - n2);
		break;

	case '*':
		printf("Multiply = %f", n1 * n2);
		break;

	case '/':
		if (n2 == 0)
		{
			printf("Zero division error");
			break;
		}
		printf("Divide = %f", n1 / n2);
		break;

	default:
		printf("Not supported");
	}
}