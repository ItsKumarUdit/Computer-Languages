#include<stdio.h>

int Add(int x, int y){
	int c = x + y;
	return c;
}

int main(){
	int x, y;
	printf("Enter any two numbers ");
	scanf("%d%d",&x,&y);
	printf("Welcome\n");
	int s = Add(x,y);
	printf("Sum is %d",s);
	printf("\nHello");
}
