#include <stdio.h>

int main() {
    // Declaring array
    int array[5] = {0};

    // Getting the values and assigning them in the array
    for (int x = 0; x < 5; x++) {
        printf("Enter %d value:\n", x+1);
        int input;
        scanf("%d", &input);

        // Assigning values in the array
        array[x] = input;
    }

    // Assigning the max value as the first value
    int max = array[0];

    // Checking the remaining values to see if they are greater than the first value
    for (int x = 1; x < 5; x++) {
        if (array[x] > max) {
            // Updating the max value to the largest value found
            max = array[x];
        }
    }

    // Outputting the largest value
    printf("The largest integer value in array is %d\n", max);

    return 0;
}
