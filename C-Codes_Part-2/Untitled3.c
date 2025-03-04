#include<stdio.h>

void insretionsort(int ar[] ,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int temp=ar[i];
		j=i-1;
		while(temp<ar[j]&& j>=0)
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=temp;
	}
}
int main()
{
	int size,i;
	printf("Enter the size");
	scanf("%d",&size);
	int arr[size];
	//Entering the element into a it.
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//calling the funtion
	insretionsort(arr,size);
	//printing after sorting
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
