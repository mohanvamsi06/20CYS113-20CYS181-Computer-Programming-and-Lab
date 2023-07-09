#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);
    space = 0;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%c ", (char)(68 + j));
        }
        printf("\n");
        space++;
    }

    space = rows - 2;

    for (i = 2; i <= rows; i++) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("%c ", (char)(68 + j));
        }
        printf("\n");
        space--;
    }

    return 0;
}
