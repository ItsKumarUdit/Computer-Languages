#include<stdio.h>
#include<stdlib.h>

struct Student{
	int Rno;
	char SName[20], Course[10];
	float fee;
	struct Stduent *Next;
};

void main(){
	struct Student *Newnode, *Head, *Node;
	int N, i;
	printf("Enter Number of Student details: ");
	scanf("%d",&N);
	Head=NULL;
	for(i=1; i<=N; i++){
		struct Student *Newnode = (struct Student *)malloc(sizeof(struct Student));
		printf("\nEnter Student %d Roll number, Name, Course & fee details: ",i);
		scanf("%d %s %s %f",&Newnode->Rno,&Newnode->SName,&Newnode->Course,&Newnode->fee);
		 Newnode==NULL;
	
	 
    }
    printf("\nGiven Student details are: \n"); 
    Node=Head;
    while(Node->Next != NULL)
	{
		printf("%d %s %s %.2f-->",Newnode->Rno,Newnode->SName,Newnode->Course,Newnode->fee);
		Node=Node->Next;
	}
}


