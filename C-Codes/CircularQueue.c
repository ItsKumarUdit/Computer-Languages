#include<stdio.h>
#define size 5

int front = -1;
int rear = -1;
int Q[size];
 

int isEmpty(){
	if(front == -1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(front == rear+1 || rear == size-1 && front == 0)
		return 1;
	else 
		return 0;
	
}

void Enqueu(int ele){
		if(front == -1)
		front++;
		rear = (rear+1) % size;
		Q[rear] = ele;
		printf("Element Added\n");
}

void Dequeue(){
	if(isEmpty()){
    printf("Queue is empty");
	return ;	
	}
        printf("%d element deleted",Q[front]);
		front = (front+1) % size;
}

void Display() {
    if(isEmpty()){
    printf("Queue is empty");
	return ; 	
	}
    int i = front;
    printf("Elements in the queue: ");
    do {
        printf("%d ", Q[i]);
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
    printf("\n");
}



int main(){
	int option, ele, flag=1;
	 
	printf("Enter\n1-Enqueu\n2-Dequeue\n3-Display\n");
	do{
		printf("\nSelect your option: ");
		scanf("%d",&option);
		
		switch(option){
			case 1: if(isFull())
	                printf("Queue is Full\n");
	                else{
	                	printf("Enter any element: ");
	                	scanf("%d",&ele);
	                	Enqueu(ele);
					}
					break;
			
			case 2:  
			Dequeue();
			break;
			
			case 3: Display();
			break;
			
			default : printf("Ivalid option");
			 	
			
		}    
    }while(flag);
}
