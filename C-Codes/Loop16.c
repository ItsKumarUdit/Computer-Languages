#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	for (i=0; i<=n; i+=2){
		printf("%d ",i);
		sum+=i*i;
	}
	printf("\nSum = %d", sum);
	return 0;
}
