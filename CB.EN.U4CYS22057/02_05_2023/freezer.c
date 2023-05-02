#include<stdio.h>
void main(){
	//Declaring Variables
	double hours, T;
	
	//Getting input from user
	printf("Enter the time elapsed after powerloss in hours : ");	
	scanf("%lf", &hours);
	
	//Calculating the temperature
	T = ((4*(hours*hours))/(hours+2))-20;
	
	//printing the output
	printf("The resulting temperature is : %f \n", T);
}
