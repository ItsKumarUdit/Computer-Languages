#include<stdio.h>
int main(){
	int num;
	char choice = 'y';
	while(choice =='Y' || choice == 'y')
	{
	
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even number");
	}
	else{
		printf("odd number");
	}
printf("\nPress Y to continue: ");
	scanf("%s",&choice);	
}

}
