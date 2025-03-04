#include<stdio.h>

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	printf("\nNumbers after swapping : a = %d, b = %d",a,b);
}

int main(){
	int a, b;
	printf("Enter any 2 number: ");
	scanf("%d %d",&a, &b);
	printf("Numbers before swapping : a = %d, b = %d",a,b);
	swap(a,b);
 
}
