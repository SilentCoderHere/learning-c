#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;

	printf("Enter CGPA: ");
	scanf("%d", &n);

	switch (n)
	{
	case 10:
	case 9:
	case 8:
		printf("A");
		break;

	case 7:
		printf("B");
		break;

	case 6:
		printf("C");
		break;

	case 5:
		printf("D");
		break;

	case 4:
		printf("E");
		break;

	default:
		printf("F");
		break;
	}
}