#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char fname[31], uname[31];
	
	printf("Enter name of the file");
	scanf("%s", fname);
	
	printf("Enter your name: ");
	scanf("%s", uname);
	
	fp = fopen(fname, "w");
	if (fp == NULL)
	{
		printf("Could not open file");
		return 1;
	}

	fprintf(fp, "%s\n", uname);
	fclose(fp);

	return 0;
}