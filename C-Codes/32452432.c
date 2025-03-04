#include<stdio.h>
int main()
{
	int n1,n2;
	printf("emter any two numbers");
	scanf("%d%d",&n1,&n2);
	int max=(n1>n2)?n1:n2;
	while(1)
	{
		if(max%n1==0&&max%n2==0)
		{
			printf("%d",max);
			break;
		}
		max++;
	}
	
}
