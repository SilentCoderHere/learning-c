#include<stdio.h>

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 1) {
        printf("Noob kahi ka, kya likh raha hai; kadu\n");
        return 1;
    }
    
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * num);
    }
}