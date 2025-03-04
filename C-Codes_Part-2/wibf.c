#include <stdio.h>

// Function to determine Pep's bid for a given test case
char determine_bid(int N, int attA[], int defA[], int attP[], int defP[]) {
    int total_att_A = 0, total_def_A = 0, total_att_P = 0, total_def_P = 0;
    int i;

    // Calculate total attack and defense power for team A
    for (i = 0; i < N; i++) {
        total_att_A += attA[i];
        total_def_A += defA[i];
    }

    // Calculate total attack and defense power for team P
    for (i = 0; i < N; i++) {
        total_att_P += attP[i];
        total_def_P += defP[i];
    }

    // Compare total attack and defense power for both teams
    if (total_att_A > total_att_P && total_def_A > total_def_P) {
        return 'A';
    } else if (total_att_P > total_att_A && total_def_P > total_def_A) {
        return 'P';
    } else {
        return 'D'; // 'D' represents draw
    }
}

int main() {
    int T, N, i ,j;
    scanf("%d", &T); // Read the number of test cases

    // Iterate through each test case
    for (i = 0; i < T; i++) {
        scanf("%d", &N); // Read the number of players
        int attA[N], defA[N], attP[N], defP[N]; // Declare arrays for attack and defense powers

        // Read attack and defense powers for team A
        for (j = 0; j < N; j++) {
            scanf("%d", &attA[j]);
        }
        for ( j = 0; j < N; j++) {
            scanf("%d", &defA[j]);
        }

        // Read attack and defense powers for team P
        for ( j = 0; j < N; j++) {
            scanf("%d", &attP[j]);
        }
        for ( j = 0; j < N; j++) {
            scanf("%d", &defP[j]);
        }

        // Determine Pep's bid for the current test case
        char bid = determine_bid(N, attA, defA, attP, defP);

        // Print Pep's bid
        if (bid == 'A') {
            printf("A\n");
        } else if (bid == 'P') {
            printf("P\n");
        } else {
            printf("DRAW\n");
        }
    }

    return 0;
}

