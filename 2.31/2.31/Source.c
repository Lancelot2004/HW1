#include<stdio.h>
int main(void) {

	int i;

	printf("number   square   cube\n");
	for (i = 1; i <= 10; i++) {

		printf("%-2d       %-3d      %d\n", i, i*i, i*i*i);
	}





}