#include<stdio.h>

void AcceptData(int Ar[], int size){
	int i;
	for(i=0; i<size; i++){
		scanf("%d",&Ar[i]);
	}
}

void PrintData(int Ar[], int size){
	int i=0;
	for(i=0; i<size; i++){
		printf("%d ",Ar[i]);
	}
}

void Insertion(int Ar[], int size){
	int i, temp, j;
	for(i=1; i<size; i++){
	    temp = Ar[i];
		for(j=i; j>0 && temp<Ar[j-1]; j--){
			Ar[j] = Ar[j-1];
		}
		Ar[j]=temp;	
	}
}

int main(){
	int size,k,c,i,j,start,end,buckets;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int A[size];
	
	printf("\nEnter %d elements in the Array: ");
	AcceptData(A,size);
	
	printf("\nEnter number of buckets: ");
	scanf("%d",&buckets);
	
	int BA[buckets][size];  //Forming 2D Array;
	
	for(i=0; i<buckets; i++){
		for(j=0; j<size; j++){
			BA[i][j]=0;
		}
	}
	
	for(i=0; i<buckets; i++){
		printf("\nEnter range of the bucket: ");
		scanf("%d %d",&start,&end);
		k=0,c=0;
		for(j=0; j<size; j++){
			if(A[k] >= start && A[k] <= end)
				BA[i][c++] = A[k];
				k++;
			}
	    Insertion(BA[i],c);	//Calling Insertion within the loop;
	}
	
	printf("\nElements after sorting: ");
	for(i=0; i<buckets; i++){
		for(j=0; j<size; j++){
			if(BA[i][j] != 0)
			printf("%d ",BA[i][j]);	
		}
	}
}
