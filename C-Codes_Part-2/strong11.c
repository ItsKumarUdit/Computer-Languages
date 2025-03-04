#include<stdio.h>
int main(){
	int num, num1, r, i, product, sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(num1=num; num1 != 0; num1/=10){
		r = num1%10;
		product=1;
		for(i=1; i<=r; i++){
			product = product*i;
			
		}
		sum+=product;
	}
	if(num==sum){
		printf("Strong number");
	}
	else{
		printf("Not a Strong number");
	}
}
