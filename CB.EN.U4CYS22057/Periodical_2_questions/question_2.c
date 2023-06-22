#include<stdio.h>

int main(){
	int rows;
	printf("Enter the number of rows ");
	scanf("%d", &rows);
	int row[rows];

	for (int i = 1; i<= rows-1; i++){
		printf(" ");
	}
	printf("1 \n");
	row[0] = 1;
	for (int i = 1; i<= rows-1; i++){
		for (int j = 1; j<= rows-i-1; j++){
			printf(" ");
		}
		for (int j = 0; j<=i-1; j++){
			if(i=0){
				printf("1");
			}
			else{
				printf("%d", row[j]+row[j+1]);
			}
			printf("1 ");
			row[i]=1;
			printf("\n");
		}
	}
	return(0);
}




