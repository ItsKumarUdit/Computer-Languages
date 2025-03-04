#include<stdio.h>
int main(){
	int size, i;
	
	printf("Enter the size of the Array: ");
	scanf("%d",&size);
	
	int marks[size];
	
	printf("Enter %d elements of the Array: ");
	
	for(i=0; i<size; i++){
		scanf("%d",&marks[i]);
	}
	
	for(i=0; i<size; i++){
	
	marks[i] = marks[i]+marks[size-i];
	marks[size-i] = marks[i]-marks[size-i];
	marks[i] = marks[i]-marks[size-i];	
    }
    for(i = 0; i<size; i++){
    	printf("%d %d ",marks[i], marks[size-i]);
	}
	
}
