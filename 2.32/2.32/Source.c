#include<stdio.h>
int main(void) {

	float height, weight;
	printf("��J����(m)�H���魫(kg)");
	scanf("%f %f", &height, &weight);
	printf("BMI %f", weight / (height*height));

}