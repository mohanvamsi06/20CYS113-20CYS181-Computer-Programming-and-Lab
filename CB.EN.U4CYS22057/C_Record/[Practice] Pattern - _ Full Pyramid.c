#include <stdio.h>

void main() {
    int rows, i, j, space;
    scanf("%d", &rows);
    if (rows > 0 && rows < 25){
        for (i = 1; i <= rows; i++) {
            // Print spaces
            for (space = 1; space <= rows - i; space++) {
                printf("   ");
            }
    
            // Print stars
            for (j = 1; j <= 2 * i -1; j++) {
                printf("*  ");
            }
    
            printf("\n");
        }
    }
    else {
        printf("Invalid Input");
    }
}
