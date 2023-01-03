#include<stdio.h>
#include<conio.h>
void main()
{	int no;
clrscr();

	printf("Enter The Number:");
	scanf("%d",&no);
	switch (no%2==0)
	{
	  case 1 : printf("%d no is even",no);  break;

	  default : printf("%d no is odd",no);  break;



	}









getch();
}
