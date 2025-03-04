#include<stdio.h>

int main(){
	int i, N, fact = 0;
	printf("Enter Number: ");
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		if(N%i==0)
		fact++;
	}
	if(fact==2){
		printf("Prime");
		
	}
	else {
		printf("Not a prime");
	}
}
