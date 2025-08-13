//9. Write a C program that stores 5 integers in a one-dimensional array and prints them. 
//Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.


#include <stdio.h>

int main() {
    int oneD[5] = {10, 20, 30, 40, 50};
    printf("One-Dimensional Array Elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", oneD[i]);
    }
    
    int twoD[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    printf("\n\nTwo-Dimensional Array (3x3 Matrix):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", twoD[i][j]);
            sum += twoD[i][j]; 
        }
        printf("\n");
    } printf("\nSum of all elements in 3x3 matrix: %d\n", sum);

    return 0;
	}

