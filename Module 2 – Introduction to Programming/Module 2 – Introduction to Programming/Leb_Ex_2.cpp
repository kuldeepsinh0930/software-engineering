//Write a C program that generates Pascal’s Triangle up to N rows using loops. 
//? Challenge: Implement the same program using a recursive function. 

#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        // Print values in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }

        printf("\n");
    }

    return 0;
}

