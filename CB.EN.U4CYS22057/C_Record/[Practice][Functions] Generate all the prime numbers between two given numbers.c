#include<stdio.h>

int isPrime(int i){
    int j, flag = 0;
    for(j=2; j<i; j++){
        if(i%j==0){
            flag = 1;
        }
    }
    if(flag==0){
        return 0;            
    }
    else if(flag==1){
        return 1;
    }
}

void generatePrime(int start, int stop){
    int i;
    printf("Prime numbers between %d and %d are:", start, stop);
    for(i=start; i<=stop; i++){
        if(isPrime(i)==0){
            printf(" %d", i);
        }
    }
}

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    generatePrime(a, b);

}
