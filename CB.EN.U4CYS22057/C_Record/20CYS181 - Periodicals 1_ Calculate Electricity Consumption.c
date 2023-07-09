#include<stdio.h>

double calculator(double units){
	double sum;
	if(units>600){
		sum = ((units-600)*8)+(100*6)+(100*4.5)+(300*2.25);	
	}
	else if(units>500){
		sum = ((units-500)*6)+(100*4.5)+(300*2.25);
	}
	else if(units>400){
		sum = ((units-400)*4.5)+(300*2.25);
	}
	else if(units>100){
		sum = (units-100)*2.25;

	}
	else if(units<100){
		sum = 0;
	}
	return sum;
}




void main(){
	double EB_num[5], bill[5], units[5];
	char name[5][50];
	for (int i=0; i<5; i++){
		printf("Enter the name of the consumer : ");
		scanf("%s", &name[i]);
		printf("Enter the EB number : ");
		scanf("%lf", &EB_num[i]);
		printf("Enter the electricity consumed : ");
		scanf("%lf", &units[i]);
		bill[i] = calculator(units[i]);
		printf("\n");
	}
	for(int i =0; i<5; i++){
		printf("The bill of %s is %f \n ", name[i], bill[i]);
	       	printf("\n");
	}
}

	
