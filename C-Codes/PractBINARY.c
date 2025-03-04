#include<stdio.h>
int main(){
	int i, size, first = 0, last, search, mid;
	printf("Enter size of the element: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	printf("Enter search element: ");
	scanf("%d",&search);
	
	last = size - 1;
	while(first <= last){
		mid = (first+last)/2;
		if(search==A[mid]){
			printf("Element found");
			break;
		}
		else if(search>A[mid]){
			first = mid + 1;
		}
		else {
			last = mid - 1;
		}
	}
	if(first>last){
		printf("Element not found");
	}
	return 0;
}
