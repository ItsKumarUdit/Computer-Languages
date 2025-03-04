#include<stdio.h>
#include<stdlib.h>

struct Student {
	long Roll;
	char SName[20], Course[10];
	float fee;
	struct Student *Next;
};

void main(){
	struct Student *Head, *Node;
	int N, i;
	printf("Enter Number of Student details: ");
	scanf("%d",&N);
	Head = NULL;
	for(i=1; i<=N; i++){
		struct Student *NewNode = (struct Student *)malloc(sizeof(struct Student));
		printf("Enter Roll, Name, Course, and fee details of the student %d:\n",i);
		scanf("%d%s%s%f",&NewNode->Roll,&NewNode->SName,&NewNode->Course,&NewNode->fee);
		
		NewNode->Next=NULL;
		
		if(Head==NULL){
			Head=NewNode;
		}
		else{
			Node=Head;
			while(Node->Next != NULL){
				Node = Node->Next;
			}
			Node->Next=NewNode;
		}
	}
	printf("\nLinked List created successfully\n");
	Node=Head;
	while(Node != NULL){
		printf("%d %s %s %.2f -> ",Node->Roll,Node->SName,Node->Course,Node->fee);
		Node = Node->Next;
	}
}
