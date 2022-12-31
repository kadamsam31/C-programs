#include<stdio.h>
#include<conio.h>
void main()
{    int s1,s2,s3,s4 ;
clrscr();

    printf("Enter the 4 side:\n");
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    
    if(s1==s2 && s2==s3 && s3==s4 && s4==s1)
    {
        printf("\nsquare");
    }
    
        else if(s1==s2)
        {
            printf("\nrectangle");  
        }
        
        else
        {
            printf("\nirregular");
        }
    
getch();    
}