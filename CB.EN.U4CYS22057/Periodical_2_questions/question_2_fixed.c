#include<stdio.h>

int main(){
	int rows, tmp, tmp1;
	printf("Enter the number of rows ");
	scanf("%d", &rows);
	int row[rows];
    
    printf("\n");
    
	for (int i = 1; i<= rows-1; i++){
		printf(" ");
	}
	printf("1\n");
	row[0] = 1;
	for (int i = 1; i<= rows-1; i++){
		for (int j = 1; j<= rows-i-1; j++){
			printf(" ");
		}
		for (int j = 0; j<=i-1; j++){
			if(j==0){
				printf("1 ");
			    tmp = 1;
			}
			else{
				printf("%d ", tmp+row[j]);
				tmp1 = tmp;
				tmp = row[j];
				row[j]=tmp1+row[j];
			}
		}
		printf("1");
		row[i]=1;
		printf("\n");
	}
	return(0);
}

