 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int num,count,factcount=0;
 	printf("Enter any number: ");
 	scanf("%d",&num);
 	
 	for(count=1; count<=sqrt(num); count++){
 		if(num%count==0){
 			factcount+=2;
		 }
	 }
	 if(factcount==2){
	 	printf("Prime Number");
	 }
	 else{
	 	printf("Not a Prime Number");
	 }
	 return 0;
 }
 
