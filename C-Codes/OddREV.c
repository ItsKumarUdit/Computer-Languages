#include<stdio.h>
int main(){
	int num, count;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(count=num; count>0; count--){
		if(count%2 != 0)
		printf("%d ",count);`	
	}
}
