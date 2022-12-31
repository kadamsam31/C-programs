#include<stdio.h>
#include<conio.h>
void main()
{	int i,j,k,row;
clrscr();
	printf("enter the no of rows:");
	scanf("%d",&row);
	 for(i=1;i<=row;i++)
	 {
	  for(j=1;j<=row-i;j++)
	  {
	   printf(" ");
	  }

	  for(j=1;j<=i;j++)
	 {
	  printf("%d",j);
	 }

	 for(j=i-1;j>0;j--)
	 {
	  printf("%d",j);
	 }
	  printf("\n");

	 }
getch();
}