#include<stdio.h>
#include <string.h>
int main()
{
    int age,class,inc;
    char gender[30],c[10],x[10],y[10];
    printf("ENTER YOU AGE : ");
    scanf("%d",&age);

    printf("\n\nboy or girl : ");
    scanf("%s",&gender);

    if(strcmp(gender,"girl")==0){
        printf("\n\nENTER CLASS : ");
        scanf("%d",&class);
        if(class >= 5 ){
            printf("\n\nELEGIBLE FOR :-1. KANYA SAKSHARTA PROTSAHAN YOJANA\n");
            if(9< class && class< 13){
            printf("\n2. CHIEF MINISTER GYAN PROTSAHAN INITIATIVE SCHEME\n");
            }
        }
        else{
            printf("\n\nNO NORMAL SCHOLARSHIP\n");
        }
        printf("\n\nENTER CAST : ");
        scanf("%s",&c);
        
        if(3<=class<=5){
            if(strcmp(c,"sc")==0||strcmp(c,"st")==0){
                printf("\nELIGIBLE FOR :-\n RAJYA CHATRA VRITTI SCHEME");
            }
            else if(strcmp(c,"obc")==0||strcmp(c,"general")==0){
                printf("\n\nNOT PROPER SCHOLARSHIP FOR OBC and GENERAL CATEGORY");
            }
        }
        else if (6<=class&&class<=8){
            if(strcmp(c,"sc")==0||strcmp(c,"st")==0||strcmp(c,"obc")==0){
                printf("\nELIGIBLE FOR :-\n RAJYA CHATRA VRITTI SCHEME");
            }
            else if(strcmp(c,"general")==0){
                printf("\n\nNOT PROPER SCHOLARSHIP FOR GENERAL CATEGORY");
            }
        }
        printf("\n\nany disablety (YES/NO): ");
        scanf("%s",&y);
        if(strcmp(y,"yes")==0){
            printf("\n\nFAMILY INCOME (per month) : ");
            scanf("%d",&inc); 
            if(inc<=8000){
                printf("\n\nELEGIBLE FOR :-\nDISABLED SCHOLARSHIP SCHEME");
            }
            else{
                printf("\n\nNOT ELEGIBLE FOR :-\nDISABLED SCHOLARSHIP SCHEME");
            }
        }
        if(strcmp(y,"no")==0){
                printf(".");
        }
        printf("\n\nHAVE YOUR FAMILY IS ANY OF THEM :-\n1. SCAVENGING FAMILY\n2. FLAYER FAMILY\n3. TANNERS / COLLECTING / PACKING FAMILY \n(YES / NO) : ");
        scanf("%s",&x);
        if(strcmp(x,"yes")==0){
                if(class>=6){
                    printf("\n\nNOT ELIGIBLE FOR :-\nUNCLEN BISINESS SCHOLARSHIP SCHEME");
                }
                else {
                    printf("\n\nELIGIBLE FOR :-\nUNCLEN BISINESS SCHOLARSHIP SCHEME");
                }
        }
        if(strcmp(x,"no")==0){
            printf("\n\nNOT ELIGIBLE FOR :-\nUNCLEN BISINESS SCHOLARSHIP SCHEME");
        }
    }
    if(strcmp(gender,"boy")==0){
        printf("\nenter class : ");
        scanf("%d",&class);
        if(10<=class&&class<=12){
            printf("\nELIGIBLE FOR :-\nCHIEF MINISTER GYAN PROTSAHAN INITIALE SCHEME");
        }
        printf("\nENTER CAST : ");
        scanf("%s",&c);
        if(6<=class<=8){
            if(strcmp(c,"sc")==0||strcmp(c,"st")==0||strcmp(c,"obc")==0){
                printf("\nELIGIBLE FOR :-\n RAJYA CHATRA VRITTI SCHEME");
            }
            else if(strcmp(c,"general")==0){
                printf("\nNOT PROPER SCHOLARSHIP FOR GENERAL CATEGORY");
            }
        }
        if(strcmp(y,"yes")==0){
            printf("\nfamily income : ");
            scanf("%d",&inc); 
            if(inc<=8000){
                printf("\neligeble for :-\ndisabled scholarship scheme");
            }
            else{
                printf("\nnot eligible for 'disabled scholarship scheme'");
            }
        }
        if(strcmp(y,"no")==0){
                printf(".");
        }
        printf("\nany disablety (YES/NO): ");
        scanf("%s",&y);
        if(strcmp(y,"yes")==0){
            printf("\nfamily income (per month): ");
            scanf("%d",&inc); 
            if(inc<=8000){
                printf("\neligeble for :-\ndisabled scholarship scheme");
            }
            else{
                printf("\nnot eligible for 'disabled scholarship scheme'");
            }
        }
        printf("\nHAVE YOUR FAMILY IS ANY OF THEM :-\n1. SCAVENGING FAMILY\n2. FLAYER FAMILY\n3. TANNERS / COLLECTING / PACKING FAMILY \n(YES / NO) : ");
        scanf("%s",&x);
        if(strcmp(x,"yes")==0){
                if(class>=6){
                    printf("\nNOT ELIGIBLE FOR 'UNCLEN BISINESS SCHOLARSHIP SCHEME'");
                }
                else {
                    printf("\nELIGIBLE FOR 'UNCLEN BISINESS SCHOLARSHIP SCHEME'");
                }
        }
        if(strcmp(x,"no")==0){
            printf("\nNOT ELIGIBLE FOR 'UNCLEN BISINESS SCHOLARSHIP SCHEME'");
        }
        

    }
    printf("\n\n\nTHANK YOU");
    return 0;
}    
