#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p, i, n, n1;
	printf("Enter size : ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter %d values: ",n);
	for(i=0; i<n; i++){
		scanf("%d",(p+i));
	}
	printf("Elements are :\n");
	for(i=0; i<n; i++){
		printf("%d ",*(p+i));
	}
	printf("\nEnter new size: ");
	scanf("%d",&n1);
	
	p = (int *)realloc(p,n1*sizeof(int));
	if(n1<n){
		printf("\nNew values are: ");
		for(i=0; i<n1; i++){
		printf("%d ",*(p+i));
	}
	}
	else{
		printf("\nEnter %d new elements ",(n1-n));
		for(i=n; i<n1; i++){
		scanf("%d",(p+i));
	}
	
	printf("Final elements are \n:");
	for(i=0; i<n1; i++){
		printf("%d ",*(p+i));
	}
  }
}

