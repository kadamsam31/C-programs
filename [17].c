/*[17] Write a program to read
 loan amount,duration, interest rate.
 Display simple interest. */
#include<stdio.h>
#include<conio.h>
void main()
{    int LAmo ,Du;
     float IR,SI;
    
clrscr();
    printf("Enter Principal amount =");
    scanf("%d",&LAmo);
    
    printf("\nDuration in year =");
    scanf("%d",&Du);
    
    printf("\nEnter Interest rate =");
    scanf("%f",&IR);
   
    
    SI=(LAmo*Du*IR)/100;
        
       
    
    printf("\nSimple Interest=%0.2f",SI);
    
    getch();
}