#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

void Shell_Sort(int Ar[], int size){
	int gap,i,j,temp;
	for(gap=size/2; gap>=1; gap=gap/2){
		for(j=gap; j<size; j++){
			for(i=j-gap; i>=0; i=i-gap){
				if(Ar[i+gap] > Ar[i]){
					break;
				}
				else{
					temp = Ar[i+gap];
					Ar[i+gap] = Ar[i];
					Ar[i] = temp;
				}
			}
		}
	}
}

void PrintData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",Ar[i]);
	}
}

int main(){
	int size;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	AcceptData(A,size);
	printf("\nElements before sorting: ");
	PrintData(A,size);
	
	Shell_Sort(A,size);
	
	printf("\nElement after sorting: ");
	PrintData(A,size);
}
