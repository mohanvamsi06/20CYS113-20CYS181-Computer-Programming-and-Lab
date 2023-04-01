#include <stdio.h>

int main() {
    // Getting input for size of array and creating array
    printf("Enter the number of elements in the array:\n");
    int size;
    scanf("%d", &size);
    int array[size];

    // Getting input for values of array
    for (int i = 0; i < size; i++) {
        printf("Enter the value for index %d:\n", i);
        scanf("%d", &array[i]);
    }

    // Sorting array using bubble sort
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            // Checking if a value is greater than its next value
            if (array[j] > array[j+1]) {
                // exchanging values
                int a = array[j];
                array[j] = array[j+1];
                array[j+1] = a;
            }
        }

        // Printing output after each pass
        printf("The array after pass %d is:\n", i+1);
        for (int j = 0; j < size; j++) {
            printf("%d\n", array[j]);
        }
    }

    return 0;
}
