#include<stdio.h>
#include<math.h>
int main()
{
	int num, num1, digitcount=0, r, powsum, num2, num3;
	printf("Enter any two number number: ");
	scanf("%d%d",&num2, &num3);
	
	for(num = num2; num <= num3; num++) {
	  
	  powsum=0;
	  digitcount=0;
	  for(num1 = num; num1 != 0; num1 /= 10) {
		digitcount++;
		}
		for(num1 = num; num1 != 0; num1 /= 10){
			r = num1%10;
			powsum = powsum+pow(r,digitcount);
		}
	 if(powsum == num)
	printf("%d ",num);
 }
 
	
	
	return 0;
	
}
