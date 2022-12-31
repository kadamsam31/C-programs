/*[6] Write a program to read 
price & quantity.Consider 10% discount &
 display bill amount to pay.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int price, quantity, bill, dis, discount ;
clrscr();

    printf("quantity:");
    scanf("%d",&quantity);
    
    printf("\nprice:");
    scanf("%d",&price);
    
       bill = quantity * price ;
      dis = bill / 10 ;
    discount = bill - dis;
     

    printf("\nbill amount=%d",bill);
    printf("\ndiscont=₹%d",dis);
    printf("\npayable ammount=%d", discount);
    
     
  
  getch();
}