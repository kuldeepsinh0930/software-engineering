//8. Write a C program that uses the break statement to stop printing numbers when it reaches 5.
// Modify the program to skip printing the number 3 using the continue statement.


#include <stdio.h>

int main() {
    int i;

    printf("Numbers from 1 to 10 using break and continue:\n");

    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break; // Stop the loop when i is 5

        if(i == 3)
            continue; // Skip printing 3

        printf("%d ", i);
    }

    return 0;
}

