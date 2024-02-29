#include<stdio.h>
int main()
{
    int a[10],i,min,max;
    printf("enter random 10 natural .no :  ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    min=a[0];
    max=a[0];
    for(i=0;i<10;i++){
        if(max<a[i]){
        max=a[i];
        }
        if(min>a[i]){
        min=a[i];
        }
        
    }
    printf("maximum: %d\nminimum : %d",max,min);
        return 0;
}