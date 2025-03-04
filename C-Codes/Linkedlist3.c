#include<stdio.h>
#include<stdlib.h>

struct student{
	int roll;
	char name[20], course[10];
	float fee;
	struct student *next;
};

void main(){
	struct student *head, *node;
	int N, i;
	printf("Enter number of the student details: ");
	scanf("%d",&N);
	head = NULL;
	for(i=1; i<=N; i++){
		struct student *newnode = (struct student *)malloc(sizeof(struct student));
		printf("\nEnter Roll, Name, Course, and Fee details: ");
		scanf("%d %s %s %f",&newnode->roll,&newnode->name,&newnode->course,&newnode->fee);
		newnode->next=NULL;
		
		if(head==NULL)
		head==newnode;
		else{
			node=head;
			while(node->next != NULL){
				node = node->next;
			}
			node->next = newnode;
		}
	}
	    printf("\nLinked list created successfully.\n");
	     node=head;
	     while(node != NULL){
		 printf("%d %s %s %.2f -> ",node->roll,node->name,node->course,node->fee);
		 node = node->next;
	}

}

