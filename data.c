#include <stdio.h>
#include <string.h>

#define gdp 3.5e9
#define GDP 272.41e9

int main()
{
    char job[30], j[30], d[30];
    int p, mrp, s;
    float a, y,c,x;

    printf("ENTER THE WORK YOU DO CURRENTLY NOW : ");
    scanf("%s", job);

    if (strcmp(job, "dailyworker") == 0)
    {
        printf("ENTER THE WORK YOU DO AS A DAILY WORKER : ");
        scanf("%s", j);

        if (strcmp(j, "farminghelper") == 0)
        {
            printf("ENTER THE LAND AREA ON WHICH YOU WORK (IN ACCAR) : ");
            scanf("%f", &a);
            printf("ENTER SALARY PER MONTH : ");
            scanf("%d", &s);
            printf("CONTRIBUTION IN CHHATTISGHAR GDP : %2.10f", x=(s*12/gdp)*100);
        }
        
    }
    else if (strcmp(job, "farmer") == 0)
    {
        printf("ENTER THE QUANTITY OF RICE YOU PRODUCE (IN QUINTAL) : ");
        scanf("%d", &p);

        printf("\nENTER CURRENT MPR OF RICE IN CHHATTISGHAR IS APPROXEMATE 1750");
        

        x = p * 1750;
        printf("\nYOUR CONTRIBUTION IN CHHATTISGHAR GDP IS : %d Rupees", x);
        
        c = (p/gdp) * 100;
        printf("\nYOUR CONTRIBUTION IN RICE GROWTH IN CHHATTISGHAR : %2.10f",c);

        y = (p / GDP) * 100;
        printf("\nYOUR CONTRIBUTION IN RICE GROWTH IN INDIA : %2.10f", y);
    }
    else if (strcmp(job, "driver") == 0)
        {
            printf("ENTER WHICH TYPE OF DRIVER YOU ARE : ");
            scanf("%s", d);

            if (strcmp(d, "truck") == 0)
            {
                printf("ENTER SALARY PER MONTH : ");
                scanf("%d", &s);
                printf("CONTRIBUTION IN CHHATTISGHAR GDP : %2.10f", x=(s*12/gdp)*100);
            }
            else if (strcmp(d, "car") == 0)
            {
                printf("ENTER SALARY PER MONTH : ");
                scanf("%d", &s);
                printf("CONTRIBUTION IN CHHATTISGHAR GDP : %2.10f", x=((s*12)/gdp)*100);
            }
        }

    return 0;
}
