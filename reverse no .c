#include<stdio.h>
#include<conio.h>
void main()
{    int num, digit,i ,rev ;
clrscr();

    printf("Enter the no:");
    scanf("%d",&num);
    
    i=2; rev=0;
    while(num>0)
    { 
        digit=num%10 ; num=num/10;
        rev=digit+(rev*10);
        
        i--;
    }
    printf("\nreverse=%d",rev);
 getch();   
}