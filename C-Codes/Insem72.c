#include<stdio.h>
int main()
{
	int birthyear,birthmonth,currentyear,currentmonth,years,months,age;
	printf("Enter birthyear and birthmonth: ");
	scanf("%d%d",&birthyear,&birthmonth);
	printf("Enter currentyear and currentmonth: ");
	scanf("%d%d",&currentyear,&currentmonth);
	if(currentmonth<birthmonth)
    {
    	currentyear-=1;
    	currentmonth+=12;
	}
	years=currentyear-birthyear;
	months=currentmonth-birthmonth;
	printf("Age is %d Years and %d Months\n",years,months);
	return 0;	
}
