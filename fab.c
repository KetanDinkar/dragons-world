#include<stdio.h>
void fib(int n);
int main()
{
    int x;
    printf("Enter no of terms : ");
    scanf("%d",&x);
    printf("fibonacci series \n 0 1 ");
    fib(x-2);
    return 0;
}
void fib(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        fib(n-1);
    }
    
    
}