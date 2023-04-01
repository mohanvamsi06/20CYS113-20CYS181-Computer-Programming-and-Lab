#include <stdio.h>

int main() {
    // Declaring array
    int array[10] = {0};

    // For loop for receiving inputs
    for (int x = 0; x < 10; x++) {
        printf("Enter %d value:\n", x+1);
        int input;
        scanf("%d", &input);

        // assigning values in the array
        array[x] = input;
    }

    // Getting the value to check the frequency
    printf("Enter the value for which the frequency should be found:\n");
    int value;
    scanf("%d", &value);
    int freq = 0;

    // For loop for checking frequency
    for (int x = 0; x < 10; x++) {
        if (array[x] == value) {
            freq++;
        }
    }

    // If condition to show an output for values not present in the array
    if (freq == 0) {
        printf("The given input value does not exist in the array\n");
    } else {
        // Output for correct values
        printf("The frequency of the given value in array is %d\n", freq);
    }

    return 0;
}
