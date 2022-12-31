//print even no bet 1-10
#include<stdio.h>

void main()
{    
    int i, cube;
    
  /*  printf("enter the no=");
    scanf("%d",&i);
   if(no%2==0)
    {  printf("Hello world!");
    }
    for(i=0;i<=100;i++)
    {
        if(i%2==0)
        printf("\ni=%d",i);
    }*/
   
    for(i=1;i<=10;i++)
    {   
         cube= i*i*i;
       if(cube%2==0)
      {  printf("\ncube of %d=%d",i,cube);
    }
}
}