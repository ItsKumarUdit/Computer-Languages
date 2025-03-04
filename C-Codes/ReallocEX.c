#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p, n, n1, i;
	printf("Enter size of the data: \n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter %d elements in the Data: \n",n);
	for(i=0; i<n; i++){
		scanf("%d",(p+i));
	}
	printf("Elements are : \n");
	for(i=0; i<n; i++){
		printf("%d ",*(p+i));
	}
	printf("\nEnter new size of the data: \n");
	scanf("%d",&n1);
	p = (int *)realloc(p,n1*sizeof(int));
	if(n1<n){
		printf("Elements are: ");
		for(i=0; i<n1; i++){
		printf("%d ",*(p+i));
	 }
    }
	else {
		printf("\nEnter %d new elements: ",n1-n);
		for(i=n; i<n1; i++){
		scanf("%d",(p+i));
	}
	printf("\nFinal elements are : ");
	for(i=0; i<n1; i++){
		printf("%d ",*(p+i));
	}
   }
  return 0;
}
