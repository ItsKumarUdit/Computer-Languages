#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int even;
	int i=2;
	while(i<=n){
		even = i+2;
		i++;
	}
	printf(" even number is : %d",even);
	return 0;
}
