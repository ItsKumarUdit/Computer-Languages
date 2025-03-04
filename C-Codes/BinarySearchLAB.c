#include<stdio.h>

int BinarySearch(int Ar[],int search, int left, int right){
	int middle = (left+right)/2;
	if(left>right)
	return -1;
	if(search==Ar[middle])
	return middle;
	else if(search>Ar[middle])
	return BinarySearch(Ar,search,(middle+1),right);
	else
	return BinarySearch(Ar,search,left,(middle-1));
}



int main(){
	int size, search, left=0, right, i;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	right = size - 1;
	printf("\nEnter search element: ");
	scanf("%d",&search);
	int R = BinarySearch(A,search,left,right);
	
	if(R>=0)
	printf("Element %d found at %d location",search,(R+1));
	else
	printf("Element %d not found",search);
	
	return 0;
	
}
