#include<stdio.h>

void Add(int a, int b){
	int c = a + b;
	printf("Sum is %d ",c);
}

int main(){
	int x, y;
	printf("Enter any two numbers ");
	scanf("%d%d",&x,&y);
	printf("Welcome\n");
	Add(x,y);
	printf("\nHello");
}
