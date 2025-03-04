#include<stdio.h>
void Fibbon_Series(int , int , int);
void main(){
	int N1=0, N2=1,N;
	printf("Enter N val: ");
	scanf("%d",&N);
	printf("\nFibbonacci Series are: \n");
	printf("%d %d ",N1,N2);
	Fibbon_Series(N1,N2,N-2);
}
void Fibbon_Series(int N1,int N2, int N){
	int N3=N1+N2;
	if(N>0){
		printf("%d ",N3);
		Fibbon_Series(N2, N3, N-1);
	}
}
