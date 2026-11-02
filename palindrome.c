#include <stdio.h>

int main(int argc, char *argv[])
{
    int number;
    int realNumber;
    int reverse = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    realNumber = number;

    while (number != 0)
    {
        int last = number % 10;
        number /= 10;
        reverse = reverse * 10 + last;
    }

    if (realNumber == reverse)
        printf("Number is Palindrome\n");
    else
        printf("Number is not Palindrome\n");
}