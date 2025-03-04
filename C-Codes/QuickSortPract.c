#include<stdio.h>

  
void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}
void PrintData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",Ar[i]);
	}
}

void QuickSort(int Ar[], int low, int high){
	if(low < high){
		int Pivot_Index = partition(Ar, low, high);
		
		QuickSort(Ar,low,Pivot_Index-1);
		QuickSort(Ar,Pivot_Index+1,high);
	}
}

int partition(int Ar[], int low, int high){
	int P = Ar[low];
	int i = low-1;
	int j = high, temp;
	
	while(low<high){
		while(Ar[i] < P)
		i++;
		while(Ar[j] > P)
		j--;
		if(i<j){
			temp = Ar[j];
			Ar[j] = Ar[i];
			Ar[i] = temp;
		}
		if(i>j){
			temp = Ar[j];
			Ar[j] = Ar[low];
			Ar[low] = temp;
		}
		return j;
	}
}

 

void main(){
	int size;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	AcceptData(A,size);
	
	QuickSort(A,0,size-1);
	
	printf("Sorted elements are: ");
	PrintData(A,size);
}
