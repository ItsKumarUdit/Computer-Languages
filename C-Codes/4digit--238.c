#include<stdio.h>
int main(){
	int num;
	printf("Enter your four digit number: ");
	scanf("%d",&num);
	
	for(; num != 0; num/=10){
		printf("%d",num);
		printf("\n");
	}
	return 0;
}
