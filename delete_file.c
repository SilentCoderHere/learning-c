#include <stdio.h>

int main(int argc, char *argv[])
{
	char fname[31];

	printf("Enter the filename: ");
	scanf("%s", fname);

	if (remove(fname) == 0)
		printf("File deleted sucessfully.\n");

	else
		printf("File don't exists.\n");

	return 0;
}