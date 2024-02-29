#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter number : ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==n){
        printf("perfect number");
    }
    else{
        printf("not amstrong number");
    }
    return 0;
}