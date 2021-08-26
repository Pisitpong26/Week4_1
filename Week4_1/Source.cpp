#include<stdio.h>
int main() {
	int a, b, c = 0;
	printf("Enter the number : ");
	scanf_s("%d", &a);
	while (a != -99) {
		for (b = 2; b <= a; b++) {
			if (a % b == 0) {
				c = c + b;
			}
		}
		if (a == c) {
			printf("%d is prime number\n", a);
		}
		else {
			printf("%d is not prime number\n", a);
		}
		c = 0;
		printf("Enter the number : ");
		scanf_s("%d", &a);
	}
	return 0;
}