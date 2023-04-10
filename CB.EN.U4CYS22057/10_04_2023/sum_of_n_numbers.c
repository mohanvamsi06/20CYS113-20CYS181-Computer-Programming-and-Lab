#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements to add: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of %d numbers is %d\n", n, sum);

    return 0;
}

