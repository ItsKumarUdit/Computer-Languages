#include<stdio.h>

int Rev_num(int n, int rev){
	if(n==0){
		return rev;
	}
	else {
		return Rev_num(n/10, rev*10 + n%10);
	}
}

int main(){
	int num, rev=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	int R = Rev_num(num,rev);
	printf("\nReverse of the number is %d",R);
}
