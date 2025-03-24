#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop → Controls the rows
    for (i = 1; i <= rows; i++) {  
        // Inner loop → Controls how many stars are printed per row
        for (j = 1; j <= rows - i; j++) {  
            printf(" ");  // Prints space for alignment
        }
        for (j = 1; j <= i; j++) {  
            printf("* ");  // Prints a star with space
        }
        printf("\n");  // Moves to the next row
    }

    return 0;
}
