#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter the size of an arry");
	scanf("%d",&size);
	int ar[size];
	//Entering of elements.
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	//sorting of list loop
	for(i=1;i<size;i++)
	{
		int j,temp;
		j=i-1;
		temp=ar[i];
		while(temp<ar[j]&& j>=0)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=temp;
	}
	//after sorting 
	for(i=0;i<size;i++)
	{
		printf(" %d ",ar[i]);
	}
}
