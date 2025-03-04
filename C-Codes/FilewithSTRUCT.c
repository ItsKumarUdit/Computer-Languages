#include<stdio.h>

struct student{
	int Rno;
	char SName[20];
};

int main(){
	FILE *FPtr;
	int N,i;
	FPtr = fopen("D:\\Sample\\Sample6.txt","w");
	printf("Enter N value: ");
	scanf("%d",&N);
	for(i=0; i<N; i++){
		struct student *S = (struct student *)malloc(sizeof(struct student));
		printf("Enter Rno and Name of the %d students: ",i+1);
		scanf("%d %s",&S->Rno, &S->SName);
		fprintf(FPtr,"%d %s\n",S->Rno,S->SName);
		free(S);
		S = NULL;
	}
	fclose(FPtr);
	printf("Details written successfully in the file.");
	FPtr = NULL;
}
