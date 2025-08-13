//Write a C program that takes an integer from the user and checks the following using 
//different operators: 
//o Whether the number is even or odd. 
//o Whether the number is positive, negative, or zero. 
//o Whether the number is a multiple of both 3 and 5. 


#include <stdio.h>
#include<string.h>

void checkEvenOdd(int a);
void checkSign(int a);
void checkMultiple(int a);

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("\n");

    checkEvenOdd(a);
    checkSign(a);
    checkMultiple(a);

    return 0;
}
void checkEvenOdd(int a) {
    if (a % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}
void checkSign(int a) {
    if (a > 0) {
        printf("The number is Positive.\n");
    } else if (a < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }
}
void checkMultiple(int a) {
    if (a % 3 == 0 && a % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }
}
