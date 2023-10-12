#include<stdio.h>
int main(void) {

	int num1, num2;
	printf("块ㄢ计");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		if (num1%num2 == 0) {

			printf("%d琌%d计", num1, num2);
		}
		if (num1%num2 != 0) {

			printf("%dぃ琌%d计", num1, num2);
		}
	}

	if (num1 < num2) {

		if (num2%num1 == 0) {

			printf("%d琌%d计", num2, num1);
		}


		if (num2%num1 != 0) {

			printf("%dぃ琌%d计", num2, num1);
		}
	}

}