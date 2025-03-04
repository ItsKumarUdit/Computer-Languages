#include<stdio.h>
#include<string.h>
struct student
{
	long Id;
	char SName[20], Course[10];
	float fee;
};

int main(){
	struct student S1, S2;
	S1.Id = 232;
	strcpy(S1.SName,"RAJ");
	strcpy(S1.Course,"CSE");
	S1.fee = 100000;
	S2.Id = 233;
	strcpy(S2.SName,"KUMAR");
	strcpy(S2.Course,"CSE");
	S2.fee = 150000;
	
	printf("Roll\tName\tCourse\tFee\n-----------------------------\n");
	printf("%d\t%s\t%s\t%.2f\n",S1.Id,S1.SName,S1.Course,S1.fee);
	printf("%d\t%s\t%s\t%.2f",S2.Id,S2.SName,S2.Course,S2.fee);
}
