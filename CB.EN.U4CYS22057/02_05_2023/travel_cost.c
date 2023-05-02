#include<stdio.h>
void main(){
	//Declaring the variables
	double start, end, cost_per_km, total_cost;

	//Getting input from the user
	printf("Enter the starting value of odometer : ");
	scanf("%lf", &start);
	printf("Enter the ending value of the odometer : ");
	scanf("%lf", &end);
	printf("Enter the cost per kilometer : ");
	scanf("%lf", &cost_per_km);

	//Calculating the total travel cost
	total_cost = (end-start)*cost_per_km;

	//printing out the result
	printf("The total cost of the trip is : %f", total_cost);
}
