#include <stdio.h>

float average(float grades[], int index)
{
	float sum = 0;
	for (int i = 0; i < index; i++)
	{
		sum += grades[i];
	}
	return sum / index;
}

float max(float grades[], int index)
{
	float m = grades[0];
	for (int i = 1; i < index; i++)
	{
		if (grades[i] > m)
			m = grades[i];
	}
	return m;
}

float min(float grades[], int index)
{
	float m = grades[0];
	for (int i = 1; i < index; i++)
	{
		if (grades[i] < m)
			m = grades[i];
	}
	return m;
}

int main()
{
	int run = 1, index = 0;
	int choice;
	float grade, grades[100];

	printf("Menu\n");

	while (run == 1)
	{
		printf("1. Add grade\n");
		printf("2. List all grade\n");
		printf("3. Show summary\n");
		printf("4. Exit\n");

		printf("Enter choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			if (index >= 100)
			{
				printf("Grade list full!!\n");
				break;
			}

			printf("Enter the grade (1-100): ");
			scanf("%f", &grade);

			while (grade < 1 || 100 < grade)
			{
				printf("Grade out of range!! ");
				printf("Enter again (1 - 100): ");
				scanf("%f", &grade);
			}

			grades[index] = grade;
			index++;
			break;

		case 2:
			if (index == 0)
			{
				printf("No data entered!!!\n");
				break;
			}

			printf("Grades are = ");
			for (int i = 0; i < index; i++)
			{
				if (i > 0)
					printf(", ");
				printf("%.2f", grades[i]);
			}
			printf("\n");
			break;

		case 3:
			if (index == 0)
			{
				printf("No data entered!!!\n");
				break;
			}

			printf("Summary:\n");
			printf("Average: %.2f\n", average(grades, index));
			printf("Maximum: %.2f\n", max(grades, index));
			printf("Minimum: %.2f\n", min(grades, index));
			break;

		case 4:
			printf("Bye");
			run = 0;
			break;

		default:
			printf("Invalid choice!!!\n");
		}
	}
	return 0;
}