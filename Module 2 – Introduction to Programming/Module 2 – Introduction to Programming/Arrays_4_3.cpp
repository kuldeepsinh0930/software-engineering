//Write a C program that takes N numbers from the user and stores them in an array. The 
//program should then calculate and display the sum of all array elements. 
//? Challenge: Modify the program to also find the average of the numbers. 

#include<stdio.h>

int main()
{
	int arr[100],n,sum=0;
	
	printf("Enter the Number of time you won't to sum :");
	scanf("%d",&n);
	printf("\n");
	printf("\n");
	
	for(int i = 1 ; i<=n ; i++)
	{
		printf("Enter the value of %d Number  :",i);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("\n");
	printf("\n");
	printf("Sum of All value is : %d\n",sum);
	
	printf("\n");
	printf("\n");
	printf("Average of all value is : %d",sum/n);
	
	return 0;
}
