#include<stdio.h>
#include<stdlib.h>
#define size 10

struct node{
	int data;
	struct node *next;
};
 
struct node* chain[size];

void Insert(int element){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=element;
	newnode->next=NULL;
	
	int index = element % size;
	
	if(chain[index] == NULL){
		chain[index] =  newnode;
	}
	else{
		struct node *temp = chain[index];
		
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next=newnode;
	}
}

void display(){
	int i;
	for(i = 0; i < size; i++){
		struct node *temp = chain[i];
		printf("chain[%d]-->",i);
		while(temp){
			printf("%d--> ",temp->data);
			temp = temp->next;
		}
		printf("NULL\n");
	}
}

int main(){
	int i, element, choice;
	for(i = 0; i < size; i++){
		chain[i] = NULL;
	}
	
	do{
		printf("Enter data: ");
		scanf("%d",&element);
		Insert(element);
		printf("Hash Table:\n");
		display();
		printf("Press 1 for Continue / 0 for exit: ");
		scanf("%d",&choice);
	}while(choice != 0);
}
