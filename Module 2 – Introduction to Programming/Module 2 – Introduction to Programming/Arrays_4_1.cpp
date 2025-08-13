//Write a C program that accepts 10 integers from the user and stores them in an array. The 
//program should then find and print the maximum and minimum values in the array. 
//? Challenge: Extend the program to sort the array in ascending order. 

#include <stdio.h>

int main()
{
    int arr[10], max, min;

    // Input 10 integers
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to first element
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d\n", min);


    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  
    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

