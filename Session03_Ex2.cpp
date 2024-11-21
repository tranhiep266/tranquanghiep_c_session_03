#include <stdio.h>
int main(){
	// Khai bao Celsius, Fahrenheit
	float Celsius, Fahrenheit;
	// Nhap nhiet do Celsius
	printf("Nhap nhiet do Celsius:");
	scanf("%f", &Celsius);
	// Chuyen sang Fahrenheit
	Fahrenheit = (Celsius * 9 / 5) + 32;
	// In Fahrenheit
	printf("Nhiet do theo do Fahrenheit: %.2f", Fahrenheit);
	return 0;
	
}
