#include <stdio.h>

int main() {
    int totalIceCreamLitres,iceCreamLeft,total_cone_sold_litre;
    printf("Total litres : ");
    scanf("%d",&totalIceCreamLitres);
    total_cone_sold_litre=0.25*80;
    iceCreamLeft=(totalIceCreamLitres-total_cone_sold_litre);
    
    if(iceCreamLeft>0)
    {
    	printf("The vendor has %d liters of ice cream left.\n", iceCreamLeft);
	}
	else
	{
		printf("Invalid operation");
	}
    
    
    
    return 0;
}

