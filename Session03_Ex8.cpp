#include <stdio.h>
int main(){
	// Khai bao number,s1,s2,s3,s4,newnum
    int number, s1, s2, s3, s4, newnum;
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
    // In ra
    printf("So dao nguoc la: %d%d%d%d", s4, s3, s2, s1);
}
