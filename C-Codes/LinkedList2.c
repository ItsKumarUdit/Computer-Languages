#include<stdio.h>
#include<stdlib.h>
struct student {
	int roll;
	char name[20], course[10];
	float fee;
	struct student *Next;
};

void main(){
	struct student *Head, *node;
	int n, i;
	printf("Enter no. of new nodes: ");
	scanf("%d",&n);
	Head=NULL;
	for(i=1; i<=n; i++){
		struct student *newnode = (struct student *)malloc(sizeof(struct student));
		printf("Enter roll, name, course, and fee of the student: ");
		scanf("%d %s %s %f",&newnode->roll,&newnode->name,&newnode->course,&newnode->fee);
		newnode->Next = NULL;
		
		if(Head==NULL)
		Head=newnode;
		
		else{
			node=Head;
			while(node->Next != NULL){
				node = node->Next;
			}
			node->Next = newnode;
		}
	}
		printf("\nLinked list created successfully\n");
		node=Head;
		while(node != NULL){
			printf("%d %s %s %.2f -> ",node->roll,node->name,node->course,node->fee);
			node = node->Next;
		}
}

