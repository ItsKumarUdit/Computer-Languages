#include <stdio.h>
#include <string.h>

void PrintArray(char* Ar[], int n) 
{
	int i;
    for (i = 0; i < n; i++) {
        printf("%s ", Ar[i]);
    }
}

void ReverseArray(char* Ar[], int n) {
    char* temp;
    int j = n - 1, i;
    
    for (  i = 0; i < j; i++) {
        temp = Ar[i];
        Ar[i] = Ar[j];
        Ar[j] = temp;
        j--;
    }
}

int main() {
    char* A[] = { "Udit", "Raj", "Kumar" };
    int n = sizeof(A) / sizeof(A[0]);

    printf("Original array: ");
    PrintArray(A, n);
     
    ReverseArray(A, n);

    printf("\nReversed array: ");
    PrintArray(A, n);

}

