#include <stdio.h>
int main() {
	// Khai bao number,s1,s2,s3,s4,sum
    int number, s1, s2, s3, s4, sum;
    // nhap gia tri cua number
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
    if (number < 1000 || number > 9999) {
        printf("Vui long nhap mot so nguyen co dung 4 chu so\n");
        return 0; 
    }
    // Xu li tinh toan
	s1 = number / 1000;
    s2 = (number / 100) % 10;
    s3 = (number / 10) % 10;
    s4 = number % 10;
    sum = s1 + s2 + s3 + s4;
    // In ra
    printf("Tong cac chu so: %d\n", sum);
    return 0;
}

