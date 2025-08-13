#include<stdio.h>
#include<string.h>

int main()
{
	char ch[1000];
	FILE * fptr;
	
	
	fptr = fopen("AAYYUSH.txt","w");
	printf("Enter the value :");
//	scanf("%s",&ch);
	fgets(ch ,1000,stdin);
	fprintf(fptr,"%s",ch);
	fclose(fptr);
	
	
	fptr = fopen("AAYYUSH.txt","r");
	char ch1 = fgetc(fptr);
	
	while(ch1 != EOF)
	{
		printf("%c",ch1);
		ch1 = fgetc(fptr);
	}
	fclose(fptr);
	return 0;
}
