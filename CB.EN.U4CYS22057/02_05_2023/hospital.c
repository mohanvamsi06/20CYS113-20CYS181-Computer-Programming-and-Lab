#include<stdio.h>
void main(){
	//Declaring the variables
	double volume, time, ml_per_hr;
	
	//getting input for volume and time
	printf("Enter the volume in ml : ");
	scanf("%lf", &volume);
	printf("Enter time in mins : ");
	scanf("%lf", &time);
	
	//Calculating the infusion rate and printing the output
	ml_per_hr = volume/(time/60);
	printf("The rate of infussion is %f ml/hr \n", ml_per_hr);
}	
