//eligibal for marrige
#include<stdio.h>
#include<conio.h>
void main()
{       int age ;
	char gender ,m ,f ;
clrscr();
      /*	printf("Enter the gender: ");
       gender=getchar();
       printf("\ngender=");
       putchar(gender);

       if(gender=='m')
       {  printf("\nMale");
       }*/

       printf("enter the gender=");
       scanf(" %c",&gender);
	printf("\nenter the age=");
	scanf(" %d",&age);
       if(age>=21&&gender=='m')
       {  printf("\neligibal");

	}
	else if(age>=18&&gender=='f')
	  { printf("\neligibal");
	  }
	  else
	  { printf("not eligibal");
	  }
	  //else if { printf("not vailed");  }

	  /*  printf("\nenter the age=");
	    scanf(" %d",&age);

	    if(m>=18)
	    { printf("yes"); }*/











getch();
}

















