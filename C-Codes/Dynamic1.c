#include<stdio.h>
#include<stdlib.h>

void main(){
	int *p = (int *)malloc(4);
	printf("Enter any value : ");
	scanf("%d",p);
	printf("%d",*p);
}
