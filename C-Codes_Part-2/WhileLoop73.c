#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int sum;
	int i=1,j=n;
	while(i<=n && j>=1){
		sum += i;
		printf("\n%d",j);
		i++;
		j--;
		
	}
	printf("\nSum of first n natural number is : %d",sum);

	
	
	return 0;
}
