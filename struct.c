#include<stdio.h>
struct student{
    char name[50];
    int roll_number;
    float marks;
}s;
int main(){
    printf("Enter name : ");
    fgets(s.name,sizeof(s.name),stdin);

    printf("enter roll number : ");
    scanf("%d",&s.roll_number);
    printf("enter mark : ");
    scanf("%f",&s.marks);

    printf("information of student is :-\n");
    printf("name : %s\n",s.name);
    printf("roll number : %d\n",s.roll_number);
    printf("marks : %f",s.marks);
    return 0;
}