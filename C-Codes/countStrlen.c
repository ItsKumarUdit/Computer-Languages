#include <stdio.h>

int string_length(char *str) {
  int length = 0;
  while (*str != '\0') {
    length++;
    str++;
  }
  return length;
}

int main() {
  char str[] = "Hello, world!";
  int length = string_length(str);
  printf("The length of the string is: %d\n", length);
  return 0;
}

