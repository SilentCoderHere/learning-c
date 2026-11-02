#include <stdio.h>

int main(int argc, char *argv[])
{
	float c, f;

	printf("Enter temperature (c): ");
	scanf("%f", &c);

	f = (c * 9 / 5) + 32;

	printf("Temperature (f) = %f", f);

	return 0;
}