#include <stdio.h>
int main(){
	// Khai bao side,height,area
	float side, height, area;
	// Nhap do dai canh va chieu cao
	printf("Do dai canh:");
	scanf("%f", &side);
	printf("Do dai chieu cao:");
	scanf("%f", &height);
	// Xu li tinh toan
	area = 0.5 * side * height;
	// In ra
	printf("Dien tich tam giac: %.2f", area);
}
