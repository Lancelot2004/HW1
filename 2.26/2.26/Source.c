#include<stdio.h>
int main(void) {

	int num1, num2;
	printf("��J��ӼƦr");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		if (num1%num2 == 0) {

			printf("%d�O%d������", num1, num2);
		}
		if (num1%num2 != 0) {

			printf("%d���O%d������", num1, num2);
		}
	}

	if (num1 < num2) {

		if (num2%num1 == 0) {

			printf("%d�O%d������", num2, num1);
		}


		if (num2%num1 != 0) {

			printf("%d���O%d������", num2, num1);
		}
	}

}