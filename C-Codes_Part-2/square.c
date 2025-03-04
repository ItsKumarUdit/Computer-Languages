#include<stdio.h>
int main(){
	int n, count;
	printf("Enter v val: ");
	scanf("%d",&n);
	
	for(count=1; count<n; count++){
		printf("%d ",(count*count));
	}
}
