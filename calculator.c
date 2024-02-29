//CALCULATOR//


#include <stdio.h>

int main() 
{
    int a,b;
    char x;
    
    printf("opperation : ");
    scanf("%c",&x);
    printf("enter first numbers : ");
    scanf("%d",&a);
    
    printf("enter second number : ");
    scanf("%d",&b);
    
    switch (x)
    {
        case '%': 
        printf("a%b=%d",a%b); 
        break;
        
        case '/': 
        printf("a/b=%d",a/b); 
        break;
        
        case '+': 
        printf("a+b=%d",a+b); 
        break;
        
        case '-': 
        printf("a-b=%d",a-b); 
        break;
        
        case '*':
        printf("a*b=%d",a*b); 
        break;
    }
 

    return 0;
}