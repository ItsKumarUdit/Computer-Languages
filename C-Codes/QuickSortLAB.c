#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

void PrintData(int Ar[], int size){
	int i=0;
	for(i=0; i<size; i++){
		printf("%d ",Ar[i]);
	}
}

void QuickSort(int Ar[], int low, int high){
	 
	if(low < high){
		int pivot_idx = partition(Ar, low, high);
		
		QuickSort(Ar,low,pivot_idx-1);
		QuickSort(Ar,pivot_idx+1,high);
	}
}

int partition(int Ar[], int low, int high){
	int p = Ar[low];
	int i = low-1, j = high;
	
	while(low < high){
		while(Ar[i] < p){
			i++;
		}
		while(Ar[j] > p){
			j--;
		}
		if(i<j){
			int temp = Ar[j];
			Ar[j] = Ar[i];
			Ar[i] = temp;
		}
		if(i>j){
			int temp =Ar[j];
			Ar[j] = Ar[low];
			Ar[low] = temp;
		}
		return j;
	}
}

int main(){
	int size,i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	AcceptData(A,size);
	printf("\nElements befor sorting: ");
	PrintData(A,size);
	
	QuickSort(A,0,size-1);
	
	printf("\nElements after sorting: ");
	PrintData(A,size);
	
}

