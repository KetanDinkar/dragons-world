#include<stdio.h>
int main()
{
    int i,j;
    static int arr[3][3] , a[3][3];
    printf("Enter the value of matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("The Matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",arr[i][j]);
        }    
        printf("\n");
    }
    printf("Transpost of the Matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[j][i] = arr[i][j];
        }   

    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
