#include<stdio.h>
int main(){
	FILE *FPtr;
	int Rno;
	char SName[20], Course[10];
	float fee;
	FPtr = fopen("D:\\Sample\\Sample5.txt","w");
	printf("Enter student details: ");
	scanf("%d %s %s %f",&Rno, &SName, &Course, &fee);
	fprintf(FPtr,"%d %s %s %f",Rno, SName, Course, fee);
	fclose(FPtr);
	printf("Done");
	FPtr=NULL;
}
