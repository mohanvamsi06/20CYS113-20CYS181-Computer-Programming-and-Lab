#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);
    
    space = rows - 1;
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%d ", (9 - j));
        }
        printf("\n");
        space--;
    }
    
    space = 0;

    for (i = rows-1; i >= 1; i--) {
        for (j = 0; j <= space; j++) {
            printf("  ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%d ", (9 - j));
        }
        printf("\n");
        space++;
    }

    return 0;
}
