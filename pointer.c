#include<stdio.h>

int main(){
    int*p;
    int x=60;
    p=&x;
    
    printf("value store in pointer : %d\n",*p);
    printf("address stored : %d\n ",p);
    p=p+3;
    printf("new adress is : %d",p);
    return 0;
}