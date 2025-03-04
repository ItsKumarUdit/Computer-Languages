#include<stdio.h>
int main(){
	
	float r, tcost, tfoot, tarea;
	r=1526.78;
	tarea=3.14*r*r;
	tfoot=tarea/30.48;
	tcost=tfoot*8.75;
	printf("Total cost = %.2f",tcost);
	
	return 0;
}
