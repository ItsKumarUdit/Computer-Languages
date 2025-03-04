#include<stdio.h>
int main()
{
	int Num_Notebooks,Num_Pens,Num_Icecreams;
	float cost_notebooks,cost_pens,cost_icecreams,Bill;
	printf("Enter Num_Notebooks,Num_Pens,Num_Icecreams");
	scanf("%d%d%d",&Num_Notebooks,&Num_Pens,&Num_Icecreams);
	printf("Enter cost_notebooks,cost_pens,cost_icecreams");
	scanf("%f%f%f",&cost_notebooks,&cost_pens,&cost_icecreams);
	Bill=(Num_Notebooks*cost_notebooks)+(Num_Pens*cost_pens)+(Num_Icecreams*cost_icecreams);
	printf("Bill is %f",Bill);
}
