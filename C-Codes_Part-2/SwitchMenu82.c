#include<stdio.h>
int main()
{
	int lenght, breadth, area, perimeter, option;
	
	printf("Enter Lenght and breadth of a rectangle: ");
	scanf("%d%d",&lenght,&breadth);
	printf("option:\n 1 (Area)\n 2 (Perimeter)\n 3 (Both)");
	printf("\nEnter your option: ");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1 : 
		     area = lenght * breadth;
		     printf("Area is %d",area);
		     break;
		case 2 : 
		     perimeter = 2*(lenght * breadth);
		     printf("Perimeter is %d",perimeter);
		     break;
		case 3 : 
		     area = lenght * breadth;
		     perimeter = 2*(lenght * breadth);
		     printf("Area is %d\n",area);
		     printf("Perimeter is %d",perimeter);
		     break;
		default : printf("Invalid Option");
	}
	return 0;
}
