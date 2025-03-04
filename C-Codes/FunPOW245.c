#include<stdio.h>
#include<math.h>

int power(int a, int b){
	int i,result=1;
	for(i=1; i<=b; i++){
	result = result*a;	
	}
	return result;
}

void main(){
	int x, y;
	printf("Enter first number ");
	scanf("%d",&x);
	printf("Enter second number ");
	scanf("%d",&y);
	int R = power(x,y);
	printf("Answer is %d",R);
}

