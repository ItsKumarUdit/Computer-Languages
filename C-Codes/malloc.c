#include<stdio.h>

void main(){
	int N, i;
	printf("Enter N val: ");
	scanf("%d",&N);
	
	int *p = (int *)malloc(N*sizeof(int));
	
	for(i=0; i<N; i++){
		scanf("%d",(p+i));
	}
	for(i=0; i<N; i++){
		printf("%d ",*(p+i));
	}
}
