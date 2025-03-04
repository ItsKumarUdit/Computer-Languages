#include<stdio.h>

int Sum_Digit(int n){
	if(n==0){
		return 0;
	}
	else {
		return (n%10) + Sum_Digit(n/10);
	}
}

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int R = Sum_Digit(num);
	printf("\nSum of digit is %d",R);
}
