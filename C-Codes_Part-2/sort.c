#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
} *cur = NULL, *newnode, *start=NULL;

void insert()
{
  int n;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter element ");
  scanf("%d",&n);
  newnode->data=n;
  newnode->link=NULL;
  if(start==NULL){
  	
  
  start=newnode;
  cur = newnode;
}
  else{
  	
  
  cur->link=newnode;
  cur=newnode;
}
}
void sort()
{
  int t;
  struct node *temp,*prev,*next;
  temp=start;
  while(temp!=NULL)
  {
    prev=temp;
      next=temp->link;
      while(next!=NULL)
      {
        if(prev->data>next->data)
        {
          t=prev->data;
          prev->data=next->data;
          next->data=t;
      }
      next=next->link;
    }
      temp=temp->link;
  }
}
void display()
{
  struct node *temp=start;
  printf("Elements are :\n");
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->link;
  }
  printf("\n");
}


int main(){
	 printf("Enter 1-insert\n2-sort\n3-display\n");
	 int choice;
	 
	while(1){
		printf("Enter choice: ");
	    scanf("%d",&choice);
	    switch(choice)
		{
	    	
		case 1 :
			insert();
			break;
		case 2:
			sort();
			break;
		case 3:
			display();
			break;
		default : printf("Invalid option");
		}
	}
  
}
