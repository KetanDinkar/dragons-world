#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,y,z;
    float H=0,T=0;
    srand(time(0));
    printf("no of time coin toss :");
    scanf("%d",&y);
    for(z=0;z<y;z++){
        x=rand();
        if(x%2==0){
            printf("\nheads");
            H++;
        }
        else {
            printf("\ntails");
            T++;
        }
    }
    printf("probability of :\nHEADS = %1.2f, TAILS = %1.2f",H/y,T/y);
    return 0;
}