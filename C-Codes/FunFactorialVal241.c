#include<stdio.h>

int funfactval(int x){
	int i, factval=1;
	for(i=1; i<=x; i++){
		factval = factval*i;
	}
	return factval;
}

void main(){
	int num;
	printf("Enter any number ");
	scanf("%d",&num);
	int f = funfactval(num);
	printf("Factorial value is %d",f);
}
