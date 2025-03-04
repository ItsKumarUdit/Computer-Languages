#include<stdio.h>
struct fraction {
	float numerator, denominator;
};
void AcceptData(struct fraction *C){
	scanf("%f\%f",&C->numerator,&C->denominator);
}
void PrintData(struct fraction *N){
	printf("%.0f/%.0f",N->numerator,N->denominator);
}
void CheckEquality(struct fraction *D,struct fraction *D1){
	if((D->numerator==D1->numerator) && (D->denominator==D1->denominator)){
		printf("\nBoth fraction are equal");
	}
	else{
		printf("\nBoth fraction aren't equal");
	}
}
void main(){
	struct fraction f1,f2;
	struct fraction *PC1=&f1,*PC2=&f2;
	printf("Enter numerator & denominator of 1st fraction: \n");
	AcceptData(PC1);
	printf("Enter numerator & denominator of 2nd fraction: \n");
	AcceptData(PC2);
	printf("\nGiven first fractions are: \n");
	PrintData(PC1);
	printf("\nGiven Second fractions are: \n");
	PrintData(PC2);
	CheckEquality(PC1,PC2);
}
