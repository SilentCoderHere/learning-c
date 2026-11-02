#include <stdio.h>
#include <math.h>

int length(int number)
{
    int len = 0;

    while (number != 0)
    {
        number = number / 10;
        len += 1;
    }

    return len;
}

int main(int argc, char *argv[])
{
    int number;
    int realNumber;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    realNumber = number;
    int len = length(number);

    while (number != 0)
    {
        int last = number % 10;
        sum += pow(last, len);
        number /= 10;
    }

    if (sum == realNumber)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is not Armstrong\n");
    }
}