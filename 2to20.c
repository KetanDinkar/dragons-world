/*TABLE_2_TO_10*/




#include<stdio.h>

int main()
{
    int a=1,b=1,c=1,d=1,e=1,f=1,g=1,h=1,i=1;

    while(a<=10) 
    {
        printf("%d\n",a*2);
        a++;
    }

    while(b<=10) {
        printf("  %d\n",b*3);
        b++;
    }

    while(c<=10) {
        printf("    %d\n",c*4);
        c++;
    }

    while(d<=10) {
        printf("      %d\n",d*5);
        d++;
    }

    while(e<=10) {
        printf("        %d\n",e*6);
        e++;
    }


    while(f<=10) {
        printf("          %d\n",f*7);
        f++;
    }

    while(g<=10) {
        printf("            %d\n",g*8);
        g++;
    }

    while(h<=10) {
        printf("              %d\n",h*9);
        h++;
    }

    while(i<=10) {
        printf("                %d\n",i*10);
        i++;
    }


    
    return 0;
    
}