#include<stdio.h>

int main()
{
    int a, ch;

    // Check even or odd
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    // Switch for month name
    printf("Enter a month number (1-12): ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            printf("You selected January.\n");
            break;
        case 2:
            printf("You selected February.\n");
            break;
        case 3:
            printf("You selected March.\n");
            break;
        case 4:
            printf("You selected April.\n");
            break;
        case 5:
            printf("You selected May.\n");
            break;
        case 6:
            printf("You selected June.\n");
            break;
        case 7:
            printf("You selected July.\n");
            break;
        case 8:
            printf("You selected August.\n");
            break;
        case 9:
            printf("You selected September.\n");
            break;
        case 10:
            printf("You selected October.\n");
            break;
        case 11:
            printf("You selected November.\n");
            break;
        case 12:
            printf("You selected December.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

