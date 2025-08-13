//Write a C program that calculates the factorial of a given number using a function. 
//? Challenge: Implement both an iterative and a recursive version of the factorial function and 
//compare their performance for large numbers.

#include<stdio.h>

int fact_iterative(int n);
int fact_recursive(int n);

int main()
{
	int num;
	printf("Enter The Number :");
	scanf("%d",&num);
	
	printf("\n");
	printf("Factorial of %d using iteration = %d\n",num ,fact_iterative(num));
	printf("Factorial of %d using recursive = %d\n",num ,fact_recursive(num));
}

int fact_iterative(int num)
{
	int result = 1;
    for (int i = 2; i <= num; i++) 
	{
        result *= i;
    }
    return result;
}


int fact_recursive(int num)
{
	if (num == 0)
	{
		return 1;
	}
	
	int factnm1 = fact_recursive(num -1);
	int factn = factnm1 * num;
	return factn;
	
}
