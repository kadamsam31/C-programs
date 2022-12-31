/*[3] Write a program to read 2 numbers
   and display difference.*/
#include<stdio.h>
#include<conio.h>
void main()
{    int num1, num2, difference;
clrscr();
    printf("num1:");
    scanf("%d",&num1);
    
    printf("num2:");
    scanf("%d",&num2);
    
        difference=num1-num2;
    
    printf("\ndifference=%d",difference);
     
  
  getch();
}