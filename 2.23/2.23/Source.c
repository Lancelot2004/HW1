#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int num1, num2, num3;
	printf("块俱计");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 - num2 > 0 && num2 - num3 > 0) {
		printf("%d程计 %d程计", num1, num3);
	}

	if (num1 - num3 > 0 && num3 - num2 > 0) {
		printf("%d程计 %d程计", num1, num2);
	}

	if (num2 - num3 > 0 && num3 - num1 > 0) {
		printf("%d程计 %d程计", num2, num1);
	}

	if (num2 - num1 > 0 && num1 - num3 > 0) {
		printf("%d程计 %d程计", num2, num3);
	}

	if (num3 - num1 > 0 && num1 - num2 > 0) {
		printf("%d程计 %d程计", num3, num2);
	}

	if (num3 - num2 > 0 && num2 - num1 > 0) {
		printf("%d程计 %d程计", num3, num1);
	}



}