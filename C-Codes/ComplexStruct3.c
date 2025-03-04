#include<stdio.h>
typedef struct complex {
	int real, imaginary;
}complex;
void AcceptData(struct complex *C){
	scanf("%d%d",&C->real,&C->imaginary);
}
void PrintData(struct complex *C){
	printf("\t%d\t+\t%di",C->real,C->imaginary);
}
complex AddComplex( complex N1, complex N2){
	complex N3;
	N3.real = N1.real + N2.real;
	N3.imaginary = N1.imaginary + N2.imaginary;
	return N3;
	
}
void main(){
	struct complex C1, C2 ,C3;
	struct complex *PC1=&C1,*PC2=&C2,*PC3=&C3;
	printf("Enter first complex number: "); 
	AcceptData(PC1);
	printf("Enter second complex number: "); 
	AcceptData(PC2);
	C3 = AddComplex(C1, C2);
	printf("\tReal\tImaginary\n----------------------------\n");
	printf("C1 = ");
	PrintData(PC1);
	printf("\nC2 = ");
	PrintData(PC2);
	printf("\n-----------------------------");
	printf("\nC3 = ");
	PrintData(PC3);
}
