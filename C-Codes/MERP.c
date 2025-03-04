#include<stdio.h>

void conquer(int Ar[], int left, int mid, int right){
	int merged[right-left+1];
	int index1=left;
	int index2=mid+1;
	int x = 0;
	
	while(index1 <= mid && index2 <= right){
		if(Ar[index1] <= Ar[index2]){
			merged[x++] = Ar[index2++]; 
		}
		else{
			merged[x++] = Ar[index1++];
		}
	}
	while(index1 <= mid){
		merged[x++] = Ar[index1++];
	}
	while(index2 <= right){
		merged[x++] = Ar[index2++];
	} 
	
	int i, j;
	for(i=0, j = left;  i<(right-left+1); i++,j++){
		Ar[j] = merged[i];
	}
	
}

void divide(int Ar[], int left, int right){
	if(left >= right)
	return;
	int mid = (left+right)/2;
	divide(Ar,left,mid);
	divide(Ar,mid+1,right);
	conquer(Ar, left, mid, right);
}

int main(){
	int size,i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	
	printf("Elements before sorting : ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
	int left = 0;
	int right = size-1;
	divide(A,left,right);
	
	printf("\nElements after sorting: ");
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
}
