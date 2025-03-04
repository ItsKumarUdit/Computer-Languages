#include<stdio.h>

void accept_elements(int [], int);
void print_elements(int [], int);

void main(){
	int s1, s2;
	printf("Enter any two sizes of the array: ");
	scanf("%d%d",&s1,&s2);
	int A[s1], B[s2], C[s1+s2];
	printf("Enter %d elements of first element: ",s1);
	accept_elements(A,s1);
	printf("Enter %d elements of second element: ",s2);
	accept_elements(B,s2);
	int i;
	for(i=0; i<s1; i++){
		C[i] = A[i];
	}
	for(i=0; i<s2; i++){
		C[i+s1] = B[i];
	}
	
	printf("Element of First array %d\n");
	print_elements(A,s1);
	printf("Element of Second array %d\n");
	print_elements(B,s2);
	printf("Element of Merged array %d\n");
	print_elements(C,s1+s2);
}
    void accept_elements(int A[], int s){
    	int i;
    	for(i=0; i<s; i++){
    		scanf("%d",&A[i]);
		}
	}
	void print_elements(int A[], int s){
		int i;
		for(i=0; i<s; i++){
			printf("%d",A[i]);
		}
	}

