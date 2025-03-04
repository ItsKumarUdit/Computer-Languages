#include<stdio.h>
int main(){
	float length, breath;
	printf("Enter lenght of the Rectangle: ");
	scanf("%f",&length);
	printf("\nEnter breath of the Rectangle: ");
	scanf("%f",&breath);
	printf("Area of the Rectangle is %.2f",(length*breath));
	printf("\nPerimeter of the Rectangle is %.2f",(2*(length+breath)));
	
	return 0;
}
