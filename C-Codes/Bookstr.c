#include<stdio.h>

struct book {
	long Id;
	char BName[20], AName[20], PName[20];
	float MRP;
	
};
int main(){
	struct book B1;
	printf("Enter Book Id: ");
	scanf("%d",&B1.Id);
	printf("Enter Book Name: ");
	scanf("%s",B1.BName);
	printf("Enter Book Author Name: ");
	scanf("%s",B1.AName);
	printf("Enter Book Publisher Name: ");
	scanf("%s",B1.PName);
	printf("Enter Book MRP: ");
	scanf("%f",&B1.MRP);
	
	printf("BId\tBName\tAName\tPName\tMRP\n------------------------------\n");
	printf("%d\t%s\t%s\t%s\t%.2f",B1.Id,B1.BName,B1.AName,B1.PName,B1.MRP);
}
