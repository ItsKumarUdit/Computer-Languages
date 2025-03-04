#include<stdio.h>

void AcceptData(int x[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&x[i]);
	}
}
void PrintData(int x[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",x[i]);
	}
}


int main(){
	int s1, s2, i;
	printf("Enter 2 sizes of the Array: ");
	scanf("%d%d",&s1,&s2);
	int A[s1], B[s2], C[s1+s2];
	printf("\nEnter %d elements of the 1st Array: ",s1);
	AcceptData(A,s1);
	printf("\nEnter %d elements of the 2nd Array: ",s2);
	AcceptData(B,s2);
	
	for(i=0; i<s1; i++){
		C[i]=A[i];
    }
	for(i=0; i<s2; i++){
		C[i+s1]=B[i];
	
    }
	printf("\nMerged Array is : ");
	PrintData(C,s1+s2);
}
