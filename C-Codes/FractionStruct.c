#include<stdio.h>
struct Fraction{
	float numerator, denominator, Add, Subtract, Multiplication;
};
void AcceptData(struct Fraction *N){
	scanf("%f%f",&N->numerator,&N->denominator);
}
void Add_Num_Den(struct Fraction *F1, struct Fraction *F2){
	F2->Add = F1->numerator + F1->denominator;
}
void Sub_Num_Den(struct Fraction *F1, struct Fraction *F3){
	F3->Subtract = F1->numerator - F1->denominator;
}
void Mul_Num_Den(struct Fraction *F1, struct Fraction *F4){
	F4->Multiplication = F1->numerator * F1->denominator;
}
void PrintData(struct Fraction *N,struct Fraction *N1,struct Fraction *N2){
	printf("%.2f\t\t%.2f\t\t%.2f",N->Add,N1->Subtract,N2->Multiplication);
}
void main(){
	struct Fraction F1, F2, F3, F4;
	struct Fraction *PC1=&F1, *PC2=&F2, *PC3=&F3, *PC4=&F4;
	printf("Enter Numerator & Denominator of a Fraction: \n");
	AcceptData(PC1);
	Add_Num_Den(PC1,PC2);
	Sub_Num_Den(PC1,PC3);
	Mul_Num_Den(PC1,PC4);
	printf("Addition\tSubtraction\tMultiplication\n---------------------------------------\n");
	PrintData(PC2,PC3,PC4);
}
