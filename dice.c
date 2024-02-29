#include<stdio.h>
int main()
{
    int i,j,d;
    int a[7]={0};
    srand();
    for(i=0;i<600;++i){
        d= rand ()%6+1;
        ++a[d];
    }
    printf("Frequency of each face :\n");
    for(j=1;j<=6;j++){
        printf("face %d=%d\n",j,a[j]);
    }
    return 0;
}