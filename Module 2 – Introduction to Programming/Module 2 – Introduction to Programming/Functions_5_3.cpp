//Write a C program that takes a number as input and checks whether it is a palindrome using 
//a function. 
//? Challenge: Modify the program to check if a given string is a palindrome.

#include<stdio.h>
#include<string.h>

int isnumpal(int num);
int ischarpal(char str[]);

int main()
{
	int num;
	char str[100];

	// Number Palindrome
	printf("Enter the number: ");
	scanf("%d", &num);

	if(isnumpal(num))
	{
		printf("%d is a palindrome number.\n", num);
	}
	else
	{
		printf("%d is not a palindrome number.\n", num);
	}

	// Clear input buffer
	while(getchar() != '\n');

	// String Palindrome
	printf("\nEnter the string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; // Remove newline

	if(ischarpal(str))
	{
		printf("\"%s\" is a palindrome string.\n", str);
	}
	else
	{
		printf("\"%s\" is not a palindrome string.\n", str);
	}

	return 0;
}

int isnumpal(int num)
{
	int original = num, reversed = 0, remainder;

	while(num != 0)
	{
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	return original == reversed;
}

int ischarpal(char str[])
{
	int i = 0;
	int j = strlen(str) - 1;

	while(i < j)
	{
		if(str[i] != str[j])
		{
			return 0;
		}
		i++;
		j--;
	}

	return 1;
}

