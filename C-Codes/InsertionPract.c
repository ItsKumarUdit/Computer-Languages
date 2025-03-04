#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

void Insertion(int Ar[], int size){
	int i, temp, j;
	for(i=1; i<size; i++){
		temp=Ar[i];
		for(j=i; j>0 && temp<=Ar[j-1]; j--)
       {
        	Ar[j] = Ar[j-1];
	   }	
	    Ar[j]=temp;
    }
}

void PrintData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",Ar[i]);
	}
}

void main(){
	int size;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("Enter %d elements in the Array: ",size);
	AcceptData(A,size);
	
	Insertion(A,size);
	
	printf("Sorted elements are: ");
	PrintData(A,size);
}
