//17. Write a C program that takes three numbers from the user and determines:  The largest number.  The smallest number.

#include<stdio.h>
#include<string.h>

int main()
{
	int a , b , c , largest , smallest;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("A is largest\n");
		largest = a;
		
	}
	else if(b>a && b>c)
	{
		printf("B is largest\n");
		largest = b;
	}
	else
	{
		printf("c is largest\n");
		largest = c;
	}
	
	
	if(a<b && a<c)
	{
		printf("A is smallest\n");
		smallest = a;
		
	}
	else if(b<a && b<c)
	{
		printf("B is smallest\n");
		smallest = b;
	}
	else
	{
		printf("c is smallest\n");
		smallest = c;
	}
	return 0;
	
}
