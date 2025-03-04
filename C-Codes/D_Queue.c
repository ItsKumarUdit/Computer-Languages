#include <stdio.h>
#include <stdlib.h>

#define size 3

int DQ[size];
int front = -1;
int rear = -1;

int isFull() {
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (front == -1)
        return 1;
    else
        return 0;
}

void Insert_rear(int ele) {
    if (isFull())
        printf("Double Queue is Full");
        
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % size;
        DQ[rear] = ele;
        printf("Element %d added from rear side..\n", ele);
    }
}

void Insert_front(int ele) {
    if (isFull())
        printf("Double Queue is Full");
    else {
        if (front == -1)
            front = rear = 0;
        else if (front == 0)
            front = size - 1;
        else
            front = front - 1;

        DQ[front] = ele;
        printf("Element %d added from front side..\n", ele);
    }
}

void Display() {
    if (isEmpty()) {
        printf("Double queue is Empty\n");
        return;
    }
    int i;
    if (front <= rear) {
        for (i = front; i <= rear; i++) {
            printf("%d ", DQ[i]);
        }
    }
	else {
        for (i = front; i < size; i++) {
            printf("%d ", DQ[i]);
        }
        for (i = 0; i <= rear; i++) {
            printf("%d ", DQ[i]);
        }
    }
    printf("\n");
}

void delete_front(){
	 if (isEmpty()) {
        printf("Double queue is Empty\n");
        return;
    }
    
    printf("Element %d is deleted",DQ[front]);
    front++;
}

void delete_rear(){
	if (isEmpty()) {
        printf("Double queue is Empty\n");
        return;
    }
    if(front == 0 && rear > front){
    	printf("element %d deleted",DQ[rear]);
    	rear = rear-1;
	}
    if(rear == 0){
		printf("element %d deleted",DQ[rear]);
		rear = size-1;
	}
	if(rear == front){
		printf("element %d deleted",DQ[rear]);
		front = -1;
		rear = -1;
	}
}

int main() {
    int ele, option;
    printf("Enter\n1-Insert with rear\n2-Insert with front\n3-Display\n4-Delete from front\n5-Delete from rear\n");
    while(1) {
        printf("\n\nSelect your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter any element: ");
                scanf("%d", &ele);
                Insert_rear(ele);
                break;

            case 2:
                printf("Enter any element: ");
                scanf("%d", &ele);
                Insert_front(ele);
                break;

            case 3:
                Display();
                break;
                 
            case 4: delete_front();
                    break;
                    
            case 5: delete_rear();
                    break;
            	
            default:
                printf("Invalid option");
        }
    }
    return 0;
}

