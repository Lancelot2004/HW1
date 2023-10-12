#include <stdio.h>

int main() {
	double totalMileage, fuelPrice, fuelEfficiency, parkingFee, tollFee;

	// 使用者輸入
	printf("請輸入一整天的總里程數 (公里): ");
	scanf("%lf", &totalMileage);

	printf("請輸入汽油一公升/加侖的價格 (台幣): ");
	scanf("%lf", &fuelPrice);

	printf("請輸入平均一公升/加侖能行駛的公里數: ");
	scanf("%lf", &fuelEfficiency);

	printf("請輸入一天的停車費用 (台幣): ");
	scanf("%lf", &parkingFee);

	printf("請輸入一天的通行費用 (過路費) (台幣): ");
	scanf("%lf", &tollFee);

	// 計算花費
	double fuelCost = (totalMileage / fuelEfficiency) * fuelPrice;
	double totalCost = fuelCost + parkingFee + tollFee;

	// 顯示結果
	printf("一天開車所需的花費估計如下:\n");
	printf("汽油費用: %.2lf 台幣\n", fuelCost);
	printf("停車費: %.2lf 台幣\n", parkingFee);
	printf("通行費: %.2lf 台幣\n", tollFee);
	printf("總花費: %.2lf 台幣\n", totalCost);

	return 0;
}