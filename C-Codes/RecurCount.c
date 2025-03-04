#include<stdio.h>

int Number(int n, int count){
	
	if(n==0){
		return count;
	}
	else {
		 
		return Number(n/10,count+=1);
		
	}
}

int main(){
	int num, count = 0;
	printf("Enter the number: ");
	scanf("%d",&num);
	int R = Number(num,count);
	printf("\nCount of digit is %d",R);
}
