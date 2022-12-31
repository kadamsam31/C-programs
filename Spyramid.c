#include<stdio.h>
void main()
{    int i,j,k,row;
    printf("row=");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=row;j>i;j--)
        {
            printf(" ");
        }
        
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}