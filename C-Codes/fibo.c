#include<stdio.h>
int main(){
	int n, a =0, b=1, c=0, count;
	printf("Enter n val: ");
	scanf("%d",&n);
	
	for(count=1; count<=n; count++){
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}
}
