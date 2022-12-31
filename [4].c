/*[4] Write a program to read 2 numbers 
    and display quotient and reminder.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int num1, num2, reminder,quotient ;
clrscr();
    printf("num1:");
    scanf("%d",&num1);
    
    printf("num2:");
    scanf("%d",&num2);
    
        
    quotient= num1/num2 ;
    reminder= num1%num2 ;

    printf("\nquotient=%d",quotient);
    printf("\nreminder=%d",reminder);
     
  
  getch();
}