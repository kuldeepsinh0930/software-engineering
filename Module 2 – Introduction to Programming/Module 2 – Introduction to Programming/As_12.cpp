//Write a C program that defines a structure to store a student's details (name, 
//roll number, and marks). Use an array of structures to store details of 3 
//students and print them. 

#include<stdio.h>
#include<string.h>

struct student 
{
	char name[100];
	int roll_no;
	int marks1;
	int marks2;
	int marks3;
	int marks4;
	int marks5;
		
};

int main()
{
	struct student IT[100];
	struct student CE[100];
	
	
	
	strcpy(IT[0].name,"AYUSH");
	IT[0].roll_no = 1;
	IT[0].marks1 = 50;
	IT[0].marks2 = 60;
	IT[0].marks3 = 70;
	IT[0].marks4 = 80;
	IT[0].marks5 = 90;
	
	printf("Detail of IT Student1\n");
	printf("Name is  : %s\n",IT[0].name);
	printf("Roll no is :%d \n",IT[0].roll_no);
	printf("Sub 1 Marks is : %d\n",IT[0].marks1);
	printf("Sub 2 Marks is : %d\n",IT[0].marks2);
	printf("Sub 3 Marks is : %d\n",IT[0].marks3);
	printf("Sub 4 Marks is : %d\n",IT[0].marks4);
	printf("Sub 5 Marks is : %d\n",IT[0].marks5);
	
	
	printf("\n\n");
	printf("\n\n");
	
	
	strcpy(IT[1].name,"Raj");
	IT[1].roll_no = 2;
	IT[1].marks1 = 50;
	IT[1].marks2 = 60;
	IT[1].marks3 = 70;
	IT[1].marks4 = 80;
	IT[1].marks5 = 90;
	
	printf("Detail of IT Student2\n");
	printf("Name is  : %s\n",IT[1].name);
	printf("Roll no is :%d \n",IT[1].roll_no);
	printf("Sub 1 Marks is : %d\n",IT[1].marks1);
	printf("Sub 2 Marks is : %d\n",IT[1].marks2);
	printf("Sub 3 Marks is : %d\n",IT[1].marks3);
	printf("Sub 4 Marks is : %d\n",IT[1].marks4);
	printf("Sub 5 Marks is : %d\n",IT[1].marks5);	
	
	
	printf("\n\n");
	printf("\n\n");
	
	strcpy(CE[0].name,"Bhavya");
	CE[0].roll_no = 2;
	CE[0].marks1 = 50;
	CE[0].marks2 = 60;
	CE[0].marks3 = 70;
	CE[0].marks4 = 80;
	CE[0].marks5 = 90;
	
	printf("Detail of CE Student1\n");
	printf("Name is  : %s\n",CE[0].name);
	printf("Roll no is :%d \n",CE[0].roll_no);
	printf("Sub 1 Marks is : %d\n",CE[0].marks1);
	printf("Sub 2 Marks is : %d\n",CE[0].marks2);
	printf("Sub 3 Marks is : %d\n",CE[0].marks3);
	printf("Sub 4 Marks is : %d\n",CE[0].marks4);
	printf("Sub 5 Marks is : %d\n",CE[0].marks5);
	
	printf("\n\n");
	printf("\n\n");
	
	
	strcpy(CE[1].name,"Ansh");
	CE[1].roll_no = 2;
	CE[1].marks1 = 50;
	CE[1].marks2 = 60;
	CE[1].marks3 = 70;
	CE[1].marks4 = 80;
	CE[1].marks5 = 90;
	
	printf("Detail of CE Student2\n");
	printf("Name is  : %s\n",CE[1].name);
	printf("Roll no is :%d \n",CE[1].roll_no);
	printf("Sub 1 Marks is : %d\n",CE[1].marks1);
	printf("Sub 2 Marks is : %d\n",CE[1].marks2);
	printf("Sub 3 Marks is : %d\n",CE[1].marks3);
	printf("Sub 4 Marks is : %d\n",CE[1].marks4);
	printf("Sub 5 Marks is : %d\n",CE[1].marks5);
	
	
	
	return 0;	
}
