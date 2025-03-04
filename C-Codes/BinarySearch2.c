#include<stdio.h>
int main(){
	int size,i,first=0,middle,last,search;
	printf("Enter size of Array: ");
	scanf("%d",&size);
	int marks[size];
	printf("Enter %d Array value in increasing order: ",size);
	for(i=0; i<size; i++){
		scanf("%d",&marks[i]);
	}
	printf("Enter search element: ");
	scanf("%d",&search);
	last = size-1;
	
	while(first <= last){
		middle = (first+last)/2;
	    if(marks[middle]==search){
			printf("%d found at %d index location",search,middle);
			break;
		}
		else if(search>marks[middle]){
			first = middle+1;
		}
		else{
			last = middle-1;
		}
	}
	if(first>last){
		printf("%d not found",search);
	}
	return 0;
}
