#include <stdio.h>

int main()
{
	char string[100], reverse[100];
	int len;

	printf("Enter string: ");
	scanf("%s", string);

	while (string[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	printf("String is %s of length %d", string, len);

	return 0;
}