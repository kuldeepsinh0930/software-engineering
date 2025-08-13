#include<stdio.h>
#include<string.h>

int main()
{
	int num = 100;
	int *ptr = &num;
	
	printf("orignal value is :%d",num);
	printf("\n");
	*ptr = 200;
	
	printf("using pointer update value :%d",*ptr); 
	return 0;
}
