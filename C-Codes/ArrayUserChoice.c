#include<stdio.h>
void main(){
	int i,size,sum=0;
	float Avg=0;
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
	for(i=0; i<size; i++){
		sum += marks[i];
	}
	Avg = sum/size;
	printf("\nSum is %d",sum);
	printf("\nAverage is %.2f",Avg);
	
}
