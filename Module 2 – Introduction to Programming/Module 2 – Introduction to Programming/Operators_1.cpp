//14. Write a C program that acts as a simple calculator.
// The program should take two numbers and an operator as input from the user 
// and perform the respective operation (addition, subtraction, multiplication, division, or modulus) using operators.  
// Challenge: Extend the program to handle invalid operator inputs.


#include<stdio.h>

int add(int a , int b);
int sub(int a , int b);
int multi(int a , int b);
int div(int a , int b);

main()
{	
	int a , b;
	char ch;

	printf("Enter Your Value of a :");
	scanf("%d",&a);
	printf("Enter Your Value of b :");
	scanf("%d",&b);
	
	printf("\n\nEnter your choice for add = '+'\n");
	printf("\n\nEnter your choice for sub = '-'\n");
	printf("\n\nEnter your choice for multi = '*'\n");
	printf("\n\nEnter your choice for div ='/'\n");
	printf("\n\nEnter choice  :");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			printf("Your add value is :%d",add( a , b));
		break;
	
		case '-':
			printf("Your sub value is :%d",sub(a , b));
		break;
		
		case '*':
			printf("Your multi value is :%d",multi(a , b));
		break;
		
		case '/':
			printf("Your Div value is :%d",div(a , b));
		break;
		default :
			printf("Enter the valid choise");
	
	}	
}
	int add(int a ,int b)
	{
		int add = a + b;
		return add;
	}
	
	int sub(int a ,int b)
	{
		int sub = a - b;
		return sub;
	}
	int multi(int a ,int b)
	{
		int multi = a * b;
		return multi;
	}
	int div(int a ,int b)
	{
		int div = a + b;
		return div;
	}

