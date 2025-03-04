#include<stdio.h>
#include<math.h>
int main(){
	int fact=1, count=1;
	
    while(count <= 8){
    	fact = tgamma(count);
    	printf("%d ",fact);
    	count++;
	}
}
