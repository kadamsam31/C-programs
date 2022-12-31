/*[16] Write a program to read loan amount, 
interest rate. Display monthly installment. 
Consider duration of 1 year. */
#include<stdio.h>
#include<conio.h>
void main()
{    int LAmo ;
     float MI,IR,TotI,pay;
    // MI = monthly installment 
clrscr();
    printf("Enter loan amount =");
    scanf("%d",&LAmo);
    
    printf("\nEnter Interest rate =");
    scanf("%f",&IR);
   
    printf("\nduration of 1 year");
    
       TotI= LAmo*(IR/100);// TotI= Total Interest
       pay = LAmo+TotI;// pay= Total payable value
       MI =pay/12;//MI= Monthly installment
    
    printf("\nTotal Interest=%0.2f",TotI);
    printf("\nTotal payable value=%0.1f",pay);
    printf("\nMonthly installment=%0.1f",MI);
    getch();
}