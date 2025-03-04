#include <stdio.h>

#define MAX_NAME_LEN 50
int i;
// Define a structure to store book details
typedef struct {
  char name[MAX_NAME_LEN];
  float mrp;
} book_t;

int main() {
  // Declare an array of book_t to store details of two books
  book_t books[2];
  
  // Loop to accept details of each book
  for ( i = 0; i < 2; i++) {
    printf("\nEnter book %d details:\n", i + 1);

    // Accept book name
    printf("Name: ");
    scanf("%[^\n]", books[i].name);

    // Consume the newline character
    getchar();

    // Accept book MRP
    printf("MRP: ");
    scanf("%f", &books[i].mrp);
  }

  // Display book details
  printf("\nBook Details:\n");
  for (i = 0; i < 2; i++) {
    printf("\nBook %d:\n", i + 1);
    printf("Name: %s\n", books[i].name);
    printf("MRP: %.2f\n", books[i].mrp);
  }

  return 0;
}

