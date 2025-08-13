//Write a C program that checks whether a given number is a prime number or not using a for loop. 
//Challenge: Modify the program to print all prime numbers between 1 and a given number.

#include<stdio.h>
int main()
{
	int num , isprime;
	
	printf("Enter the Number to find prime :");
	scanf("%d",&num);
	
	
	for(int i = 2 ; i<=num ;i++)
	{
		isprime = 1;
		for(int j = 2 ; j <= i/2 ; j++)
		{
			if(i % j == 0)
			{
				isprime = 0;
				break;
			}
		}
		if(isprime == 1)
		{
			printf(" %d,",i);
		}
	}
}
