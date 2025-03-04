#include <stdio.h>

int main() {
  int n, x, y,i, ramaScore = 0, sitaScore = 0;

  printf("Enter the number of times to play the game: ");
  scanf("%d", &n);

  // Play the game n times
  for ( i = 0; i < n; i++) {
    printf("Enter the dice roll values for Rama and Sita: ");
    scanf("%d %d", &x, &y);

    // Calculate the scores
    ramaScore += x;
    sitaScore += y;
  }

  // Determine the winner
  if (ramaScore > sitaScore) {
    printf("Rama is the winner!\n");
  } else if (sitaScore > ramaScore) {
    printf("Sita is the winner!\n");
  } else {
    printf("The game is a tie!\n");
  }

  return 0;
}

