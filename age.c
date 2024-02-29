#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    float age[n],sum,young,old;
    printf("Enter the age of students :");
    for(i=0;i<n;i++){
        scanf("%f",&age[i]);
        sum+=age[i];
    }
    young=age[0];
    old=age[0];
    for(i=0;i<n;i++){
        if(age[i]<young){
            young=age[i];
        }
        if(age[i]>old){
            old=age[i];
        }
    }
    printf("Average of student age : %f\n",sum/n);
    printf("Youngest in class : %f\n",young);
    printf("Oldest in class : %f\n",old);

    return 0;



}