/*[7] Write a program to read basic salary. 
Consider 30 days per month.Display per day salary.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int salary, PDS ;//PDS= Per Day Salary 
clrscr();//int= %d or %i

    printf("monthly salary:₹");
    scanf("%i",&salary);
    
     PDS = salary / 30 ;
     
    printf("\nPer Day Salary:₹%i",PDS);
   

    
    
     
  
  getch();
}