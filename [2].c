/* [2] Write a program to read 3 numbers.
 Display sum and average of all numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int num1, num2, num3, sum, average;
clrscr();
    printf("num1:");
    scanf("%d",&num1);
    
    printf("num2:");
    scanf("%d",&num2);
    
    printf("num3:");
    scanf("%d",&num3);
    
    sum=num1+num2+num3;
    average=sum/3;
    
     printf("\nsum=%d",sum);
     printf("\naverage=%d", average);
    
    
    
    
    
    
    
    
    
  getch();
}