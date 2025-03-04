#include<stdio.h>

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Heapify(int Ar[], int size, int index){
	int largest = index;
	int left = 2 * index   + 1;
	int right = 2 * index  + 2;
	if(left < size && Ar[left] > Ar[largest])
	largest = left;
	if(right < size && Ar[right] > Ar[largest])
	largest = right;
	
	if(largest != index){
		swap(&Ar[index], &Ar[largest]);
		Heapify(Ar, size, largest);
	}
}

void BuildHeap(int Ar[], int size, int index){
	 int i;
	 for(i = size/2 - 1; i >= 0; i--){
	 	Heapify(Ar, size, i);
	 }
}

void HeapSort(int Ar[], int size){
	BuildHeap(Ar,size,0);
	int i;
	for(i = size-1; i > 0; i--){
		swap(&Ar[0], &Ar[i]);
		Heapify(Ar,i,0);
	}
}

int main(){
	int size;
	printf("Enter size of the heap tree: ");
	scanf("%d",&size);
	int A[size];
	printf("Enter %d elements of the Tree: ",size);
	int i;
	for(i = 0; i < size; i++){
		scanf("%d",&A[i]);
	}
	
	HeapSort(A,size);
	
	printf("Sorted tree are: ");
	for(i = 0; i < size; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
