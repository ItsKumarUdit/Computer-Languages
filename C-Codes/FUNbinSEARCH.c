#include<stdio.h>

void search(int[], int, int);

int main(){
	int size, i, sval;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int myArray[size];
	printf("Enter %d elements in the Array: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&myArray[i]);
	}
	printf("Enter search element: ");
	scanf("%d",&sval);
	search(myArray, size, sval);
	return 0;
}
void search(int A[], int size, int sval){
	
	int LI = 0, RI, found = 0;
	RI = size - 1;
	
	while(LI<RI){
		int MI = (LI+RI)/2;
		if(sval==A[MI]){
			found = 1;
			break;
		}
		else if(sval<A[MI]){
			RI = MI - 1;
		}
		else if(sval>A[MI]){
			LI = MI + 1;
		}
	
	if(sval==A[LI]){
		found = 1; 
	}
}
	if(found){
		printf("Element found");
	}
	else{
		printf("Element not found");
	}

}

