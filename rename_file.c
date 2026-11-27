#include <stdio.h>

int main(int argc, char *argv[])
{
	char old_fname[31], new_fname[31];

	printf("Enter old file name: ");
	scanf("%s", old_fname);

	printf("Enter new file name: ");
	scanf("%s", new_fname);

	if (rename(old_fname, new_fname) == 0)
		printf("Renamed sucessfully.\n");
	else
		printf("File don't exsits.\n");

	return 0;
}