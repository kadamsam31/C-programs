/*[15] Write a program to read loan
amount, interest rate. Display simple interest.
Consider duration of 1 year. */
#include<stdio.h>
#include<conio.h>
void main()
{    int LAmo ;
     float Ir,SI;
/* LAmo = loan amount
Ir=Interest rate , SI= simple interest*/
clrscr();
    printf("Enter loan amount =");
    scanf("%d",&LAmo);
    
    printf("\nEnter Interest rate =");
    scanf("%f",&Ir);
   
    printf("\nduration of 1 year");
    
    SI = LAmo*Ir*1;
    printf("\nsimple interest=%0.2f",SI);
    
    getch();
}