//INCOME_TAX


#include <stdio.h>
int main()
{
    int i,tax;
    printf("enter your income=");

    scanf("%d",&i);
    
    if(i>300000&&i<=600000) {
        tax=0.05*(i-300000);
    }
    if(i>600000&&i<=900000) {
        tax=0.1*(i-600000);
    }
    if(i>900000&&i<=1200000) {
        tax=0.15*(i-900000);
    }
    if(i>1200000&&i<=1500000) 
    {
        tax=0.2*(i-1200000);
    }
    if(i>1500000) {
        tax=0.3*(i-1500000);
    }
    
    printf("tex you have to pay = %d",tax);

    return 0;
}