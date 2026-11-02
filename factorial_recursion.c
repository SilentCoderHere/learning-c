#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n, fact;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    fact = factorial(n);
    
    printf("Factorial = %d", fact);
    
    return 0;
}