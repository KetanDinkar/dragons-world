#include <stdio.h>
int main()
{
    int s[10],topper1,topper2,i,temp;
    printf("TOPPER IN FCB :-");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&s[i]);
    }
    topper1=s[0];
    topper2=s[1];
    if (topper1<topper2)
    {
        temp=topper1;
        topper2=topper1;
        topper2=temp;
    }
    for ( i = 0; i < 10; i++)
    {
        if (s[i]>topper1)
        {
            topper2=topper1;
            topper1=s[i];
        }
        else if (s[i]>topper2 && s[i]!=topper1)
        {
            topper2=s[i];
        }
        printf("topper1=%d\n",topper1);
        printf("topper2=%d\n",topper2);

        return 0;
        
        
    }
    
        
    
}