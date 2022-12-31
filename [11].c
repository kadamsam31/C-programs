/*[11] Write a program to read 2 numbers
& display maximum and minimum number. */
#include<stdio.h>
#include<conio.h>
void main()
{    int  num1, num2;
clrscr(); 

    printf("\nEnter the num1=");
    scanf("%d",&num1);
    
    printf("\nEnter the num2=");
    scanf("%d",&num2);
    
    if(num1<num2)
    { printf("\nnum1<num2");// printf("num1 is maximum");
    }
    else
    { printf("num2<num1");// printf("num2 is maximum");
    }
    
    
    
  getch();
}