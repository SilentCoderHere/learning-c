#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char fn1[31], fn2[31];
	int c;

	printf("Enter name of file you want to copy: ");
	scanf("%s", fn1);

	printf("Enter new file name: ");
	scanf("%s", fn2);

	fp1 = fopen(fn1, "r");
	fp2 = fopen(fn2, "w");

	if (fp1 == NULL)
		printf("File doesn't exists.\n");

	else if (fp2 == NULL)
		printf("Uanble to create new file.\n");

	else
	{
		c = fgetc(fp1);
		while (c != EOF)
		{
			fputc(c, fp2);
			c = fgetc(fp1);
		}

		fclose(fp1);
		fclose(fp2);

		printf("File created sucessfully.\n");
	}

	return 0;
}