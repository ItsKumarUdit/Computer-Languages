#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *next;
	int data;
	struct node *prev;
}*start = NULL, *newnode, *curr=NULL, *temp=NULL;

void CreateNode(){
	char choice;
	do{
	
	newnode = (struct node *) malloc( sizeof(struct node));
	printf("Enter any number: ");
	scanf("%d",&newnode->data);  
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(start==NULL){
		start=newnode;
		curr=newnode;
	}
	else{
		curr->next = newnode;
		newnode->prev = curr;
		curr = newnode;
	}
	
	printf("Press Y/y for continue..");
	scanf(" %c",&choice);
	
    } while(choice=='Y' || choice=='y');

}

void AddBegin(){
	newnode = (struct node *) malloc( sizeof(struct node));
	printf("\nEnter any element: ");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	if(start==NULL){
		start=newnode;
		 
	}
	else{
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
		 
	}
}

void AddEnd(){
	newnode = (struct node *) malloc( sizeof(struct node));
	printf("Enter any element: ");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	if(start==NULL){
		start=newnode;
	}
	else{
		curr->next=newnode;
		newnode->prev=curr;
		curr=newnode;
	}
}
void  AddPosition(int pos){
	  int i=1, ele;
	   
	  if(pos==1){
	  	AddBegin();
	  	return;
	  }
	  temp=start;
	  newnode = (struct node *) malloc( sizeof(struct node));
	  printf("Enter element: ");
	  scanf("%d",&ele);
	  while(temp != NULL){
	  	if(i != pos){
	  		i++;
	  		temp = temp->next;
		  }
		  else 
		  break;
	  }
	  if(temp != NULL){
	  	newnode->data=ele;
	  	newnode->next=temp;
	  	newnode->prev=temp->prev;
	  	temp->prev->next=newnode;
	  	temp->prev=newnode;
	  }
	  else
	  AddEnd();
}	

void Display_forward(){
	curr=start;
	while(curr != NULL){
		printf("%d ",curr->data);
		curr = curr->next;
	}
}
void Display_backward(){
	 temp=curr;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->prev;
	}
}

void Delete_begin(){
      temp = start;
	  printf("Deleled %d\n",temp->data);
	  start=start->next;
	  start->prev=NULL;
	  free(temp);	
}
 

void Delete_Pos(int pos){
	temp =start;
	int i=1;
	if(pos==1){
	Delete_begin();
	return;	
	}
	if(pos==count()){
		Delete_End();
		return;
	}
	while(temp->next != NULL){
		if(i != pos){
			i++;
			temp=temp->next;
		}
		else
		break;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}

int main(){
	printf("2310030232_Udit Kumar\n\n");
	
	CreateNode();
	AddBegin();
	AddEnd();
	AddPosition(2);
	Display_forward();
	Display_backward();
	Delete_Begin();
	Delete_Pos(2);
	
	 
}
