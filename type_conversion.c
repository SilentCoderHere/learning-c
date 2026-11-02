#include <stdio.h>

int main() {
		int a, b;
		float c;
		
		printf("Enter n: ");
		scanf("%d%d", &a, &b);
		
		c = (float) a / b;
		
		printf("Ans = %f", c);
		return 0;
}