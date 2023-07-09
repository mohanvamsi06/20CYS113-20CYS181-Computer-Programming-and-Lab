#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

struct Complex subComplex(struct Complex num1, struct Complex num2) {
    struct Complex diff;
    diff.real = num1.real - num2.real;
    diff.imag = num1.imag - num2.imag;
    return diff;
}

void main() {
    struct Complex num1, num2, sum, diff;
    scanf("%d %d", &num1.real, &num1.imag);
    scanf("%d %d", &num2.real, &num2.imag);

    sum = addComplex(num1, num2);
    diff = subComplex(num1, num2);

    printf("%d+%di\n", sum.real, sum.imag);
    printf("%d+%di\n", diff.real, diff.imag);

}
