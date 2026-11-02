#include<stdio.h>

int main() {
    int a;
    int b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    int sum = a + b;
    int sub = a - b;
    
    printf("Sum: %d\n", sum);
    printf("Sub: %d\n", sub);
}
