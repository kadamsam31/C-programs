/* making a calculator for
 extracting year, days & month */

#include<stdio.h>

void main()
{
    int    D,Y,M ;
    
    printf("Days=");
    scanf("%d",&D);
    
    Y=D/365 ;
    D=D%365 ;
    M=D/30 ;
    D=D%30 ;
    
    
    
    printf("\nYear=%d",Y);
    
    printf("\nMonths=%d",M);
    
    printf("\nDays=%d",D);
    
} 