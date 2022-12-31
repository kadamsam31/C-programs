/* Write a C Program to display.
 menu of Following Food items.

B = Burger        ₹90
P = Pizza         ₹200
F= French Fries   ₹50
S= Sandwitch      ₹70

Input type of food item & quantity.
 Display fotal charges as per rate */

#include<stdio.h>

void main()
{
    char B, P, F, S, I;
    int qun,TC;
//qun=quntity,I=Item,TC=Total charge.

    printf("      🙏Welcome to our hotel🙏 \n");
     printf("\n\n           ❤️❤️❤️Menu❤️❤️❤️\n");

    printf ("\n\n B = Burger        ₹90\n P = Pizza         ₹200\n");
    printf(" F = French fries  ₹50\n S = Sandwitch     ₹70");

    printf("\n\n      Enter Food Item: "); 
    scanf("%c", &I);

    switch (I)
    {
    case 'B': 
    printf("   😋You have ordered Burger😋");
    printf("\n\n Enter your quantity:");
     scanf("%d", & qun);
        TC = 90 * qun ;
    printf("Total charge=%d",TC); 
    printf("\n\n\n ---Thanks For Ordered---");
    break;
    
    case 'P':
    printf("   😋You have ordered Pizza😋");
    printf("\n\n Enter your quantity:");
     scanf("%d", & qun);
        TC = 200 * qun ;
    printf("Total charge=%d",TC); 
    printf("\n\n\n ---Thanks For Ordered---");
    break;
    
    case 'F':
    printf("   😋You have ordered French Fries😋");
    printf("\n\n Enter your quantity:");
    scanf("%d", & qun);
    TC = 50 * qun ;
    printf("Total charge=%d",TC); 
    printf("\n\n\n ---Thanks For Ordered---");
    break;
    
    case 'S':
    printf("   😋You have ordered Sandwitch😋");
    printf("\n\n Enter your quantity:");
    scanf("%d", & qun);
    TC = 70 * qun ;
    printf("Total charge=%d",TC); 
    printf("\n\n\n ---Thanks For Ordered---");
    break;
    
    default :
        printf("Enter valid Item");
    }
}
    
    
    
    