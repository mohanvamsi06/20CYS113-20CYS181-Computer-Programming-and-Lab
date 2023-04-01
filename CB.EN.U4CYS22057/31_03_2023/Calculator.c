#include<stdio.h>
int main(){
	double operand1;
	double operand2;
	int choice;
	double result;
	printf("Welcome\n");
	printf("PLease enter Operand 1 : \n");
	scanf("%lf", &operand1);
	printf("Please enter Operand 2 : \n");
	scanf("%lf", &operand2);
	printf("Select an operation : \n");
	printf("Press 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for multiplication\n");
	printf("Press 4 for divison\n");
	scanf("%d" ,&choice);
	if(choice == 1){
		result = operand1 + operand2;
		printf("The Result is : %f \n", result);
	}
	else if(choice == 2){
		result = operand1 - operand2;
		printf("The Result is : %f \n", result);
	}
	else if(choice == 3){
		result = operand1 * operand2;
		printf("The Result is : %f \n", result);
	}
	else if(choice == 4){
		result = operand1 / operand2;
		printf("The Result is : %f \n", result);
	}
	else{
		printf("Enter a correct choice \n");
	}
	printf("Thanks for using my calculator\n");
	return 0;
}
