#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
}*head = NULL, *newnode, *temp=NULL;

void CreateNode(){
	char choice;
	do{
		
	newnode = (struct node *) malloc( sizeof(struct node));
	printf("Enter any number: ");
	scanf("%d",&newnode->data); // (*newnode).data;
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
		temp=newnode;
	}
	else{
		temp->next = newnode;
		newnode->prev = temp;
		temp = newnode;
	}
	
	printf("Press Y/y for continue..");
	scanf(" %c",&choice);
	
   } while(choice == 'Y' || choice == 'y');
}

void Display(){
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

int main(){
	CreateNode();
	Display();
}
