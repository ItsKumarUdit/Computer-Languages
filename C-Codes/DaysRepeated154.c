#include<stdio.h>

int main()
{
	int daynum,day;
	char choice='y';
	while(choice=='y' || choice=='Y')
	{
	
	printf("Enter day number(1 - 7): \n");
	scanf("%d",&daynum);
	if(daynum==1){
		printf("Sunday");
	}
	else if(daynum==2){
		printf("Monday");
	}
	else if(daynum==3){
		printf("Tuesday");
	}
	else if(daynum==4){
		printf("Wednesday");
	}
	else if(daynum==5){
		printf("Thursday");
	}
	else if(daynum==6){
		printf("Friday");
	}
	else if(daynum==7){
		printf("Saturday");
	}
	else {
		printf("Invalid Number");
	}
	printf("\nPress y to continue..");
	scanf("%s",&choice);
}
	return 0;
}
