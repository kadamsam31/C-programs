/*[8] Write a program to read basic salary
& number of days present.
Consider 30 days per month.Display salary to pay.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int salary, PDS, PIM, Payable ;//PDS= Per Day Salary 
clrscr();//int= %d or %i , PIM= Presenty in month

    printf("\nPresenty in month:");
    scanf("%i",&PIM);
    if(PIM>30)
    { 
    
       printf("\nplease enter valid day");
        printf("\n30 Days = 1 month");
    } 
    else 
   { printf("monthly salary:₹");
    scanf("%i",&salary);
    
     PDS = salary / 30 ;
     
    
    printf("\nPer Day Salary= ₹%i",PDS);
    
    
    
    Payable = PIM * PDS;
    
    printf("\nPayable Salary= ₹%i", Payable);
   
    }
    
    
     
  
  getch();
}