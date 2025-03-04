#include<stdio.h>

void funtable(int x, int y){
	int i;
	for(i=1; i<=y; i++){
		printf("%d * %d = %d\n",x,i,i*x);
	}
}

void main(){
	int num, count;
	printf("Enter any number & count ");
	scanf("%d%d",&num,&count);
	funtable(num,count);
}
