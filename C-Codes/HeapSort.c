#include <stdio.h>

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heaping(int Ar[], int size, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < size && Ar[left] > Ar[largest])
    largest = left;

  if (right < size && Ar[right] > Ar[largest])
    largest = right;

  if (largest != i) {
    swap(&Ar[i], &Ar[largest]);
    heaping(Ar, size, largest);
  }
}

void buildHeap(int Ar[], int size) {
	int i;
    for (i = size / 2 - 1; i >= 0; i--)
    heaping(Ar, size, i);
}

void heapSort(int Ar[], int size) {
  buildHeap(Ar, size);
  int i;
  for ( i = size - 1; i > 0; i--) {
    swap(&Ar[0], &Ar[i]);
    heaping(Ar, i, 0);
  }
}

void printArray(int Ar[], int size) {
	int i;
  for ( i = 0; i < size; ++i)
    printf("%d ", Ar[i]);
   
}

int main() {
   int size, i;
   printf("Enter size of the Array: ");
   scanf("%d",&size);
   int A[size];
   printf("Enter %d element in the Array: ",size);
   for(i = 0; i < size; i++){
   	scanf("%d",&A[i]);
   }

   printf("Given array is \n");
   printArray(A, size);

   heapSort(A, size);

   printf("\nSorted array is \n");
   printArray(A, size);
}

