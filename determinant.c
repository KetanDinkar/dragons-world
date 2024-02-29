// DETERMINANT code//

#include <stdio.h>

int main() 
{
    int a, b, c, d, e, f, g, h, i,D;
    printf("enter 1X1 1X2 1x3 : ");
    scanf("%d%d%d", &a,&b,&c);
    
    printf("enter 2X1 2X2 2X3 : ");
    scanf("%d%d%d", &d,&e,&f);
    
    printf("enter 3X1 3X2 3X3 : ");
    scanf("%d%d%d",&g,&h,&i);
    
    D = a*((e*i)-(f*h)) -b*((d*i)-(f*g)) + c*((d*h)-(e*g));
    printf("Determinants  = %d",D);
    

    return 0;
}