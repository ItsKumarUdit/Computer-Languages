#include<stdio.h>
int main()
{
	float i;
	printf("Here are the value from 1.0 to 2.0 - ");
	for(i=1.0; i<=2.0; i+=0.1){
		printf("%.1f ",i);
	}
	return 0;
}
