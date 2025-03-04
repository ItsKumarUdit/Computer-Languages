#include<stdio.h>

int main(){
	int num, r,x;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(; num > 0; num /= 10){
		r = num % 10;
		if(r == 0){
			x++;
			}
		}
		if(x>=1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}

