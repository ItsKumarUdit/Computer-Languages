#include<stdio.h>
int main()
{
	int i,n,y;
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("Enter y value: ");
	scanf("%d",&y);
	
	for(i=0; i<=y; i++){
		printf("%d * %d = %d\n",n, i, n*i);
	}
	return 0;
}
