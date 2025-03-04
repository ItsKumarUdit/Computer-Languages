#include<stdio.h>

struct book {
	long Id;
	char BName[20], AName[20], PName[20];
	float MRP;
	
};
int main(){
	int size;
	printf("Enter size: ");
	scanf("%d",&size);
	struct book B1[size];
	int i = 0;
	while(i<size){
	
	printf("Enter %d Book Id: ",i+1);
	scanf("%d",&B1[i].Id);
	printf("Enter %d Book Name: ",i+1);
	scanf("%s",B1[i].BName);
	printf("Enter %d Book Author Name: ",i+1);
	scanf("%s",B1[i].AName);
	printf("Enter %d Book Publisher Name: ",i+1);
	scanf("%s",B1[i].PName);
	printf("Enter %d Book MRP: ",i+1);
	scanf("%f",&B1[i].MRP);
	i++;
    }
	printf("BId\tBName\tAName\tPName\tMRP\n------------------------------\n");
	for(i=0; i<size; i++){
	printf("%d\t%s\t%s\t%s\t%.2f",B1[i].Id,B1[i].BName,B1[i].AName,B1[i].PName,B1[i].MRP);
	printf("\n");
	}
    
}
