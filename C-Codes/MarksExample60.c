#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6;
	printf("Enter the marks of each subjects : ");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m4,&m5,&m6);
	if(m1>=35 && m2>=35 && m3>=35 && m4>=35 &&  m5>=35 && m6>=35)
	{
		printf("PASS");
	}
	else
	{
		printf("FAIL");
		
	}
}
