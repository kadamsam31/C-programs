/* [9] Write a program to read basic salary. 
Give 20% commission.
 Display total salary to pay */
#include<stdio.h>
#include<conio.h>
void main()
{    int Bsal, comm, Pay;// Bsal= basic salary
clrscr(); // comm = commission 

    printf("\nBasic salary= ₹");
    scanf("%d",&Bsal);
    
    comm = Bsal * 20/100;
    Pay = Bsal - comm;
    
    printf("\ncommission=%d",comm);
    printf("\ntotal salary to pay=%d",Pay);
        
  
  getch();
}