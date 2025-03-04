#include<stdio.h>
#include<stdlib.h>

struct stack{
	int data;
	struct stack *link;
}*top = NULL, *newnode, *temp=NULL;

void push(int ele){
	newnode = (struct stack*)malloc (sizeof(struct stack));
	newnode->data=ele;
	newnode->link=top;
	top=newnode;
}

void pop(){
	if(top==NULL)
	printf("Stack is empty");
	else{
		temp=top;
		top=top->link;
		printf("%d element is deleted",temp->data);
		free(temp);
	}
}

void peek(){
	if(top==NULL)
	printf("Stack is empty");
	else{
		printf("Top most element: %d",top->data);
	}
}
void isEmpty(){
	if(top==NULL){
		printf("Stack is empty");
	}
	else{
		printf("Stack is not empty");
	}
}

void display(){
	 
	if(top==NULL){
		printf("Stack is empty");
	}
	else{
		temp=top;
		while(temp != NULL){
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}

int main(){
	int option,ele,flag=1;
	printf("Enter\n1-push\n2-pop\n3-peek\n4-IsEmpty\n5-Display\n");
	do{
		printf("\nSelect option: ");
		scanf("%d",&option);
		switch(option){
			case 1: printf("Enter any element: ");
			scanf("%d",&ele);
			push(ele);
			break;
			
			case 2: pop();
			break;
			
			case 3: peek();
			break;
			
			case 4: isEmpty();
			break;
			
			case 5: display();
			break;
			
			default : printf("Invalid option: ");
			break;
		} 
	}while(flag);
	 
}
