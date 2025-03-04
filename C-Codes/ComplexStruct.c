#include<stdio.h>

struct complex {
	int real, imaginary;
};
void AcceptData(struct complex *C){
	scanf("%d%d",&C->real,&C->imaginary);
}
void PrintData(struct complex *C){
	printf("\t%d\t+\t%di",C->real,C->imaginary);
}

void main(){
	struct complex C1, C2 ,C3;
	struct complex *PC1=&C1,*PC2=&C2,*PC3=&C3;
	printf("Enter first complex number: "); 
	AcceptData(PC1);
	printf("Enter second complex number: "); 
	AcceptData(PC2);
	PC3->real = PC1->real + PC2->real;
	PC3->imaginary = PC1->imaginary + PC2->imaginary;
	printf("\tReal\tImaginary\n----------------------------\n");
	printf("C1 = ");
	PrintData(PC1);
	printf("\nC2 = ");
	PrintData(PC2);
	printf("\n-----------------------------");
	printf("\nC3 = ");
	PrintData(PC3);
}
