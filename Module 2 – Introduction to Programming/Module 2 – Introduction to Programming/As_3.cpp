//Write a C program that accepts two integers from the user and performs 
//arithmetic, relational, and logical operations on them. Display the results.

#include<stdio.h>

main()
{
	int a , b ,sum, sub , multi, div;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of a :");
	scanf("%d",&b);
	
	sum = a + b;
	sub = a - b;
	multi= a * b;
	div = a / b;
	
	printf("Sum is : %d\n",sum);
	printf("Sub is : %d\n",sub);
	printf("Multi is : %d\n",multi);
	printf("Div is : %d\n",div);
	 
}
