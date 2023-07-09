#include <stdio.h>

 void decimalToBinary (int input){
    int i, j, output[20];
    for(i = 0; input > 0; i++){
        int r = input % 2;
        output[i] = r;
        input = input/2;
    }
    printf("Binary equivalent: ");
    for(j=i-1; j>=0; j--){
        printf("%d", output[j]);
    }
}

 void decimalToOctal (int input){
    int i, j, output[20];
    for(i = 0; input > 0; i++){
        int r = input % 8;
        output[i] = r;
        input = input/8;
    }
    printf("Octal equivalent: ");
    for(j=i-1; j>=0; j--){
        printf("%d", output[j]);
    }
}

 void decimalToHexadecimal (int input){
    int i, j, output[20];
    for(i = 0; input > 0; i++){
        int r = input % 16;
        output[i] = r;
        input = input/16;
    }
    printf("Hexadecimal equivalent: ");
    for(j=i-1; j>=0; j--){
        if(output[j]<9){
            printf("%d", output[j]);
        }
        else{
            switch(output[j]){
                case 10: printf("A");
                break;
                case 11: printf("B");
                break;
                case 12: printf("C");
                break;
                case 13: printf("D");
                break;
                case 14: printf("E");
                break; 
                case 15: printf("F");
                break;
            }
        }
    }
}

int main() {
    int decimal;
    scanf("%d", &decimal);
    
    if (decimal<=0){
        printf("Error: Value should be greater than 0");
    }
    else{
        decimalToBinary(decimal);
        printf("\n");
        decimalToOctal(decimal);
        printf("\n");
        decimalToHexadecimal(decimal);
    }
    return 0;
}
