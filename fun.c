#include<stdio.h>
int area(int x);
int main(){
    int a;
    printf("enter the side of square : ");
    scanf("%d",&a);
    area(a);
    return 0;
}
int area(int x){
    int area;
    area=x*x;
    printf("the area of square of side %d is %d",x,area);
}