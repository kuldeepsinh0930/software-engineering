#include<stdio.h>

int main()
{
	int a , b ,multi ;
	
	printf("Enter the Table number :");
	scanf("%d",&a);
	
	printf("Enter the range of the multiplication :");
	scanf("%d",&b);
	
	for(int i = 1 ; i <= b ; i++)
	{
		printf("%d  *  %d  =  %d\n", a ,i,a*i);
	}	
	return 0;
}
