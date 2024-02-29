/*WAISE and RENT code of cibb-douglas production function*/



#include <stdio.h>

int main() 
{
    int q,l,k;
    float w,r,a;
    
    printf("q :");
    scanf("%d",&q);
    
    printf("\nl:");
    scanf("%d",&l);
    
    printf("\nk:");
    scanf("%d",&k);
    
    printf("\na:");
    scanf("%f",&a);
    
    w=(1-a)*q/l;
    r=a*q/k;
    printf("w=%f \nr=%f",w,r);


  

    return 0;
}