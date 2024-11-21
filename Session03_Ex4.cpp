#include <stdio.h>
int main(){
	// buoc 1: khai bao score1, score2, score3, sum, average
	float score1, score2, score3;
	float average, sum;
	// buoc 2: nhap so cho score1, score2, score3
	printf("score1 :");
	scanf("%f", &score1);
	printf("score2 :");
	scanf("%f", &score2);
	printf("score3 :");
	scanf("%f", &score3);
	// buoc 3: xu li tinh toan
	sum = score1 + score2 + score3;
	average = (float)sum/3;
	// buoc 4: in ra 
	printf("%.2f %.2f %.2f\n", score1, score2, score3);
	printf("Tong diem la: %.2f\n", sum);
	printf("Diem trung binh : %.2f", average);
	return 0;
}
