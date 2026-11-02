#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, s, e, t, i;
	s = 0;
	e = 1;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("%d ", s);
		t = s + e;
		s = e;
		e = t;
	}
	
	return 0;
}