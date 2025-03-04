#include<stdio.h>
int main(){
	int i, size, sval, found=0;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	printf("\nEnter %d element in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&A[i]);
	}
	
	printf("\nEnter Search element: ");
	scanf("%d",&sval);
	
	for(i=0; i<size; i++){
		if(A[i]==sval){
			found = 1;
			break;
		}
	}
	if(found){
		printf("Element found at %d index.",i);
	}
	else{
		printf("Element not found at any index");
	}
	return 0;
}
