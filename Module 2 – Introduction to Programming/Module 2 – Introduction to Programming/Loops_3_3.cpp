#include<stdio.h>

main()
{
	int num , sum = 0 , reverse = 0 , digit;
	
	printf("Enter the number you won't sum :");
	scanf("%d",&num);
	
	int org = num ;
	
	while(num != 0)
	{
		digit = num % 10;
		sum += digit;
		reverse = reverse * 10 + digit ;
		num /= 10;		
	}
	printf("Sum of digits of %d = %d\n",org,sum);
	printf("Reversed number = %d\n",reverse);
		
}
