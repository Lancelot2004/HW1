#include<stdio.h>
int main(void) {

	float height, weight;
	printf("輸入身高(m)以及體重(kg)");
	scanf("%f %f", &height, &weight);
	printf("BMI %f", weight / (height*height));

}