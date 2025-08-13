//16.Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions: 
// Marks > 90: Grade A  Marks > 75 and <= 90: Grade B  Marks > 50 and <= 75: 
// Grade C  Marks <= 50: Grade D  Use if-else or switch statements for the decision-making process.

#include <stdio.h>

int main() {
    int marks[5], total = 0, per;


    for (int i = 0; i < 5; i++) {
        printf("Enter the mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    
    per = total / 5;

    
    printf("Total Marks: %d\n", total);
    printf("Percentage: %d\n", per);

    if (per > 90) {
        printf("Grade A\n");
    } else if (per > 75 && per <= 90) {
        printf("Grade B\n");
    } else if (per > 50 && per <= 75) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    return 0;
}

