#include<stdio.h>
int main()
{
    int i,j,a,n,num[n];
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Enter the numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(num[i]>num[j]){
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    printf("THe Acending order is in : \n");
    for(i=0;i<n;++i){
        printf("%d\n",num[i]);
    }
}