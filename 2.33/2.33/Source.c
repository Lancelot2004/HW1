#include <stdio.h>

int main() {
	double totalMileage, fuelPrice, fuelEfficiency, parkingFee, tollFee;

	// �ϥΪ̿�J
	printf("�п�J�@��Ѫ��`���{�� (����): ");
	scanf("%lf", &totalMileage);

	printf("�п�J�T�o�@����/�[�ڪ����� (�x��): ");
	scanf("%lf", &fuelPrice);

	printf("�п�J�����@����/�[�گ��p��������: ");
	scanf("%lf", &fuelEfficiency);

	printf("�п�J�@�Ѫ������O�� (�x��): ");
	scanf("%lf", &parkingFee);

	printf("�п�J�@�Ѫ��q��O�� (�L���O) (�x��): ");
	scanf("%lf", &tollFee);

	// �p���O
	double fuelCost = (totalMileage / fuelEfficiency) * fuelPrice;
	double totalCost = fuelCost + parkingFee + tollFee;

	// ��ܵ��G
	printf("�@�Ѷ}���һݪ���O���p�p�U:\n");
	printf("�T�o�O��: %.2lf �x��\n", fuelCost);
	printf("�����O: %.2lf �x��\n", parkingFee);
	printf("�q��O: %.2lf �x��\n", tollFee);
	printf("�`��O: %.2lf �x��\n", totalCost);

	return 0;
}