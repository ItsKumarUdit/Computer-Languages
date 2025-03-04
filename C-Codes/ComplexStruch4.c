#include<stdio.h>
   typedef struct complex {
   int real, imaginary;
}complex;
void AcceptData( complex *C){
	scanf("%d%d",&C->real,&C->imaginary);
}
void PrintData( complex *C){
	printf("\t%d\t+\t%di",C->real,C->imaginary);
}
void AddComplex( complex *N1,  complex *N2, complex *N3){
	N3->real = N1->real + N2->real;
	N3->imaginary = N1->imaginary + N2->imaginary;
}
void main(){
	 complex C1, C2 ,C3;
	 complex *PC1=&C1,*PC2=&C2,*PC3=&C3;
	printf("Enter first complex number: "); 
	AcceptData(PC1);
	printf("Enter second complex number: "); 
	AcceptData(PC2);
	AddComplex(PC1, PC2, PC3);
	printf("\tReal\tImaginary\n----------------------------\n");
	printf("C1 = ");
	PrintData(PC1);
	printf("\nC2 = ");
	PrintData(PC2);
	printf("\n-----------------------------");
	printf("\nC3 = ");
	PrintData(PC3);
}
