//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix. 
//? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Sum[3][3], Mul[3][3];
    int size;

    printf("Choose matrix size:\n");
    printf("1. 2x2\n");
    printf("2. 3x3\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &size);

    if(size == 1) {
        // 2x2 Matrices
        printf("\nEnter elements for Matrix A (2x2):\n");
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements for Matrix B (2x2):\n");
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        // Addition
        printf("\nAddition of A and B (2x2):\n");
        for(int i=0; i<2; i++) {
            for(int j=0; j<2; j++) {
                Sum[i][j] = A[i][j] + B[i][j];
                printf("%d\t", Sum[i][j]);
            }
            printf("\n");
        }

    } else if(size == 2) {
        // 3x3 Matrices
        printf("\nEnter elements for Matrix A (3x3):\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements for Matrix B (3x3):\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        // Addition
        printf("\nAddition of A and B (3x3):\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                Sum[i][j] = A[i][j] + B[i][j];
                printf("%d\t", Sum[i][j]);
            }
            printf("\n");
        }

        // Multiplication
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                Mul[i][j] = 0;
                for(int k=0; k<3; k++) {
                    Mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("\nMultiplication of A and B (3x3):\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                printf("%d\t", Mul[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("\nInvalid choice! Please select 1 or 2.\n");
    }

    return 0;
}

