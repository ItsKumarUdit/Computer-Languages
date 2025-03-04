#include<stdio.h>
int main(){
	int size, i, Sval, found = 0;
	
	printf("Enter the size of the Array: ");
	scanf("%d",&size);
	
	int marks[size];
	
	printf("Enter %d elements of the Array: ");
	
	for(i=0; i<size; i++){
		scanf("%d",&marks[i]);
	}
	printf("Enter Search value: ");
	scanf("%d",&Sval);
	
	for(i=0; i<size; i++){
		if(Sval==marks[i]){
			found=1;
			break;
		}
	}
	if(found){
		printf("Element found at %d index",i);
	}
	else {
		printf("Element not found");
	}
	
	return 0;
	
}
