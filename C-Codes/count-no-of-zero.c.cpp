#include<stdio.h>

int main(){
	int num, r,x=0;
	printf("Enter any number > 0 : ");
	scanf("%d",&num);
	
	for(; num > 0; num /= 10){
		r = num % 10;
		if(r == 0){
			x++;
			}
		}
		printf("%d",x);
		
		return 0;
}
	
