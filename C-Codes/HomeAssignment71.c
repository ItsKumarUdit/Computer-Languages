#include<stdio.h>
int main()
{
	//Number of Days in Which Book is to be returned=x;
	//Number of Days After which Book is returned=y;
	
    int x,y,late_days,fine;
    printf("Enter Number of Days in Which Book is to be returned: ");
    scanf("%d",&x);
    printf("\nEnter Number of Days After which Book is returned: ");
    scanf("%d",&y);
    late_days=y-x;
    if(late_days>=1)
    {
    printf("Late days is %d\n",late_days);
    }
    
    if(y-x<=0)
    {
    	printf("No fine");
	}
	else if(y-x>=1 && y-x<=5)
	{
		printf("fine is Rs 1/-");
	}
	else if(y-x>=6 && y-x<=10)
	{
		printf("fine is Rs 2/-");
	}
	else if(y-x>=11)
	{
		printf("fine is Rs 5/-");
	}
	return 0;
}
