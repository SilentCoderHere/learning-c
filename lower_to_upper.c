#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[31];
	printf("Enter a word: ");
	scanf("%s", name);

	for (int i = 0; name[i] != '\0'; i++)
	{
		if (name[i] >= 97 && name[i] <= 122)
		{
			name[i] = name[i] - 32;
		}
	}
	printf("Word in uppercase is %s", name);

	return 0;
}