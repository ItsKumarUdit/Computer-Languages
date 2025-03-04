#include<stdio.h>
int main()
{
	int n;
	do {
		printf("\nEnter number: ");
		scanf("\n%d",&n);
		printf("\n%d",n);
		if(n%2!=0){
		break;
	}
	}
	while(1);
	printf("\nSTOP");
	return 0;
}
