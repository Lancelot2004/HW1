#include<stdio.h>
int main(void) {

	int i;

	for (i = 1; i <= 10; i++) {
		
		if (i == 1 || i == 10) {

			printf("**********\n");
		}

		if (i != 1 && i != 10) {

			printf("*        *\n");

		}
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {

		if (i == 1 || i == 9) {

			printf("   ***   \n");
		}

		if (i == 2 || i == 8) {

			printf(" *     * \n");

		}

		if (i != 1 && i != 9 && i != 2 && i != 8) {

			printf("*       *\n");

		}

	}
	printf("\n");
	for (i = 1; i <= 9;i++) {

		if (i == 1) {

			printf("    *  \n");
		}

		if (i == 2) {

			printf("   *** \n");
		}

		if (i == 3) {

			printf("  *****\n");
		}

		if (i >=4) {

			printf("    *  \n");
		}

	}
	printf("\n");
	for (i = 1; i <= 9; i++) {

		if (i == 1 || i == 9) {

			printf("    *    \n");
		}

		if (i == 2 || i == 8) {

			printf("   * *   \n");
		}

		if (i == 3 || i == 7) {

			printf("  *   *  \n");
		}

		if (i == 4 || i == 6) {

			printf(" *     * \n");
		}

		if (i == 5) {

			printf("*       *\n");
		}
	}







}