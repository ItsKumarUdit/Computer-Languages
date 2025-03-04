#include <stdio.h>

// Define a structure to store student information
typedef struct {
  char name[50];
  int rollNo;
} student_t;

int main() {
  // Declare a variable of the student structure
  student_t student;

  // Accept student name
  printf("Enter student name: ");
  scanf("%s", student.name);

  // Accept student roll number
  printf("Enter roll number: ");
  scanf("%d", &student.rollNo);

  // Display student details
  printf("\nStudent Details:\n");
  printf("Name: %s\n", student.name);
  printf("Roll No: %d\n", student.rollNo);

  return 0;
}

