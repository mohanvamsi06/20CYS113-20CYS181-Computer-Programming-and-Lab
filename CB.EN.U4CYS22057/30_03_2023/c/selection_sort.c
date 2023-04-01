#include <stdio.h>

int main() {
    // Declaring variables
    int size, i, j, small, index;

    // Getting input for size of array and creating array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int array[size];

    // Getting input for values of array
    for (i = 0; i <= size - 1; i++) {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i <= size - 2; i++) {
        // checking for the smallest value in the unsorted part of the array
        small = array[i];
        index = i;
        for (j = i; j <= size - 1; j++) {
            if (array[j] < small) {
                small = array[j];
                index = j;
            }
        }

        // Exchanging the positions of the smallest value and the first element in the unsorted part of the array
        array[index] = array[i];
        array[i] = small;

        // Printing output after each pass
        printf("The array after pass %d is:\n", i + 1);
        for (j = 0; j <= size - 1; j++) {
            printf("%d ", array[j]);
        }
        printf("\n");
    }

    return 0;
}
