#include<stdio.h>
int main()
{
    int a[3][4],i,j;
    for ( i=0; i < 3; i++)
    {
        for(j=0;j<4;j++){
            printf("*\t",a[i][j]);
        }printf("\n");
    }
    return 0;
}