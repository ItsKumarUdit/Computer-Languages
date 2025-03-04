#include <stdio.h>
#include <stdlib.h>
#define MAX_BUCKETS 100  

int main() {
    int size , i, j, max = 0, bucket_size;
    printf("Enter size of the Array: ");
    scanf("%d", &size);
    int A[size];
    
	printf("Enter %d elements in the Array: ",size);
    for (i = 0; i < size; i++) {
        scanf("%d", &A[i]);
        if (A[i] > max) {
            max = A[i];
        }
    }
    bucket_size = (max / MAX_BUCKETS) + 1;

    int **buckets = (int **)malloc(MAX_BUCKETS * sizeof(int *));
    for (i = 0; i < MAX_BUCKETS; i++) {
        buckets[i] = (int *)malloc(size * sizeof(int));
    }
    
	int bucket_counts[MAX_BUCKETS] = {0};
    for (i = 0; i < size; i++) {
        j = A[i] / bucket_size;
        buckets[j][bucket_counts[j]++] = A[i];
    }

    for (i = 0; i < MAX_BUCKETS; i++) {
        for (j = 1; j < bucket_counts[i]; j++) {
            int temp = buckets[i][j];
            int c;
            for (c = j; c > 0 && temp < buckets[i][c - 1]; c--) {
                buckets[i][c] = buckets[i][c - 1];
            }
            buckets[i][c] = temp;
        }
    }
    int k = 0;
    for (i = 0; i < MAX_BUCKETS; i++) {
        for (j = 0; j < bucket_counts[i]; j++) {
            A[k++] = buckets[i][j];
        }
        free(buckets[i]);  
    }
    free(buckets);
	  
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}

