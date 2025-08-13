//3. Write a C program that includes variables, constants, and comments.
// Declare and use different data types (int, char, float) and display their values.

#include <stdio.h> 

int main() {
   
    int age = 25;           
    char grade = 'A';       
    float height = 5.9;     

    // Declaring a constant
    const float PI = 3.14159;

    // Printing the values
    printf("Age (int): %d\n", age);
    printf("Grade (char): %c\n", grade);
    printf("Height (float): %.1f\n", height);
    printf("Constant PI: %.5f\n", PI);

    return 0;
}

