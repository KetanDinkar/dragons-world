#include <stdio.h>
#include <string.h>

int main() {
    int x, ilu = 0;
    char colour[30], yn1[30], yn2[30], yn3[30], yn4[30];
    
    printf("GIVE THE ANSWER WRONG OR OPPOSITE TO YOUR ANSWER\n");
    printf("\n2 + 2 = ");
    scanf("%d", &x);
    
    if (x == 4) {
        printf("\n(YOU LOSE)\n");
    } else {
        printf("\n\nWHAT IS THE COLOUR OF THE SKY : ");
        scanf("%s", colour);
        
        if (strcmp(colour, "blue") == 0 || strcmp(colour, "BLUE") == 0 || strcmp(colour, "Blue") == 0) {
            printf("\n(YOU LOSE)\n");
        } else {
            printf("\n\nARE YOU DOING ENGINEERING (yes / no): ");
            scanf("%s", yn1);
            
            if (strcmp(yn1, "yes") == 0 || strcmp(yn1, "YES") == 0 || strcmp(yn1, "Yes") == 0) {
                printf("\nYOU LOSE\n");
            } else if (strcmp(yn1, "no") == 0 || strcmp(yn1, "NO") == 0 || strcmp(yn1, "No") == 0) {
                printf("\n\nDO YOU THINK I AM A GOOD PERSON (yes / no) : ");
                scanf("%s", yn2);
                
                if (strcmp(yn2, "yes") == 0 || strcmp(yn2, "YES") == 0 || strcmp(yn2, "Yes") == 0) {
                    printf("\n\nI KNOW I AM A GOOD PERSON\n");
                    printf("\nTHANK YOU\n");
                } else if (strcmp(yn2, "no") == 0 || strcmp(yn2, "NO") == 0 || strcmp(yn2, "No") == 0) {
                    printf("\n\nTHANK YOU FOR YOUR KIND WORDS :)""\n");
                    printf("\n\nDO YOU LIKE ME (yes / no) : ");
                    scanf("%s", yn3);
                    
                    if (strcmp(yn3, "no") == 0 || strcmp(yn3, "NO") == 0 || strcmp(yn3, "No") == 0) {
                        printf("\n\nCAN YOU GIVE ME A CHANCE TO BE YOUR 'BOYFRIEND' (yes / no) : ");
                        scanf("%s", yn4);
                        
                        if (strcmp(yn4, "no") == 0 || strcmp(yn4, "NO") == 0 || strcmp(yn4, "No") == 0||strcmp(yn4, "yes") == 0 || strcmp(yn4, "YES") == 0 || strcmp(yn4, "Yes") == 0) {
                            while (ilu < 10000000000000000) {
                                printf("I LOVEEEE YOU\n");
                                ilu++;
                            }
                        }
                    } else if (strcmp(yn3, "yes") == 0 || strcmp(yn3, "YES") == 0 || strcmp(yn3, "Yes") == 0) {
                        printf("\n\nI LIKE YOU TOO\n");
                    }
                }
            }
        }
    }
    
    return 0;
}
