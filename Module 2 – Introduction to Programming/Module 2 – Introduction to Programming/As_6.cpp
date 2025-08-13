//Write a C program to print numbers from 1 to 10 using all three types of loops 
//(while, for, do-while).

#include<stdio.h>

main()
{
	// using while loop
	int a = 1 , b = 1;
	
	while(a<=10)
	{
		printf("%d\t",a);
		a++;
	}
	printf("\n\n");
	
	for(int i = 1; i<=10 ; i++)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	do
	{
		printf("%d\t",b);
		b++;	
	}while(b<=10);
}
