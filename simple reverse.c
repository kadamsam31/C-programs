#include<stdio.h>
#include<conio.h>
void main()
{    int n,r;
clrscr();

    printf("Enter the no:");
    scanf("%d",&n);
    
    //i=2; rev=0;
    while(n>0)
    { 
        r=n%10;
         n=n/10;
        printf("%d",r);
       
       // printf("%d",n);
       // digit=num%10 ; num=num/10;
       // rev=digit+(rev*10);
        
       // i--;
    }
   // printf("\nreverse=%d",rev);
 getch();   
}