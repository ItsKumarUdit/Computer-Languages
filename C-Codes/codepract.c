 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if three numbers form an arithmetic progression
bool isAP(long long a, long long b, long long c) {
    return (2 * b == a + c);
}

// Function to count the number of pairs satisfying the condition
long long countPairs(int N, long long A[]) {
    long long count = 0;
    int i,j;
    for ( i = 0; i < N - 1; i++) {
        for ( j = i + 1; j < N; j++) {
            long long a = A[j] - A[i];
            long long b = A[j] + A[i];
            long long c = A[j] * A[i];
            if (isAP(a, b, c))
                count++;
        }
    }
    return count;
}

int main() {
    int T, i; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of elements in the array
        scanf("%d", &N);
        
        long long A[N]; // Array elements
        for (i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }
        
        // Count pairs satisfying the condition
        long long result = countPairs(N, A);
        printf("%lld\n", result);
    }
    
    return 0;
}
