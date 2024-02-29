#include<stdio.h>
void printhlw(int count);
int main() {
    int count;
    printf("enter the no. of times to print hello:\n");
    scanf("%d", &count);
    printf("print %d times\n", count); // Added \n for newline
    printhlw(count); // Corrected function call placement
    return 0;
}
void printhlw(int count) {
    if(count == 0) {
    return;
    }
    printf("hello world\n"); // Added \n for newline
    printhlw(count - 1);
}

