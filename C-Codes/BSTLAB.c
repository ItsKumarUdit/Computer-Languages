#include<stdio.h>
#include<stdlib.h>

struct tree{
	struct tree *prev;
	int data;
	struct tree *next;
}*root=NULL, *newnode, *R;

struct tree* Create( int element){
	newnode = (struct tree*)malloc(sizeof(struct tree));
	newnode->prev=NULL;
	newnode->data=element;
	newnode->next=NULL;
	 
	return newnode;
}

struct tree *Insert(struct tree *root, int element){
	if(root == NULL)
	return Create(element);
	else if(element>root->data)
		root->next = Insert(root->next, element);
	else
		root->prev = Insert(root->prev, element);
 
	return root;
}
 
void Inorder(struct tree* root){
	if(root != NULL){
		Inorder(root->prev);
		printf("%d ",root->data);
		Inorder(root->next);
	}
}
int main(){
	int element, option, search_element, del_element;
	printf("Enter element to be Created: ");
	scanf("%d",&element);
	root = Create(element);
	printf("\n1-Insert\n2 -Inorder\n");
	while(1){
		printf("\nSelect option\n ");
		scanf("%d",&option);
		
		switch(option){
			case 1: printf("Enter element: ");
			        scanf("%d",&element);
			        Insert(root, element);
			        break;
			case 2: printf("Inorder display:\n");
			        Inorder(root);
			        break;
			default : printf("Invalid option");
			          break;
		}
	}
}

 

 
