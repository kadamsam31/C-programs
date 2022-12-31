/*[5] Write a program to read price &
quantity & display bill amount to pay.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int price, quantity, bill ;
clrscr();

    printf("quantity:");
    scanf("%d",&quantity);
    
    printf("\nprice:");
    scanf("%d",&price);
    
       bill = price * quantity;

    printf("\nbill amount=%d",bill);
    
     
  
  getch();
}