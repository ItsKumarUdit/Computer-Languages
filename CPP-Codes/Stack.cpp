#include<iostream>
using namespace std;
int size=10;
int top = -1;
int stack[10];

int isFull(){
	if(top == size-1)
	return 1;
	else
	return 0;
}

int isEmpty(){
	if(top == -1)
	return 1;
	else 
	return 0;
}

void Push(int element){
	if(isFull()){
	cout<<"Stack is Already Full"<<endl;
	return;
}
	stack[++top] = element;
	cout<<"Element added Successfully"<<endl;
}

void Pop(){
	if(isEmpty()){
	cout<<"Stack is already empty"<<endl;
	return;	
	}
	
	
	cout<<"Element "<<stack[top]<<" deleted successfully"<<endl;
	stack[top--];
}

void Peek(){
	if(isEmpty()){
	cout<<"Stack is already empty"<<endl;
	return;	
		
	}
	
	
	cout<<"Top most element is "<<stack[top]<<endl;
}

void Peep(int sElement){
	if(isEmpty()){
	cout<<"Stack is already empty"<<endl;
	return;	
		
	}
	
	
	int found = 0;
	int i;
	for(i = 0; i <= top; i++){
		if(sElement == stack[i])
		found = 1;
		break;
	}
	if(found)
	cout<<"Searched element found"<<endl;
	else
	cout<<"Searched element not found"<<endl;
}

void Display(){
	if(isEmpty()){
	cout<<"Stack is already empty"<<endl;
	return;	
	}
	
	int i;
	for(i = 0; i <= top; i++){
		 cout<<stack[i]<<endl;
		break;
	}
}


int main(){
	int option, element, sElement, flag = 1;
	char choice;
	cout<<"Your Option\n1-Push\n2-Pop(Delete)\n3-Peek\n4-Peep(Search)\n5-Display\n"<<endl;
	do{
		cout<<"Select your Option: "<<endl;
		cin>>option;
		switch(option){
			case 1:
				cout<<"Enter any element: "<<endl;
				cin>>element;
				Push(element);
				break;
			
			case 2:
				Pop();
				break;
				
			case 3:
				Peek();
				break;
				
			case 4:
				cout<<"Enter Search element: "<<endl;
				cin>>sElement;
				Peep(sElement);
				break;
				
			case 5:
				Display();
				break;
				
			default : cout<<"Invalid Option"<<endl;
				
		}
		
	}while(flag);
}
