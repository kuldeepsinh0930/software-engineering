#include<stdio.h>
main()
{
	int quantity;
	int price;
	int bprice=500,rprice=300,dprice=100,sprice=200;
	int bill;
	char n[20];
	char s;
	
	printf("Enter your good name : ");
	scanf("%s", &n);
	printf("\n%s\n", n);

	do
	{
	
	printf("welcome to fast food center\n");
	printf("list of food which are available is here:\n\n");
	printf("\t\t\t\t********************menu************************\n\n");
	printf("\t\t\t\t1.bajarano rotalo----------price=500\n");
	printf("\t\t\t\t2.ringanano oro------------price=300\n");
	printf("\t\t\t\t3.dahi---------------------price=100\n");
	printf("\t\t\t\t4.sevtameta----------------price=200\n\n\n");
	
	int choise;
	printf("choise your favorite : ");
	scanf("%d",&choise);
	
	switch (choise)
	{
		case 1:printf("you selected bajarano rotalo:)");
	             	printf("\n select quantity: ");
	               scanf("%d",&quantity);
	                printf("amount is: %d\n",bprice*quantity);
	                
	                bill=bill+bprice*quantity;
	                printf("\n\t\t\t\t\t total amount is : %d",bill);
	                
	                break;
	                
	                
	                
	    case 2:printf("you selected ringanano oro:)");
		printf("\n select quantity: ");
	                scanf("%d",&quantity);
	                printf("amount is:%d\n",rprice*quantity);
	                bill=bill+rprice*quantity;
	                printf("\n\t\t\t\t\t total amount is : %d",bill);
	                break;
	                
	    case 3:printf("you selected dahi:)");
        printf("\n select quantity: ");
	                scanf("%d",&quantity);
	                printf("amount is:%d\n",dprice*quantity);
	                bill=bill+dprice*quantity;
	                printf("\n\t\t\t\t\t total amount is : %d",bill);
	                break;
	                
	      	case 4:printf("you selected sevtameta:)");
		printf("\n select quantity: ");
	                scanf("%d",&quantity);
	                printf("amount is:%d\n",sprice*quantity);
	                bill=bill+sprice*quantity;
	                printf("\n\t\t\t\t\t total amount is : %d",bill);
					break;
					
					default: printf("sorry not avalebl");
					
				}
				   printf("\nmore oders ? yes=y & no=n plz select(Y&N)...");
	                scanf( " %c",&s);   

	}while(s=='y'|| s=='Y');
	
	printf("\n\t\t\t\t\t thank you for oder .... have a nice day  ");
	printf("\n\n\t\t\t\t\t\t  nice to meet you %s :)......\n", n);
	
}
	
	
	
	
