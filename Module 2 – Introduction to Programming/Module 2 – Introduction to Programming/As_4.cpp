//Write a C program to check if a number is even or odd using an if-else 
//statement. Extend the program using a switch statement to display the month 
//name based on the user’s input (1 for January, 2 for February, etc.).

#include<stdio.h>

main()
{
	int a , ch;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("value is even");
	}
	else
	{
		printf("Value is odd");
	}
	printf("\n");
	printf("Enter the your month choise :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		
		case 1:
			printf("You select Jan ");
			break;
		
		case 2:
			printf("You select fab");
			break;
			
		case 3:
			printf("You select march");
			break;
			
		case 4:
			printf("You select arp");
			break;
			
		case 5:
			printf("You select may");
			break;
			
		case 6:
			printf("You select jun");
			break;
			
		case 7:
			printf("You select july");
			break;
		
		case 8:
			printf("You select aug");
			break;
		
		case 9:
			printf("You select sup");
			break;
			
		case 10:
			printf("You select oct");
			break;
			
		case 11:
			printf("You select nav");
			break;
			
		case 12:
			printf("you select des");
			break;
			
	}
}
