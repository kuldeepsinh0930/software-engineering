//8. Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call.

#include <stdio.h>

int factorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);


    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

