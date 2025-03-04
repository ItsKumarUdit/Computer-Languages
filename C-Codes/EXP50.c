# include<stdio.h>
int main() 
{
	float  a,b,c,d,averagemarks;
	printf("enter the marks: ");
	scanf("%f%f%f%f", &a,&b,&c,&d);
	averagemarks = (a+b+c+d)/4;
    printf("Average marks %f",averagemarks);
    if(averagemarks>=350)
    {
    	printf("\nGrade is A+");
	}
	else if(averagemarks>=90)
	{
		printf("\nGrade is A");
	}
	else if(averagemarks>=75)
	{
		printf("\nGrade is B");
	}
	else if(averagemarks>=60)
	{
		printf("\nGrade is C");
	}
	else 
	{
		printf("\nGrade is D");
	}

}
