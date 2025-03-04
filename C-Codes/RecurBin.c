#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

int BinarySearch(int Ar[],int search, int left, int right){
	int mid = (left+right)/2;
	if(left>right)
	  return -1;
	if(search==Ar[mid])
	  return mid;
	else if(search<Ar[mid])
	  return BinarySearch(Ar,search,left,(mid-1));
	else 
	  return BinarySearch(Ar,search,(mid+1),right);	
}

int main(){
	int size, sval, left=0, right, i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	AcceptData(A,size);
	printf("\nEnter Search value: ");
	scanf("%d",&sval);
	right=size-1;
	int R = BinarySearch(A,sval,left,right);
	if(R>=0){
		printf("\nElement found at %d location",(R+1));
	}
	else{
		printf("\nElement not found");
	}
	
}
