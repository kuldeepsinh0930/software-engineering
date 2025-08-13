//Write a C program that takes a string as input and reverses it using a function. 
//? Challenge: Write the program without using built-in string handling functions.

#include <stdio.h>

void reverse(char str[])
{
    int i = 0, j = 0, temp;

 
    while (str[j] != '\0')
    {
        j++;
    }
    j--; 


    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

