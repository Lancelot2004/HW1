#include<stdio.h>
int main(void) {

	int num1;
	printf("輸入一個數字");
	scanf("%d", &num1);

	if (num1 % 2 == 0) {

		printf("%d是偶數",num1);
	}

	if (num1 % 2 != 0) {

		printf("%d是奇數",num1);
	}



}