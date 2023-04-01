#include<stdio.h>
#define multiplicant 0.5
int main(){
	double height;
	double base;
	double area;
	printf("Enter the height of the triangle : \n");
	scanf("%lf", &height);
	printf("Enter the base of the triangle : \n");
	scanf("%lf", &base);
	area = multiplicant*base*height;
	printf("The area of the given triangle if %f \n", area);
	printf("Thanks for using triangle area calculator \n");
	return 0;
}
