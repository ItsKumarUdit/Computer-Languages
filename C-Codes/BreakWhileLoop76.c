#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10){
		if(i==5){
			break;
		}
		printf("%d\n",i);
		i++;
	}
	printf("Ruko jara");
	return 0;
}
