//Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
//153 = 1^3 + 5^3 + 3^3). 
//? Challenge: Write a program to find all Armstrong numbers between 1 and 1000


#include <stdio.h>

// Function to count digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to calculate power (without using math.h)
int power(int base, int exp) {
    int result = 1;
    while (exp != 0) {
        result *= base;
        exp--;
    }
    return result;
}

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int sum = 0, temp = num;
    int digits = countDigits(num);

    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    // Check a single number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Challenge: Find all Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

