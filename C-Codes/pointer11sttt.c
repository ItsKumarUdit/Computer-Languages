#include<stdio.h>

void display(int *a){
	printf("%d ",*a);
}

void main(){
	int a[5]={1,2,3,4,5};
	int *p = a;
	display(p);
}
