#include<stdio.h>

void PrintFibbon(int a, int b, int N){
	int n3 = a + b;
	if(N>1){
	printf("%d ",n3);
	PrintFibbon(b,n3,N-1);
   }
}

 
int main(){
	int n1=0, n2 = 1, n;
	printf("Enter n val: ");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	PrintFibbon(n1,n2,n-1);
} 
