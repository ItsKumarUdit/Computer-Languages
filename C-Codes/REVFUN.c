#include<stdio.h>
void rev(int A[], int size){
	int left = 0;
	int right = size-1;
	
	
	while (left < right){
		int temp = A[left];
		A[left] = A[right];
		A[right] = temp;
		left++;
		right--;
	}
}

void printrev(int A[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ",A[i]);
	}
}

int main(){
	 int size,i;
	 printf("Enter size of the Array:\n ");
	 scanf("%d",&size);
	 int myArray[size];
	 printf("Enter %d elements of the array:\n ",size);
	 for(i=0; i<size; i++){
		scanf("%d",&myArray[i]);
   }
   rev(myArray, size);
   printrev(myArray, size); 
}

