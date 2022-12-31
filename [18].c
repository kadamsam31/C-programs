/*[18] Write a program to read- 
  loan amount, duration, interest rate.
     Display monthly installment.*/
#include<stdio.h>
#include<conio.h>
void main()
{        int L,D;
         float I,SI,TP,Mi ;
/* loan amount=L,duration=D,
 interest rate=I,monthly investment=Mi
SI=simple interest,total pay=TP */
clrscr();
    
    printf("Enter the loan amount=");
    scanf("%d",&L);
    printf("Enter the durantion=");
    scanf("%d",&D);
    printf("Enter the interest rate=");
    scanf("%f",&I);
    
    SI=L*D*I/100;
    TP=L+SI;
    Mi=TP/D;
    printf("\nsimple interest=%0.1f",SI);
    printf("\ntotal pay=%0.1f",TP);
    printf("\nmonthly investment=%0.1f",Mi);
    
    
    
    
getch();
}