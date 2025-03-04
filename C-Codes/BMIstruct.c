#include<stdio.h>
struct BMI{
	float weight, height, bmi;
};
void AcceptData(struct BMI *N){
	scanf("%f %f",&N->weight, &N->height);
}
void PrintData(struct BMI *C){
	printf("%.2f %.2f",C->weight,C->height);
}
void FindBMI(struct BMI *D){
	D->bmi = D->weight/(D->height*D->height);
	printf("%.2f\n",D->bmi);
}
int main(){
	struct BMI Person1;
	struct BMI *P1 = &Person1;
	printf("Enter weight(Kg) & height(m) of a person: \n");
	AcceptData(P1);
	printf("Give weight & height is: \n");
	PrintData(P1);
	printf("\nBMI is = ");
	FindBMI(P1);
}
