#include<stdio.h>

void main()
{
	char email[50];
	char pass[50];
	
	printf("Enter your email : ");
	gets(email);
	
	printf("Enter your password : ");
	gets(pass);
	
	if(strcmp(email,"admin@gmail.com") == 0)
	{
		
	   if(strcmp(pass,"123456") == 0)
	   {
		   printf("Login successfully...\n");
	   }
       else
	   {
		   printf("Login failed...\n");
	   }
	}
	else
	{
		printf("The user is invalid...\n");
	}
}
