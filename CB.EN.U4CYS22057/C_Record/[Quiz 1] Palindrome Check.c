#include<stdio.h>
#include<math.h>

void main(){
    int input, temp, digits=0, flag = 0;
    scanf("%d", &input);
    if(input<0){
        input = -input;
    }
    
    temp = input;
    
    while(temp!=0){
        temp = temp/10;
        digits = digits+1;
    }
    
    int a, b, c;
    while(digits>=2){
        temp = input;
        a = temp % 10;
        c = temp/(pow(10,digits-1));
        
        b = pow(10, digits-1);
        input = input%b;
        input = input/10;
        
        digits = digits - 2;
        
        if(a!=c){
            flag=1;
        }
    }
    if(flag==1){
        printf("Is not a palindrome.");
    }
    else{
        printf("Is a palindrome.");
    }
}
