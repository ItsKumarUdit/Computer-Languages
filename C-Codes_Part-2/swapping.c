#include<stdio.h>

void swap(int a, int b){
	int temp = b;
	b = a;
	a = temp;
	printf("\n%d %d ",a,b);
}

int main(){
	int a, b;
	printf("Enter any two number : ");
	scanf("%d %d",&a,&b);
	swap(a,b);
}
