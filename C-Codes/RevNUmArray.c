#include<stdio.h>
int main(){
	 int size, temp, left=0, right, i;
	 printf("Enter size of the Array:\n ");
	 scanf("%d",&size);
	 int Array[size];
	 printf("Enter %d elements of the array:\n ",size);
	 for(i=0; i<size; i++){
		scanf("%d",&Array[i]);
	}
	right=size-1;
	while(left<right){
		temp = Array[left];
		Array[left]=Array[right];
		Array[right]=temp;
		left++;
		right--;
	}
	for(i=0; i<size; i++){
		printf("%d ",Array[i]);
	}
	return 0;
}
