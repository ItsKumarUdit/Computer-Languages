#include<stdio.h>
#include<stdlib.h>

void main(){
	int *p = (int *)malloc(4);
	printf("Enter any two value : ");
	scanf("%d%d",p,p+1);
	printf("%d %d",*p,*(p+1));
	free(p);
}
