#include <stdio.h>

int main() {
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    
    int matrix1[row][column];
    int matrix2[row][column];
    int result[row][column];
    int i, j, k;

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            result[i][j] = 0;
            for (k = 0; k < column; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
