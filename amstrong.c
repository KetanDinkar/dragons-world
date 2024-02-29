#include<stdio.h>
int main()
{
    int n,n1,rem,num=0;
    printf("enter the num : ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        rem=n1%10;
        num+=rem*rem*rem;
        n1=n1/10;
    }
    if(num==n){
        printf("amstrong");
    }
    else{
        printf("not amstrong");
    }
    return 0;
}