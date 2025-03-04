#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
} *newnode, *start=NULL, *temp=NULL, *curr=NULL, *prev=NULL;

void create(int ele){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->link=NULL;
	
	if(start==NULL){
		start=newnode;
		newnode->link=start;
		 
	}
	else{
		curr->link=newnode;
		newnode->link=start;
		 
	}
	curr=newnode;
}

void display(){
	temp=start;
	do{
		printf("%d ",temp->data);
		temp=temp->link;
	}while(temp != start);
}

void insert_begin(int ele){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->link=start;
	curr->link=newnode;
	start=newnode;
}

void insert_end(int ele){
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->link=NULL;
	
	if(start==NULL){
		newnode->link=start;
		start=newnode;
	}
	else{
		curr->link=newnode;
		newnode->link=start;
		curr=newnode;
	}
}

void insert_pos(int ele, int pos){
    
    temp=start;  
    newnode=(struct node*)malloc(sizeof(struct node)); 
    newnode->data=ele; 
    int i=1; 
    if(pos==1) 
    insert_begin(ele); 
    else{ 
    do{ 
      if(i==pos)
	  { 
        i++; 
        break; 
      } 
      else{ 
        prev=temp; 
        temp=temp->link; 
        i++; 
      } 
    }while(temp->link!=start); 
    prev->link=newnode; 
    newnode->link=temp; 
  }
}

void delete_begin(){
	temp=start;
	printf("\n%d element is deleted: \n",temp->data);
	start=start->link;
	free(temp);
}
void delete_end(){
	temp=start;
	printf("\n%d element deleted: ",curr->data);
	while(temp->link != start){
		prev=temp;
		temp=temp->link;
	}
	curr=prev;
	curr->link=start;
	free(temp);
}
void delete_pos(int pos){
	int i=1;
	temp=start;
	if(pos==1){
		delete_begin();
	}
	else{
		do{
			if(i==pos){
				 
				break;
			}
			else{
				prev=temp;
				temp=temp->link;
				i++;
			}
			 
		}while(temp->link != start);
		printf("%d element deleted: ",temp->data);
			prev->link=temp->link;
			free(temp);
	}
}
void count(){
	int count=0;
	temp = start;
	if(start==NULL)
	printf("%d",count);
	else{
		do{
			count++;
			temp = temp->link;
		  }while(temp != start);
		  printf("\nCount = %d",count);
	}
}
void min(){
	 int min=0;
	if(start==NULL){
		printf("Linked list is empty");
	}
	else{
		temp=start;
		min=temp->data;
		do{
			if(temp->data<min){
            min=temp->data;
        }
            temp=temp->link;
        
			 
		}while(temp != start);
		 
	}
	printf("\nMin = %d",min);
}

void max(){
	 int max=0;
	if(start==NULL){
		printf("Linked list is empty");
	}
	else{
		temp=start;
		max=temp->data;
		do{
			if(temp->data>max){
            max=temp->data;
        }
            temp=temp->link;
        
			 
		}while(temp != start);
		 
	}
	printf("\nMax = %d",max);
}

void search(int ele){
	if(start==NULL){
		printf("Linked list is empty");
	}
	else{
		temp=start;
		int i=1;
		do{
			if(temp->data==ele){
				printf("Element found at %d node",i);
				break;
			}
			 
			temp=temp->link;
			i++;
		} while(temp != start);
	}
}

int main(){
	int option,ele, flag=1, pos;
	printf("\nEnter\n1-Create\n2-Display\n3-Insert at begin\n4-Insert at end\n5-Insert at position\n6-delete at begin\n7-delete at end\n8-delete at position\n9-count\n10-Min\n11-Max\n12-search\n");
	while(1){
	printf("\nEnter your choice: ");
	scanf("%d",&option);
	
	switch(option){
		case 1: 
		     printf("Enter any element: ");
		     scanf("%d",&ele);
		     create(ele);
	    break;
		case 2:
			display();
			break;
		case 3: 
		     printf("Enter any element: ");
		     scanf("%d",&ele);
		     insert_begin(ele);
		    break;
		case 4:
			printf("Enter any element: ");
			scanf("%d",&ele);
			insert_end(ele);
			break;
		case 5 :
			printf("Enter any element: ");
			scanf("%d",&ele);
			printf("Enter position: ");
			scanf("%d",&pos);
			insert_pos(ele,pos);
			break;
		case 6: delete_begin();
		break;
		case 7: delete_end();
		break;
		case 8 : 
		printf("Enter position: ");
		scanf("%d",&pos);
		delete_pos(pos);
		break;
		case 9:
			count();
			break;
		case 10:
			min();
			break;
		case 11:
			max();
			break;
		case 12:
			printf("Enter search element: ");
			scanf("%d",&ele);
			search(ele);
			break;
		default: 
		printf("Invalid Option...");
	}
	 if(flag==0)
	 break;
	
    } 
}
