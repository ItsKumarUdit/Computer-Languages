#include<stdio.h>

struct toCM{
	float feet;
	float inch;
};

void main(){
	struct toCM D;
	struct toCM *p = &D;
	printf("Enter details: ");
	scanf("%f%f",&p->feet,&p->inch);
	float feetinCM = p->feet*30.48;
	float inchinCM = p->inch*2.54;
	printf("Feet in cm is %.2f",feetinCM);
	printf("\ninch in cm is %.2f",inchinCM);
}
