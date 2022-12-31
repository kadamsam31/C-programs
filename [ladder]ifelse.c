// program to read Mark's in % and print
// fail,pass, first 🥇,distinction
#include<stdio.h>
#include<conio.h>
void main()
{    int  M ;// M = markes
clrscr();
   
    printf("Markes in Persentage=");
    scanf("%d",&M);
    
    if(M<35)// Markes is less than 35
    {
        printf("fail");
    }
        else if(M>=35 && M<60) //Markes is greater than or equal to 35
        {
            printf("pass");
        }
            else if(M>=60 && M<80)
            {
                printf("First ");
            }
                else if(M>=80 && M<=100)
                 {
                    printf("distinction");
                  }
     else
    {
        printf("Not valid");
    }

 getch();       
}