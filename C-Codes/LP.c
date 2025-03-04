#include<stdio.h>

int Table_Size;

int GetIndex(int Value){
	int i;
	i = Value % Table_Size;
	return i;
}

int GetNextIndex(int index){
	int i;
	i = (index+1) % Table_Size;
	return i;
}

int main(){
	int Element_Size, i, index_Value, index_num;
	printf("Enter Table size: ");
	scanf("%d",&Table_Size);
	
	int T[Table_Size];
	
	printf("\nEnter Number of elements: ");
	scanf("%d",&Element_Size);
	
	int A[Element_Size];
	
	printf("Enter %d elements: ",Element_Size);
	for(i = 0; i < Element_Size; i++){
		scanf("%d",&A[i]);
	}
	
	for(i = 0; i < Table_Size; i++){
		T[i] = -1;
	}
	
	for(i = 0; i < Element_Size; i++){
		index_Value = A[i];
		index_num = GetIndex(index_Value);
		while(T[index_num] != -1){
			index_num = GetNextIndex(index_num);
		}
		T[index_num] = index_Value; 
	}
	 printf("\nThe elements are:\n");
   for(i=0; i < Table_Size; i++)
   {
     printf("\nElement at position %d: %d",i,T[i]);
   }
}
