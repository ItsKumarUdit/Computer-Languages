#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int sum;
	int i=1;
	while(i<=n){
		sum += i;
		i++;
	}
	printf("\nSum of first n natural number is : %d",sum);
	
	
	while(i>=1){
		printf("\n%d",i);
		i--;
	}
	return 0;
}
