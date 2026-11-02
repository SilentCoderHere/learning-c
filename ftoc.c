#include <stdio.h>

int main(int argc, char *argv[])
{
	float c, f;

	printf("Enter temperature (f): ");
	scanf("%f", &f);

	c = (f - 32) * 5 / 9;

	printf("Temperature (c) = %f", c);

	return 0;
}