#include<stdio.h>
int main(){
	int bt_yr, bt_mt, ct_yr, ct_mt, year, month;
	printf("Enter birth year: ");
	scanf("%d",&bt_yr);
	printf("Enter birth month: ");
	scanf("%d",&bt_mt);
	printf("Enter current year: ");
	scanf("%d",&ct_yr);
	printf("Enter current month: ");
	scanf("%d",&ct_mt);
	
	year=ct_yr-bt_yr;
	month=ct_mt-bt_mt;
	
	if(month<0){
		year--;
		month += 12;
	}
	 printf("Raju's age is %d years and %d months.\n", year,month);

    return 0;
}
