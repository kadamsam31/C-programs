/* write a program to read 2 numbers and exchange the numbers and print them
without using third veriable */
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2 ;
clrscr();


	printf("enter the no1=");
	scanf("%d",&no1);
	printf("enter the no2=");
	scanf("%d",&no2);
	 /*  no1 =  no1 + n2
	       5 =    3 +  2

	     no2 = no1 - no2
	      3   =  5   -  2

	     no1 = no1 - no2
	      2   =   5  -  3
	  */
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;

	printf("\nExchanged no1=%d",no1);
	printf("\nExchanged no2=%d",no2);




getch();
}