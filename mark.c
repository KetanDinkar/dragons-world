#include<stdio.h>
int main()
{
    int i,j,s,n,a[n],mark;
    printf("enter the number of student : \n");
    scanf("%d",&n);
    printf("Enter the mark of students : \n");
    for ( i = 0; i <n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        s=a[i];
        for ( j = i+1; i < n; j++)
        {
            if(s==a[j]){
                printf("%d number appeared more than one \n",s);
            }
        }
        
    }
    return 0;
    

}