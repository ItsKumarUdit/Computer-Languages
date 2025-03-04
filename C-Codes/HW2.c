#include <stdio.h>
#include <string.h>


// A user-defined function that takes a string as a parameter and returns a new string with reverse case
char* reverse_case(char* str) {
  // Allocate memory for the new string
  char* new_str = malloc(strlen(str) + 1);
  // Loop through each character of the original string
  int i;
  for (i = 0; i < strlen(str); i++) {
    // Check if the character is uppercase
    if (isupper(str[i])) {
      // Convert it to lowercase and store it in the new string
      new_str[i] = tolower(str[i]);
    }
    // Check if the character is lowercase
    else if (islower(str[i])) {
      // Convert it to uppercase and store it in the new string
      new_str[i] = toupper(str[i]);
    }
    // Otherwise, copy the character as it is
    else {
      new_str[i] = str[i];
    }
  }
  // Add a null terminator at the end of the new string
  new_str[strlen(str)] = '\0';
  // Return the new string
  return new_str;
}

// A main function to test the reverse_case function
int main() {
  // Declare a variable to store the user input
  char input[100];
  // Prompt the user to enter a string
  printf("Enter a string: ");
  // Read the user input and store it in the input variable
  scanf("%s", input);
  // Print the user input
  printf("User input: %s\n", input);
  // Call the reverse_case function and store the result in a new variable
  char* new_str = reverse_case(input);
  // Print the new string
  printf("New string: %s\n", new_str);
  // Free the memory allocated for the new string
  free(new_str);
  // Return 0 to indicate successful execution
  return 0;
}

