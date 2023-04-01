#include <stdio.h>

int main() {
    // Declaring array
    int array[10] = {0};

    // For loop for taking input
    for (int x = 0; x < 10; x++) {
        printf("Enter %d integer value:\n", x+1);
        int input;
        scanf("%d", &input);

        // assigning values in array
        array[x] = input;
    }

    // For loop for writing output
    for (int x = 0; x < 10; x++) {
        printf("The %d value in array is %d\n", x+1, array[x]);
    }

    return 0;
}