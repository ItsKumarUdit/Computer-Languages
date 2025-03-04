#include<stdio.h>
int main(){
	int num, count, N;
	printf("Enter a number: ");
	scanf("%d%d",&num,&N);
	
	for(count = 1; count<=N; count++){
		printf("%d\n",count*num);
	}
}
