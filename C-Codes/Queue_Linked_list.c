#include<stdio.h>
#include<stdlib.h>

struct Queue{
	int data;
	struct Queue *link;
}*newnode, *front=NULL, *rear=NULL, *temp=NULL;

void Enqueue(int ele){
	newnode = (struct Queue*)malloc(sizeof(struct Queue));
	newnode->data=ele;
	newnode->link=NULL;
	if(front==NULL && rear==NULL)
	 {
	 	front = newnode;
	 } 
	 else
	 {
	 	rear->link=newnode;
	 }
		rear = newnode;
	printf("Element added sucessfully: \n");
}

void Dequeue(){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		temp=front;
		printf("%d element deleted",temp->data);
		front = front->link;
		free(temp);
	}
}

void display(){
	
	if(front==NULL){
		printf("Queue is empty");
	}
	else
	{
		temp=front;
		while(temp != NULL){
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}

void Peep(int search){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		int found = 0;
		temp = front;
		while(temp != NULL){
			if(temp->data == search){
				found=1;
				break;
			}
		temp = temp->link;
	}
	if(found)
	printf("%d element is found",search);
	else
	printf("%d isn't found",search);
   }
}
 
void IsEmpty(){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		printf("Queue isn't empty");
	}
}

int main(){
	int option, flag=1, ele, search;
	printf("Enter\n1-Enqueue\n2-display\n3-Dequeue\n4-Peep\n5-IsEmpty\n");
		
		do{
			
		printf("\n\nSelect option: ");
		scanf("%d",&option);
		
		switch(option){
			
			case 1: printf("Enter any element: ");
			scanf("%d",&ele);
			Enqueue(ele);
			break;
			
			case 2: display();
			break;
			
			case 3: Dequeue();
			break;
			
			case 4: printf("Enter search element: ");
			        scanf("%d",&search);
			        Peep(search);
			break;
			
			case 5: IsEmpty();
			break;
			
			default : printf("Invalid option");
			break;
			
		}
		
	}while(flag);
	
}
