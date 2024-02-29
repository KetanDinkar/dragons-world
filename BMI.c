/*CALCULATING BMI */


#include <stdio.h>
#include <math.h>

int main() 
{
    float BMI, Height, Weight;
    
    printf("Enter Height (cm)=");
    scanf("%f",&Height);
    
    printf("Enter Weight (kg)=");
    scanf("%f",&Weight);
    
    BMI = Weight/((Height/100)*(Height/100));
    printf("Body Mass Index=%f",BMI);

    return 0;
}