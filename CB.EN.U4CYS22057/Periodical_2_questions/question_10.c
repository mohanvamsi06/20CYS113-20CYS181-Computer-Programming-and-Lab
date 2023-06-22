#include<stdio.h>

struct complex_num{
	double real;
	double imaginaryy;
}input1, input2, product;

void main(){
	printf("Enter real and imaginary parts of first number: ");
	scanf("%lf %lf", &input1.real, &input1.imaginaryy);
	printf("Enter real and imaginary part of second number: ");
	scanf("%lf %lf", &input2.real, &input2.imaginaryy);
	
	product.real = (input1.real*input2.real)-(input1.imaginaryy*input2.imaginaryy);
	product.imaginaryy = (input1.real*input2.imaginaryy)+(input2.real*input1.imaginaryy);

	printf("The product if %.2f + %.2fi", product.real, product.imaginaryy);
}

