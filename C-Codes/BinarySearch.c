#include<stdio.h>
int main()
{
  int a[100],n,i,se,found=0,low,high,mid;
  printf("enter array size: ");
  scanf("%d",&n);
  printf("enter elements into array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the search element: ");
  scanf("%d",&se);
  low=0;high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(se==a[mid])
    {
      printf("search element is found at location %d",mid);
      found=1;
      break;
    }
    else if(se<a[mid])
    high=mid-1;
    else
    low=mid+1;
  }
  if(found==0)
  {
    printf("search element not found");
  }
}
