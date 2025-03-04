#include<stdio.h>
#include<stdlib.h>
int main(){
	int N, i;
	printf("Enter N val: ");
	scanf("%d",&N);
	int *P = (int *)malloc(N*sizeof(int));
	printf("Enter %d values: \n",N);
	for(i=0; i<N; i++){
		scanf("%d",(P+i));
	}
	for(i=0; i<N; i++){
		printf("%d ",*(P+i));
	}
}
