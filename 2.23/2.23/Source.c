#include<stdio.h>
#include<stdlib.h>
int main(void) {

	int num1, num2, num3;
	printf("��J�T�Ӿ��");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 - num2 > 0 && num2 - num3 > 0) {
		printf("%d���̤j�� %d���̤p��", num1, num3);
	}

	if (num1 - num3 > 0 && num3 - num2 > 0) {
		printf("%d���̤j�� %d���̤p��", num1, num2);
	}

	if (num2 - num3 > 0 && num3 - num1 > 0) {
		printf("%d���̤j�� %d���̤p��", num2, num1);
	}

	if (num2 - num1 > 0 && num1 - num3 > 0) {
		printf("%d���̤j�� %d���̤p��", num2, num3);
	}

	if (num3 - num1 > 0 && num1 - num2 > 0) {
		printf("%d���̤j�� %d���̤p��", num3, num2);
	}

	if (num3 - num2 > 0 && num2 - num1 > 0) {
		printf("%d���̤j�� %d���̤p��", num3, num1);
	}



}