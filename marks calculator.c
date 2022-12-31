#include<stdio.h>

void main()
{    int maths, marathi,total, hindi, science, history, sports ;
    float persentage;
    
    printf("\nmaths=");
    scanf("%d",&maths);
    
    printf("\nmarathi=");
    scanf("%d",&marathi);
    
    printf("\nhindi=");
    scanf("%d",&hindi);
   
    printf("\nscience=");
    scanf("%d",&science);
    
    printf("\nhistory=");
    scanf("%d",&history);
    
    printf("\nsports=");
    scanf("%d",&sports);
    
   total= maths+marathi+hindi+science+history+sports;
    
    printf("\ntotal=%d", total);
    
    persentage = total/6.0;
    printf("\npersentage=%f", persentage);
}