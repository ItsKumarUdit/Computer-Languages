#include<stdio.h>
#include<string.h>
struct student
{
	long Id;
	char SName[20], Course[10];
	float fee;
};

int main(){
	struct student S1;
	printf("Enter student Roll: \n");
	scanf("%d",&S1.Id);
	printf("Enter Student name: \n");
	scanf("%s",S1.SName);
	printf("Enter Student Course name: \n");
	scanf("%s",S1.Course);
	printf("Enter Student Fee amount: ");
	scanf("%f",&S1.fee);
	
	
	
	printf("Roll\tName\tCourse\tFee\n-----------------------------\n");
	printf("%d\t%s\t%s\t%.2f\n",S1.Id,S1.SName,S1.Course,S1.fee);
	
}
