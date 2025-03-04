#include <stdio.h>

int main() {
    int size, i, j, gap, temp;

    printf("Enter size of the Array: ");
    scanf("%d",&size);
    int A[size];

    printf("\nEnter %d elements in the Array: ");
    for (i = 0; i < size; i++) {
        scanf("%d",&A[i]);
    }

    printf("\nElements before sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }

    for (gap = size / 2; gap > 0; gap /= 2) {
         
        for (i = gap; i < size; i++) {
            temp = A[i];
            j = i;
            while (j >= gap && A[j - gap] > temp) {
                A[j] = A[j - gap];
                j -= gap;
            }
            A[j] = temp;
        }
    }

    printf("\nElements after sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
     
    return 0;
}

