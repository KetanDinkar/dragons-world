#include<stdio.h>
int main()

{
    int x,y,n,t=0;
    printf("enter the order of square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter element of matrix : \n");
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            scanf("%d",&a[x][y]);
        }
    }
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            printf("a[%d][%d]=%d\t",x,y,a[x][y]);
        }printf("\n");
    }
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if(x==y){
                t+=a[x][y];
            }
        }
    }
    printf("\nTrace of matrix is : %d",t);
    return 0;
}