#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to simulate the frog movements and find the answer
int simulateFrogMovements(int n, int positions[]) {
    int maxBuckets = 2 * n;
    int bucketCount[maxBuckets + 1];
    int maxFrogs = 0;

    while (1) {
        // Reset bucket count
        for (int i = 1; i <= maxBuckets; i++) {
            bucketCount[i] = 0;
        }

        // Count frogs in each bucket
        for (int i = 0; i < n; i++) {
            bucketCount[positions[i]]++;
        }

        // Find the current maximum number of frogs in any bucket
        int currentMax = findMax(bucketCount, maxBuckets + 1);
        if (currentMax > maxFrogs) {
            maxFrogs = currentMax;
        }

        // Check if all frogs are in the same bucket
        if (currentMax == n) {
            break;
        }

        // Simultaneously move frogs
        int newPositions[n];
        for (int i = 0; i < n; i++) {
            int leftMost = -1;
            for (int j = 0; j < n; j++) {
                if (positions[j] != positions[i]) {
                    leftMost = j;
                    break;
                }
            }
            if (leftMost != -1 && positions[leftMost] < positions[i]) {
                newPositions[i] = positions[i] - 1;
            } else if (leftMost != -1 && positions[leftMost] > positions[i]) {
                newPositions[i] = positions[i] + 1;
            } else {
                newPositions[i] = positions[i];
            }
        }
        for (int i = 0; i < n; i++) {
            positions[i] = newPositions[i];
        }
    }

    return maxFrogs;
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Number of frogs

        int positions[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &positions[i]); // Initial positions of frogs
        }

        // Simulate and output the result
        printf("%d\n", simulateFrogMovements(n, positions));
    }

    return 0;
}

