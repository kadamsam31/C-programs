/*[12] Write a program to read 2 numbers
exchange the numbers and print them. */
#include<stdio.h>
#include<conio.h>
void main()
{    int a, b, temp;
clrscr();
    printf("value of a =");
    scanf("%d",&a);
    
    printf("\nvalue of b =");
    scanf("%d",&b);
   
    temp=a;
    a=b;
    b=temp;
     
    printf("\nexchanged value of a=%d\n",a);
    printf("exchanged value of b=%d",b);
    
    getch();
}