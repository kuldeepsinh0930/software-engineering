//Write a C program that counts the number of words in a sentence entered by the user. 
//? Challenge: Modify the program to find the longest word in the sentence.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i = 0, wordCount = 0, maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            if (currLen == 0)
                start = i; // Start index of current word

            currLen++;
        }

        if (str[i] == ' ' || str[i + 1] == '\0')
        {
            if (currLen > 0)
            {
                wordCount++;

                if (currLen > maxLen)
                {
                    maxLen = currLen;
                    maxStart = start;
                }

                currLen = 0;
            }
        }

        i++;
    }

    printf("\nTotal words: %d\n", wordCount);

    // Print longest word
    if (maxLen > 0)
    {
        printf("Longest word: ");
        for (int j = 0; j < maxLen; j++)
        {
            putchar(str[maxStart + j]);
        }
        printf("\nLength: %d\n", maxLen);
    }

    return 0;
}

