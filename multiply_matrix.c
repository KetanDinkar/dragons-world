// MATRIX MULTIPLICATION code//


#include <stdio.h>

int main() 
{
    int  a,b,c,d,e,f,g,h,i,r,s,t,u,v,w,x,y,z,M,N,J;
    
    printf("enter A matrix first row : ");
    scanf("%d%d%d", &a,&b,&c);
    
    printf("enter A matrix second row : ");
    scanf("%d%d%d", &d,&e,&f);
    
    printf("enter A matrix third row : ");
    scanf("%d%d%d", &g,&h,&i);
    
    printf("enter B matrix first row : ");
    scanf("%d%d%d", &r,&s,&t);
    
    printf(" enter B matrix second row : ");
    scanf("%d%d%d", &u,&v,&w);

    printf("enter B matrix third row : ");
    scanf("%d%d%d", &x,&y,&z);

    M=(a*r + b*u + c*x),N= ( a*s+b*v+c*y), J= (a*t+b*w+c*z);
    printf("A X B first row =%d %d %d \n", M ,N,J);

    M=(d*r + e*x +f*x), N= (d*s +e*v+f*s), J= (d*t+e*w+f*z);
    printf("A X B second row = %d %d %d \n", M,N,J);

    M=(g*r+h*u+i*x), N= (g*s+h*v+i*y), J= (g*t+h*w+i*z);
    printf("A X B third row = %d %d %d",M,N,J);


    return 0;
}