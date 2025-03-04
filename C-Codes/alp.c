#include<stdio.h>
int main(){
	int count, n;
	printf("Enter n val: ");
	scanf("%d",&n);
	
	for(count=65; count<65+n; count++){
		printf("%c ",count);
	}
}
