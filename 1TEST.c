#include<stdio.h>
#include<conio.h>
void main()
{	char ch ;
clrscr();
	 printf("Enter Any character:");
	 scanf("%c",&ch);

	if(ch>=65 && ch<=97)
	{
	   printf("This is upper case latter ");
	}

	else if(ch>=97 && ch<=122)
	 {
	   printf("This is lower case letter ");
	 }

	  else if ( ch>=48  && ch<=57)
	   {
	    printf("This is digits ");
	   }

	   else
	   {
	     printf("this is special character");
	   }












getch();
}