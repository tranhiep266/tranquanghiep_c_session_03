#include <stdio.h>
int main(){
	// Khai bao PI,radius,area,girth
	const float PI = 3.14; 	
	float radius, girth, area; 
	// Nhap du lieu radius
	printf("Ban kinh hinh tron la:");
	scanf("%f", &radius);
	// Xu li toan hoc
	girth = 2 * PI * radius; 
	area = PI * radius * radius; 
	// In ra
	printf("Chu vi hinh tron: %.2f\n", girth);
	printf("Dien tich hinh tron: %.2f\n", area);
	return 0;
}
