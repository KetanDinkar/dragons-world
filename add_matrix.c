#include <stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],i,j;
    printf("first matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("second matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            z[i][j]=0;
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    printf("multiplication matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }    
}