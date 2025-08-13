//11.Write a C program that takes two strings from the user and concatenates them 
//using strcat(). Display the concatenated string and its length using strlen()

#include<stdio.h>
#include<string.h>

int main()
{
	char fname[100] , lname[100] ; 
	
	
	printf("Enter the first name :");
	scanf("%s",&fname);
	
	printf("enter the last name :");
	scanf("%s",&lname);
	
	printf("%s\n",strcat(fname,lname));
	
	
	printf("length of concatenated string %d",strlen(fname));	
	return 0;
}
