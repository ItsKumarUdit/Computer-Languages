#include<stdio.h>
void Fibonaaci_Number(int n){
	int a = 0, b = 1, c = 0 , i;
	for(i=1; i<=n; i++){
		printf("%d ",c);
		 a = b;
		 b = c;
		 c = a + b;
	}
}
	void main(){
		int n;
		printf("Enter N value: ");
		scanf("%d",&n);
		Fibonaaci_Number(n);
	}
	

