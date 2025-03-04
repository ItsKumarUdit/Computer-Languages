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
	//printf("Tree node Created");
	return newnode;
}

struct tree *Insert(struct tree *root, int element){
	if(root == NULL)
	return Create(element);
	else if(element>root->data)
		root->next = Insert(root->next, element);
	else
		root->prev = Insert(root->prev, element);
	//printf("\nElement inserted successfully");
	return root;
}

struct tree* Search(struct tree *root, int search_element){
	if(root == NULL || root->data == search_element)
	return root;
	else if(search_element > root->data)
	return Search(root->next, search_element);
	else
	return Search(root->prev, search_element);
}

struct tree* Minimum_Node(struct tree* root){
	if(root == NULL)
	return NULL;
	else if(root->prev != NULL)
	return Minimum_Node(root->prev);
	return root;
}

struct tree* Delete(struct tree *root, int del_element){
	if(root==NULL)
	return NULL;
	if(del_element>root->data)
	root->next = Delete(root->next, del_element);
	else if(del_element<root->data)
	root->prev = Delete(root->prev, del_element);
	else{
		if(root->prev==NULL && root->next==NULL){
			free(root);
			return NULL;
		}
		else if(root->prev==NULL || root->next==NULL){
		
		struct tree* temp;
		if(root->prev==NULL)
		temp = root->next;
		else
		temp = root->prev;
		free(root);
		return temp;
	}
	else{
		struct tree* temp = Minimum_Node(root->next);
		root->data = temp->data;
		root->next = Delete(root->next, temp->data);
	}
   }
   return root;
	
}

void Preorder(struct tree* root){
	if(root != NULL){
		printf("%d ",root->data);
		Preorder(root->prev);
		Preorder(root->next);
	}
}

void Inorder(struct tree* root){
	if(root != NULL){
		Inorder(root->prev);
		printf("%d ",root->data);
		Inorder(root->next);
	}
}

void Postorder(struct tree* root){
	if(root != NULL){
	Postorder(root->prev);
	Postorder(root->next);
	printf("%d ",root->data);
    }
}

int main(){
	int element, option, search_element, del_element;
	printf("Enter element to be Created: ");
	scanf("%d",&element);
	root = Create(element);
	printf("\n1-Insert\n2-Search\n3-Delete\n4-Preorder\n5-Inorder\n6-Postorder\n");
	while(1){
		printf("\nSelect option\n ");
		scanf("%d",&option);
		
		switch(option){
			case 1: printf("Enter element: ");
			        scanf("%d",&element);
			        Insert(root, element);
			        break;
			
			case 2: printf("Enter Search element: ");
			        scanf("%d",&search_element);
			        R = Search(root, search_element);
			        if(R == NULL)
			        printf("Element not found");
			        else
			        printf("Element found");
			        break;
			        
			case 3: printf("Enter delete element: ");
			        scanf("%d",&del_element);\
			        root = Delete(root, del_element);
			        
			case 4: printf("Preorder display:\n");
			        Preorder(root);
			        break;
			case 5: printf("Inorder display:\n");
			        Inorder(root);
			        break;
			case 6: printf("Postorder display:\n");
			        Postorder(root);
			        break;
			default : printf("Invalid option");
		}
	}
}

 

 
