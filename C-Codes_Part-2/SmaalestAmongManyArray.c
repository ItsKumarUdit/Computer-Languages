#include<stdio.h>
void main(){
	int i,size,smallest;
	printf("Enter size of the Array ");
	scanf("%d",&size);
	int marks[size];
	printf("Enter %d element into the Array ",size);
	for(i=0; i<size; i++){
		scanf("%d",&marks[i]);
	}
	printf("Elements are : ");
	for(i=0; i<size; i++){
		printf("%d ",marks[i]);
	}
	smallest=marks[0];
	for(i=0; i<size; i++){
		if(marks[i]<smallest)
		smallest=marks[i];
	}
	printf("\nSmallest elements is : %d",smallest);
	
}
