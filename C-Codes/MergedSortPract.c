#include<stdio.h>
 
void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

void Conquer(int Ar[], int low, int mid, int high){
	int Merged[high-low+1];
	int index1=low;
	int index2=mid+1;
	int x = 0;
	
	while(index1 <= mid && index2 <= high){
		if(Ar[index1] <= Ar[index2]){
			Merged[x++] = Ar[index1++];
		}
		else{
			Merged[x++] = Ar[index2++];
		}
	}
	while(index1 <= mid){
		Merged[x++] = Ar[index1++];
	}
	while(index2 <= high){
		Merged[x++] = Ar[index2];
	}
	
	int i,j;
	for(i=0,j=low; i<(high-low+1); i++,j++){
		Ar[j] = Merged[i];
	}
}

void Divide(int Ar[], int low, int high){
	if(low>=high)
	return;
	int mid = (low+high)/2;
	Divide(Ar,low,mid);
	Divide(Ar,mid+1,high);
	
	Conquer(Ar,low,mid,high);
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
	
	printf("Enter %d elements in the Array: ",size);
	AcceptData(A,size);
	
	Divide(A,0,size-1);
	
	printf("Sorted elements are: ");
	PrintData(A,size);
	
}
