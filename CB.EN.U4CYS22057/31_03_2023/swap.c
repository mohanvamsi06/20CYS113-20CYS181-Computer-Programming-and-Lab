#include<stdio.h>
int main(){
	int num1;
	int num2;
	int choice;
	printf("Welcome \n");
	printf("Enter an integer : \n");
	scanf("%d", &num1);
	printf("Enter another integer : \n");
	scanf("%d", &num2);
	printf("The numbers before swap are %d and %d \n", num1, num2);
	printf("Select one : \n");
	printf("Press 1 to use a third variable \n");
	printf("Press 2 to not use another variable \n");
	scanf("%d", &choice);
	if (choice == 1){
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
		printf("The numbers after swap are %d and %d \n", num1, num2);
	}
	else if (choice == 2){
		num1 = num1+num2;
		num2 = num1-num2;
		num1 = num1-num2;
		printf("The numbers after swap are %d and %d \n", num1, num2);
	}
	else{
		printf("Enter a correct choice \n");
	}
	return 0;
}

