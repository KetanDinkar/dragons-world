#include<stdio.h>
int main(){
    int i,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter the  number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i=i+2){
    printf("the alternate elements are:%d\n",a[i]);
    }
return 0;
}