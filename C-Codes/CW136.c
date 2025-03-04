#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i+=3){
		printf("%d ",i);
	}
	return 0; 
}
