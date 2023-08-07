#include<stdio.h>

void main()
{ 
   char pass[50];
   
   printf("Create your password : ");
   gets(pass);
   
   printf("Password : ");
   puts(pass);
   
   int i=0;
   int lower=0,upper=0,digit=0,punct=0;
   int lenght = strlen(pass);
   
   while(pass[i])
   {
   	    if(islower(pass[i]))
   	            lower++;
   	    if(isupper(pass[i]))
		        upper++;
		if(isdigit(pass[i]))
		        digit++;
		if(ispunct(pass[i]))
		        punct++;
		i++; 
   } 
   
   if(strlen(pass) < 8)
   {
   	    printf("The password must have atleast 8 character\n");   
   }
   if(lower == 0)
   {
   	    printf("Your password needs lowercase\n");
   }
   if(upper == 0)
   {
   	    printf("Your password needs uppercase\n");
   }
   if(digit == 0)
   {
   	    printf("Your password needs digits\n");
   }
   if(punct == 0)
   {
   	    printf("Your password needs punct\n");
   }
   if(upper != 0 && digit != 0 && punct != 0 && strlen(pass) >= 8)
   {
   	    printf("Your password is strong");
   }
   else
   {
   	    printf("Your password is not strong");
   }
}
