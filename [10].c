/*[10] Write a program to display
 area of shaded part
(a) circle under rectangle(shaded part)
(b) triangle on the rectangle (both shaded)
(c) triangle in the rectangle(shaded part) 
*/
#include<stdio.h>
#include<conio.h>
void main()//        (a)

    //area of rectangle=length*breadth
    // area of circle =π*r²
    // area of triangle =1/2*base*hight
{    int l, b, aR ,h,r,lr,br,Ar3;
    float aC,aSp,aS,aT,At3,As3;
    // aSp= area of shaded part
clrscr();
     printf("figure (a) solution\n");
    printf("length of rectangle:");
    scanf("%d",&l);// l=length 
    printf("breadth of rectangle:");
    scanf("%d",&b);// b=breadth 
        r=b/2;    // r=radius 
    printf("radius of circle:%d",r);
        aR=l*b;// aR=Area of rectangle
    printf("\n\nArea of rectangle=%d",aR);
        // radius=1/2breadth
        aC= 3.14*r*r;// aC=Area of circle
    printf("\nArea of circle= %0.1f",aC);
  
        aSp=aC-aR;// aSp=Area of shaded part
    printf("\nArea of shaded part= %0.1f",aSp);
    
    
    printf("\n\n\nfigure (b) solution " );
    printf("\nHight of triangle:");
    scanf("%d",&h);
        aT =b*h/2;// aT=Area of triangle
    printf("Area of triangle=%0.1f",aT);
        aS=aT+aR;// aS=Area of shaded part
    printf("\nArea of shaded part= %0.1f",aS);
    
    
    printf("\n\n\nfigure (c) solution");
    printf("\nlength of rectangle:");
    scanf("%d",&lr);
    printf("breadth of rectangle:");
    scanf("%d",&br);
    
    printf("\nhight of triangle = breadth of rectangle:");
    printf("\nbase of triangle = length of rectangle\n\n");
    Ar3=lr*br;// Ar3=area of rectangle in fig 3
    printf("\narea of rectangle =%d",Ar3);
    At3=lr*br/2; // At3=area of triangle in fig 3
    printf("\narea of triangle =%0.1f",At3);
    
    As3=Ar3-At3; // As3=Area of shaded part in fig 3
    printf("\nArea of shaded part= %0.1f",As3);
    
    
    
  getch();
}