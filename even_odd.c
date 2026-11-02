#include <stdio.h>

int main(int argc, char *argv[])
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}