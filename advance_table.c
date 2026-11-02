#include<stdio.h>

int main() {
    int start;
    int end;
    
    printf("Enter start: ");
    scanf("%d", &start);
    
    printf("Enter end: ");
    scanf("%d", &end);
    
    if (start < 1) {
        printf("No\n");
        return 1;
    }
    
    if (start >= end) {
        printf("Hello\n");
        return 1;
    }
    
    for (int i = 1; i <= 10; i++) {
        for (int j = start; j <= end; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}