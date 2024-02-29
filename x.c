#include<stdio.h>
int main()
{
    int a,b,c,sum=0,d;
    int x[]={1,2,3,4,5,6,7,8};
    for(a=0;a<8;a++){
        sum+=x[a];
        for(b=0;b<8;b++){
            sum=sum+x[b];
            for(c=0;c<8;c++){
                sum=sum+x[b];
            }
        }
    }
    d=sum;
    printf("%d",d);
    return 0;
}